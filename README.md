# ROSPoems
This repository contains code for a flask application and two ROS action nodes (a server and client respectively) that communicate poems to each other. The ROS action client makes a GET request every 1 second to the flask API endpoint, checking if there are new poems available. If there are, it then sends each poem to the action server for processing. The action server can handle multiple requests simulataneously, queuing each new poem until its current processing task is done. All clients receive feedback on the status of their poem processing from the action server. 

## API
The API handles GET and POST requests using Flask at the /mission endpoint. The GET requests include one attribute: poems. This is simply the count of the number of poems a client has and if it does not match the amount of poems in the poems.json database then it will receive an update with the full list of poems.
GET API:
Message = 
    {
        "poems": Int
    } 

Return Message =
    {
        "update": Boolean,
        "poems": 2D array of poems, each index is a separate line in the array
    }
Ex:
Message = 
    {
        "update": True,
        "poems": [["Poem 1 Line 1", "Poem 1 Line 2"], ["Poem 2 Line 1", "Poem 1 Line 1"]]
    }


POST API:
Message = 
    {
        "poems": 2D array of poems, each index is a separate line in the array
    }
Ex:
Message = 
    {
        "poems": [["Poem 1 Line 1", "Poem 1 Line 2"], ["Poem 2 Line 1", "Poem 1 Line 1"]]
    }

Return Message= 
    {
        "Accepted": Boolean
    }

## ROS Actions
### Action Server
The ROS action server uses a custom message interface to communicate with its clients, defined under ros2_ws/src/custom_interfaces/action/Poem.action. The server receives a poem goal from a client ROS node and accepts it if the poem isn't empty and adds it to the processing queue. The server will then provide feedback as it processes the poem, 1 line per second.

### Action Client
The ROS action client sends a GET request every second to a url parameter (can be changed by passing in a different url parameter to the node). As described in the API section the request is simply the amount of poems the ROS action client server has. If the number of poems is different than the API, it will receive the new list of poems and send each poem to the action server to be processed. It simply prints the feedback as it is received.

### Interface Definition
```
# Goal
string[] poem
---
# Result
bool success
string message
---
#Feedback
int32 progress
```

## Building Docker Image and Running
To best see the full functionality it is best to build the hosting and ROS images separately and launch as many action clients within a docker container as you need.
Steps:
1. Run `docker build -t ros2-actions .` inside /ros2_ws/ to build Docker image for the ROS actions
2. Run `docker build -t flask-api .` inside /hosting/ to build the Docker image for the Flask server
3. Run `docker run -it --rm --network ros2-network -p 5000:5000 --name flask-api flask-api` to start the Flask server
4. Run `docker run -it --rm --network ros2-network --name action-server ros2-actions` to start the first action container. NOTE: You will run this each time you want to run another ROS2 action server/client
    a. Inside the container run `ros2 run action_server poems_server` to start the action server
5. Run `docker run -it --rm --network ros2-network --name action-server ros2-actions` for each additional ROS action client you want to run. This is helpful to see the full queing functionality across multiple client nodes.
    a. Inside the container run `ros2 run action_client poems_client`



### Add Poems to DB via POST
This will trigger the clients to update again and start poem processing again. To watch processing happen, all nodes must be running from the Docker setup including Flask server, action server, and any number of action clients.
`curl -X POST http://172.21.0.2:5000/mission -H "Content-Type: application/json" -d '{"poems": [["New", "poem", "new", "poem"],["poem","2", "to", "proccess", "now", "stop"]]}'`