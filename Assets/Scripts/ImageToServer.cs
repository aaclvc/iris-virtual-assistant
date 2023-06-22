using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using TMPro;
using System.Collections;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading.Tasks;

public class ImageLoader : MonoBehaviour
{
    public string imageUrl = "https://192.168.1.122:8080/shot.jpg";
    
    //public string imageUrlUni = "";

    public RawImage rawImage;
    public string urlImageWebserver = "https://v43771.1blu.de/api/images";
    //public string username = "PXnCOz2cYHvaelZu8jxc";
    //public string password = "TCEGOwL9GIzzMLDEVbNuylsdNd42vD";

    void Start()
    {
        StartCoroutine(LoadImageFromURL(imageUrl));
    }


    void Update()
    {
        if (Time.frameCount % 800 == 0)
        {
            StartCoroutine(LoadImageFromURL(imageUrl));
        }
    }

    private IEnumerator LoadImageFromURL(string url)
    {
        using (UnityWebRequest www = UnityWebRequestTexture.GetTexture(url))
        //using (UnityWebRequest www = UnityWebRequest.Get(url))
        {
            yield return www.SendWebRequest();
            if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError("Error loading image: " + www.error);
            }
            else
            {
                // Get the downloaded texture
                Texture2D texture = DownloadHandlerTexture.GetContent(www);
                // Assign the texture to the RawImage component
                rawImage.texture = texture;
                Debug.Log("Right before function Call postImageToServer");
                StartCoroutine(postImageToServer(texture.EncodeToJPG()));
            }
        }
    }

    private IEnumerator postImageToServer(byte[] imageBytes)
    {
        {
            Debug.Log("InFunction Call");
            Debug.Log("Posting Image to server ....");

            WWWForm form = new WWWForm();
            form.AddBinaryData("chatGPT", imageBytes, "image.jpg", "image/jpeg");

            // Send the image to the web server
            UnityWebRequest postRequest = UnityWebRequest.Post(urlImageWebserver, form);
            string authorization = authenticate();
            postRequest.SetRequestHeader("AUTHORIZATION", authorization);

            yield return postRequest.SendWebRequest();

            if (postRequest.result == UnityWebRequest.Result.ConnectionError || postRequest.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError("Error sending image: " + postRequest.error);
            }
            else
            {
                Debug.Log("Image sent successfully!");
            }
        }
    }


    string authenticate(string username= "PXnCOz2cYHvaeIZu8jxc", string password= "TCEGOwL9GIzzMLDEVbNuyIsdNd42vD")
    {
        string auth = username + ":" + password;
        auth = System.Convert.ToBase64String(System.Text.Encoding.GetEncoding("ISO-8859-1").GetBytes(auth));
        auth = "Basic " + auth;
        return auth;
    }
}






