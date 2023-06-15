using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

using System;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading;
using System.Threading.Tasks;
using System.Text.RegularExpressions;

using System.Text;




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
        string urlImages = "https://v43771.1blu.de/api/images";
        static string urlChatGpt = "https://v43771.1blu.de/api/chatgpt";
        string urlTruncateDb = "https://v43771.1blu.de/api/db/truncate";

        // Sends the given payload to the IRIS server 

        static string authenticate(string username = "PXnCOz2cYHvaeIZu8jxc", string password = "TCEGOwL9GIzzMLDEVbNuyIsdNd42vD")
        {
            string auth = username + ":" + password;
            auth = System.Convert.ToBase64String(System.Text.Encoding.GetEncoding("ISO-8859-1").GetBytes(auth));
            auth = "Basic " + auth;
            return auth;
        }
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


        public static async Task<string> SendStringToServerAsync(string data)
        {
            using (HttpClient client = new HttpClient())
            {
                // Convert the username and password to Base64
                string username = "PXnCOz2cYHvaeIZu8jxc";
                string password = "TCEGOwL9GIzzMLDEVbNuyIsdNd42vD";
                string auth = Convert.ToBase64String(Encoding.ASCII.GetBytes(username + ":" + password));
                //string auth = authenticate();


                // Set the Authorization header with Basic authentication
                client.DefaultRequestHeaders.Authorization = new System.Net.Http.Headers.AuthenticationHeaderValue("Basic", auth);
                var content = new StringContent(data, Encoding.UTF8, "text/plain");
                var requestMessage = new HttpRequestMessage(HttpMethod.Post, urlChatGpt);
                requestMessage.Content = content;
                requestMessage.Headers.Authorization = new AuthenticationHeaderValue("Basic", auth);



                

                try
                {
                    var result = await client.SendAsync(requestMessage);
                    //HttpResponseMessage response = await client.PostAsync(urlChatGpt, content);
                    //response.EnsureSuccessStatusCode();
                    result.EnsureSuccessStatusCode();
                    string responseContent = await result.Content.ReadAsStringAsync();
                    return responseContent;


                    //string responseContent = await response.Content.ReadAsStringAsync();
                    //return responseContent;
                    //return null;
                }
                catch (Exception e)
                {
                    Console.WriteLine("Error: " + e.Message);
                    return null;
                }
            }
        }

        public static async Task Main(string data)
        {
            string stringData = data; // The string to be sent

            string response = await SendStringToServerAsync(stringData);

            if (response != null)
            {
                Console.WriteLine("Response from server: " + response);
            }
        }
    







    public string PostPayloadToServer(string payload)
        {
            //Dictionary<string, string> responseDict = new Dictionary<string, string>();
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