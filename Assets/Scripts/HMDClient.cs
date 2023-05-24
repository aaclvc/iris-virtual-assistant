using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

using System;
using System.Net.Http;
using System.Threading;
using System.Threading.Tasks;
using System.Text.RegularExpressions;

//using System.Text.Json;
//using UnityEngine.JSONSerializeModule;


namespace HMDClient
{ 
    [System.Serializable]
    public class ChatGptResponse
        //Brauchen wir eventuell noch, falls wir den Kontext benötigen.
    {
        public Dictionary<string, string> Messages;
        public string role;
        public string content;
        public string asn;
        public string city;
        public string continent_code;
        public string country;
        public float country_area;
        public string country_calling_code;
        public string country_capital;
        public string country_code;
        public string country_code_iso3;
        public string country_name;
        public int country_population;
        public string country_tld;
        public string currency;
        public string currency_name;
        public bool in_eu;
        public string ip;
        public string languages;
        public float latitude;
        public float longitude;
        public string network;
        public string org;
        public string postal;
        public string region;
        public string region_code;
        public string timezone;
        public string utc_offset;
        public string version;
        
        public static ChatGptResponse CreateFromJSON(string jsonString)
        {
            return JsonUtility.FromJson<ChatGptResponse>(jsonString);
            
        }

    }

   

    public class IrisClient
    

    {
        // endpoints on server
        string urlImages = "http://v43771.1blu.de:1235/api/images";
        string urlChatGpt = "http://v43771.1blu.de:1235/api/chatgpt";
        string urlTruncateDb = "http://v43771.1blu.de:1235/api/db/truncate";


        // Sends the given payload to the IRIS server 

        public void GetFromChatgpt()
        {
            Debug.Log("GET From ChatGPT");
            using(var client = new HttpClient())
            {
                var endpoint = new Uri(urlChatGpt);
                var result = client.GetAsync(endpoint).Result;
                var finalResult = result.Content.ReadAsStringAsync().Result;
                Debug.Log(finalResult);
            }
        }

        
        public string PostPayloadToServer(string payload)
        {
            Dictionary<string, string> responseDict = new Dictionary<string, string>();
            Debug.Log("POST To ChatGPT");
            using (var client = new HttpClient())
            {
                HttpResponseMessage response;
                var endpoint = new Uri(urlChatGpt);
                var contentData = new StringContent(payload);


                response = client.PostAsync(endpoint, contentData).Result;
                string responseBody = response.Content.ReadAsStringAsync().Result;

               
                

                Debug.Log("--------------RESPONSE BODY TEST-----------------------------");
               
                Debug.Log(responseBody);


                /*
                 *  Brauchen wir eventuell ebenfalls noch, falls wir den Kontext benötigen sollten 
                 * 
                ChatGptResponse jsonData = ChatGptResponse.CreateFromJSON(responseBody);
                Debug.Log(jsonData);
                */

                return responseBody;
          
                
            }
        }

    }
}