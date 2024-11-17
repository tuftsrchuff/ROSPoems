from flask import Flask, request, jsonify
import json

app = Flask(__name__)
poemsCount = 1

@app.route('/mission', methods=['GET'])
def get_data():
    #Check poems on client vs server
    poems = int(request.args.get('poems'))
    retMessage = {
        "update": False,
        "poems": None
    }
    
    if poems != poemsCount:
        #Return full list of poems, new ones added
        with open("poems.json", "r") as file:
            data = json.load(file)
            retMessage["poems"], retMessage["update"] = data, True
            return jsonify(retMessage)

    else:
        #Poems already match so just return
        return jsonify(retMessage)

@app.route('/mission', methods=['POST'])
def add_data():
    #Verify data then update poem count and add new poem
    #Takes list of poems separated by lines - 2D array
    if not request.is_json:
        return jsonify({"error": "Request must be JSON"}), 400
    
    #Add new poems to json file
    data = request.get_json()
    poems = data.get("poems")
    with open("poems.json", "r") as file:
        data = json.load(file)
        for poem in poems:
            data.append({"poem": poem})
        
    with open("poems.json", "w") as file:
        json.dump(data, file)
    
    #Update global count of poems
    global poemsCount
    poemsCount += len(poems)
    print("New entries added")

    return jsonify({"Added": True})

#Base load of poem numbers
def loadPoems():
    with open("poems.json", "r") as file:
        data = json.load(file)
        print(len(data))
        global poemsCount
        poemsCount = len(data)

if __name__ == '__main__':
    loadPoems()
    app.run()