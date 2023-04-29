const express = require('express');
const Joi = require('joi');
const {Configuration, OpenAIApi} = require("openai");

const router = express.Router();
if(process.env.ENV !== "Prod"){
    require("dotenv").config();
};


router.get('/',  async (req,res) => {


    const configuration = new Configuration({
        organization: "org-GMdCDnj15FhwhA2TySpMrUUT",
        apiKey: process.env.OPENAI_API_KEY,
    });

    const openai = new OpenAIApi(configuration);


    const response = await openai.createChatCompletion({
        model: "gpt-3.5-turbo",
        //model: "gpt-3.5-turbo-0301",
        messages: [
            {
                role: "system",
                content: "You are a customer support asssitant.",
            },
            {
                role: "user",
                content: "Hello where can i finde the easte cucumbers?",
            },
        ],

    });
    
    //console.log(response.data.choices[0].message.content)
    
    
    res.send(JSON.stringify({response: response.data.choices[0].message.content}))
});


router.post('/', async (req,res) => {    
    const result = validateTextMessages(req.body);  
    if (result.error) {
        res.status(400).send(result.error.message);
        console.log(result.error.message);
        return;
    };

    console.log(result.value)
    
    const configuration = new Configuration({
        organization: "org-GMdCDnj15FhwhA2TySpMrUUT",
        apiKey: process.env.OPENAI_API_KEY,
    });

    const openai = new OpenAIApi(configuration);


    const response = await openai.createChatCompletion({
        model: "gpt-3.5-turbo",
        //model: "gpt-3.5-turbo-0301",
        messages: result.value.messages

    });
    
    //console.log(response.data.choices[0].message.content)
    
    
    res.send(JSON.stringify({response: response.data.choices[0].message.content}))
    
   //console.log(result.value)
   //res.send(result.value)
});

function validateTextMessages(messages){
    const schema = Joi.object({
        messages: Joi.array().items(
            Joi.object({
                role : Joi.string().required(),
                content : Joi.string().required()
              })
        ).min(1).required()
    });
    return schema.validate(messages);

};






module.exports = router;

