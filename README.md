In this task, I was able to get out of the web chat and gain shell access.

I noticed that when we send a message in the chat box. The web request is sent to the API in this format:
<img width="290" alt="image" src="https://raw.githubusercontent.com/Jayklean123/Task-4/main/chrome-payload.png">


A key was also sent along with the content in the post request. Then I sent these requests using Postman. I tried different texts and keys. When I tried very large values of the key, I got in response that the key should be
less than or equal to 65536. 
<img width="1169" alt="image" src="https://raw.githubusercontent.com/Jayklean123/Task-4/main/big-key-request.png">

Then I tried the key value of 65536. And I got this response -
<img width="1169" alt="image" src="https://raw.githubusercontent.com/Jayklean123/Task-4/main/success-postman.png">

Then I connected to that port using my terminal. Also downloaded the C script and corrected the syntax. I uploaded the correct syntax C file. 
But I couldn't do much after. Went on to focus on the first task of competitive programming.

Thank you
