const express = require('express');
const axios = require('axios');

const router = express.Router();
if(process.env.ENV !== "Prod"){
    require("dotenv").config();
};

router.get('/',  async (req,res) => {

    const imageURL = req.query.imageURL;
    const filetype = req.query.filetype;
    let config = {
    method: 'get',
    url: `${process.env.OCR_API_URL}parse/imageurl?apikey=${process.env.OCR_API_KEY}&url=${imageURL}&filetype=${filetype}&isOverlayRequired=true`,
    headers: { 
        'content-type': 'image/png', 
        }
    };

    let data;
    await axios.request(config)
        .then((response) => {
            data = JSON.stringify(response.data)
    }).catch((error) => {
        console.log(error);
    });

    return res.send(data)
});

module.exports = router;