/* This didnt cause black screen, but didnt get image
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using TMPro;

public class CameraReceiver : MonoBehaviour
{
    public RawImage displayRawImage;
    public TMP_Text imageOutput;
    //public Renderer displayRenderer;
    public string cameraIpAddress = "http://192.168.1.122:8080"; // Replace with the IP address of your Android phone running IP Webcam

    //private const string VideoFeedEndpoint = "/video"; // The endpoint for accessing the video feed in IP Webcam
    private const string VideoFeedEndpoint = "/shot.jpg"; // The endpoint for accessing the image in IP Webcam

    private void Start()
    {
        StartCoroutine(StartReceivingFrames());
    }

    private IEnumerator StartReceivingFrames()
    {
        // Request the video feed from the IP Webcam app
        UnityWebRequest request = UnityWebRequestTexture.GetTexture(cameraIpAddress + VideoFeedEndpoint);
        yield return request.SendWebRequest();
        imageOutput.text = "after yield";
        if (request.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError("Error requesting video feed: " + request.error);
            imageOutput.text = "Failed to Receive Frame";
            yield break;
        }

        // Get the received texture from the request
        imageOutput.text = "Succeded getting Frame";
        Texture2D receivedTexture = DownloadHandlerTexture.GetContent(request);

        // Set the received texture as the main texture for the display renderer
        //displayRenderer.material.mainTexture = receivedTexture;
        displayRawImage.texture = receivedTexture;


        // Keep updating the texture while the script is active
        while (true)
        {
            yield return new WaitForEndOfFrame();

            // Request a new frame from the IP Webcam app
            request = UnityWebRequestTexture.GetTexture(cameraIpAddress + VideoFeedEndpoint);
            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
            {
                imageOutput.text = "Update Failed";
                Debug.LogError("Error requesting video frame: " + request.error);
                yield break;
            }

            // Update the received texture with the new frame
            imageOutput.text = "Update success";
            receivedTexture = DownloadHandlerTexture.GetContent(request);
            displayRawImage.texture = receivedTexture;

            //displayRenderer.material.mainTexture = receivedTexture;
        }
    }
}
/*











/*

using System;
using System.Collections;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
//using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System.Threading;

using System.Net.Http;
using TMPro;

public class ImageToServer : MonoBehaviour
{

    string urlImages = "http://v43771.1blu.de:1235/api/images";
    public TMP_Text resultText;
    public RawImage passthroughImage;



    void OnEnable()
    {
        Debug.Log("OnEnable");

    }

    void OnDisable()
    {
        Debug.Log("OnDisable");
    }

    
    unsafe void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs)
    {

        if (Time.frameCount % 100 == 0)
        {
            
            //This will be only executed each 100 frames
            Debug.Log("In Function call GetCameraImage");
            resultText.text = "Right before first if call";
            if (!cameraManager.TryAcquireLatestCpuImage(out XRCpuImage image))
            {
                resultText.text = "In first return, image is skipped";
                return;
            }
            resultText.text = "After first return, image has been captured????";
            var conversionParams = new XRCpuImage.ConversionParams
            {
                // Get the entire image.
                inputRect = new RectInt(0, 0, image.width, image.height),

                // Downsample by 2.
                outputDimensions = new Vector2Int(image.width / 2, image.height / 2),

                // Choose RGBA format.
                outputFormat = TextureFormat.RGBA32,

                // Flip across the vertical axis (mirror image).
                //transformation = XRCpuImage.Transformation.MirrorY
            };
            resultText.text = "Try to get Camera Image";
            // See how many bytes you need to store the final image.
            int size = image.GetConvertedDataSize(conversionParams);

            // Allocate a buffer to store the image.
            var buffer = new NativeArray<byte>(size, Allocator.Temp);

            // Extract the image data
            image.Convert(conversionParams, new IntPtr(buffer.GetUnsafePtr()), buffer.Length);

            // The image was converted to RGBA32 format and written into the provided buffer
            // so you can dispose of the XRCpuImage. You must do this or it will leak resources.
            

            // At this point, you can process the image, pass it to a computer vision algorithm, etc.
            // In this example, you apply it to a texture to visualize it.

            // You've got the data; let's put it into a texture so you can visualize it.


            Debug.Log("Processing Image...");
            Texture2D m_Texture = new Texture2D(
                conversionParams.outputDimensions.x,
                conversionParams.outputDimensions.y,
                conversionParams.outputFormat,
                false);

            string base64String = Convert.ToBase64String(m_Texture.EncodeToJPG());
            
            using (var client = new HttpClient())
            {
                HttpResponseMessage response;
                var endpoint = new Uri(urlImages);
                var contentData = new StringContent(base64String);



                //var content = new MultipartFormDataContent();
                //var imageContent = new StreamContent(await imageEditor.GetStream());
                //content.Add(imageContent, "image");

                //var response = await client.PostAsync(endpoint, content);

                MultipartFormDataContent form = new MultipartFormDataContent();

                //form.Add(new StringContent(username), "username");
                //form.Add(new StringContent(useremail), "email");
                //form.Add(new StringContent(password), "password");
                form.Add(new ByteArrayContent(m_Texture.EncodeToJPG()), "chatGPT", "image.jpg");
                //HttpResponseMessage response = await httpClient.PostAsync("PostUrl", form);

                //var formContent = new FormUrlEncodedContent(new[]
                //{
                //    new KeyValuePair<string, string>("comment", comment),
                //    new KeyValuePair<string, string>("questionId", questionId)
                //});

                response = client.PostAsync(endpoint, form).Result; 

                //response = client.PostAsync(endpoint, contentData).Result;
                string responseBody = response.Content.ReadAsStringAsync().Result;


                resultText.text = responseBody;

                Debug.Log("--------------RESPONSE BODY TEST-----------------------------");

                Debug.Log(responseBody);

                buffer.Dispose();
                image.Dispose();
                
                 *  Brauchen wir eventuell ebenfalls noch, falls wir den Kontext ben�tigen sollten 
                 * 
                ChatGptResponse jsonData = ChatGptResponse.CreateFromJSON(responseBody);
                Debug.Log(jsonData);
                
//  }

//}
//}




// Start is called before the first frame update

void Start()
    {
        Debug.Log("Starting Image To Server...");
    }



    // Update is called once per frame
    void Update()
    {
        
        if (Time.frameCount % 2500 == 0)
        {
            //This will be only executed each 2500 frames
            Debug.Log("Update noting happens");
            // Take image
            
            //string result = GetCameraImage();
            //Debug.Log("After Function call");
            //resultText.text = result;


            //session.currentFrame;


            // Send image To server

            // Do something with received image
        }
    }
}
*/