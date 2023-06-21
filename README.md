In this task, I was able to get out of the web chat and gain shell access.

I noticed that when we send a message in the chat box. The web request is sent to the API in this format:
![image](https://github.com/Jayklean123/Task-4/assets/115914382/972f4fc5-6da0-4bb7-a75c-d702a791f95b)


A key was also sent along with the content in the post request. Then I sent these requests using Postman. I tried different texts and keys. When I tried very large values of the key, I got in response that the key should be
less than or equal to 65536. 
![image](https://github.com/Jayklean123/Task-4/assets/115914382/51e91870-acbd-4a50-97ad-442f8a934dcf)

Then I tried the key value of 65536. And I got this response -
![image](https://github.com/Jayklean123/Task-4/assets/115914382/bf066dee-bbe8-4006-b304-5d5d9cb62a55)

Then I connected to that port using my terminal. Also downloaded the C script and corrected the syntax. I uploaded the correct syntax C file. 
But I couldn't do much after. Went on to focus on the first task of competitive programming.

Thank you
