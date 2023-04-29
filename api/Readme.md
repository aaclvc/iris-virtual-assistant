# Run Production 
Run the docker-compose.yml from this directory. 
Change the "OPENAI_API_KEY" entry in the document.

    sudo docker-compose up -d

Depending on which environment you are running you either have to adapt the compose or build a new container from the directory. 

The container are currently stored in the docker registry: kaiser0815/nodejs_api_test.  
The arm tag is for linux 64-Bit and the amd tag for Windows 

# ChatGPT integration

Through the container ChatGPT can be queried with a "Get" and "Post" request. 
The "Get" request is just for testing purposes, to check if the connection is working. Navigate to the string YOUR_IP:YOUR_PORT\api\chatgpt

The response is a response from ChatGPT for a predetermined question. 
If this works you can make a "Post" request. Post to the same link a JSON Object in the following format. The number of elements in the array can be enhanced.
```javascript
{
    "messages": [
            {
                "role": "system",
                "content": "You are a customer support asssitant."
            },
            {
                "role": "user",
                "content": "Hello where can i finde the easte cucumbers?"
            }
        ]
}

```
This is just an example. However role can be one of three options: system, user or assistant. 
If you dont use this format, you will get an error message.

# Development 
Download the node.js enginge and instll with the wizard. 
https://nodejs.org/en  
Download Docker Desktop and install with the wizard.
https://www.docker.com/

For the WebServer API we will use the express framework. Navigate to the current "node.js" directory.
For install enter the following commands:

	npm install express --save
	npm install joi 
	npm install cors --save
	npm install -g nodemon
	npm install openai
	npm install dotenv --save

Add the file ".env" into the directory of the project and enter the following string with the API key and the port on which you want to run the app.

	OPENAI_API_KEY = YOUR_API_KEY
	PORT = YOUR_PORT
    ENV = Dev

To start the server navigate to the directory and enter the following command:

    nodemon index.js




## Docker Setup & Container Management
Install docker on a linux machine:

    sudu apt-get update

    sudo apt install docker.io docker-compose -y

To create an image from the docker file run the following command: 

	docker image build --platform linux/arm64/v8 -t kaiser0815/nodejs_api_test:arm64.v1 ./app/

    docker push kaiser0815/nodejs_api_test:arm64.v1

For Windows:

    docker image build --platform amd64 -t kaiser0815/nodejs_api_test:amd64.v1 ./app/

    docker push kaiser0815/nodejs_api_test:amd64.v1


