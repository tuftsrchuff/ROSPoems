from flask import Flask, request, jsonify
import json

app = Flask(__name__)
poemsCount = None

'''
    API to handle GET/POST requests to serve list of poems and update json
    db with additional poems
'''

@app.route('/mission', methods=['GET'])
def get_data():
    #Check poem counts on client vs server
    poems = int(request.args.get('poems'))
    retMessage = {
        "update": False,
        "poems": None
    }
    
    if poems != poemsCount:
        #Return full list of poems, client has different number of poems
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

#Base load of poem numbers when starting the server
#Saves loading full list each time a check is needed
def loadPoems():
    with open("poems.json", "r") as file:
        data = json.load(file)
        print(len(data))
        global poemsCount
        poemsCount = len(data)

if __name__ == '__main__':
    loadPoems()
    app.run(host="0.0.0.0", port=5000)