const Joi = require('joi');
const cors = require('cors');
const express = require('express');

if(process.env.ENV !== "Prod"){
    require("dotenv").config();
};


const app = express();

app.use(express.json());
app.use(cors());


const chatgpt = require('./routes/api/chatgpt');
const device = require('./routes/api/device');

app.use('/api/chatgpt',chatgpt)
app.use('/api/device',device)

const port = process.env.PORT || 3000;
app.listen(port,() => console.log(`Listenting on port ${port}...`));
console.log(process.env.OPENAI_API_KEY)