# arduino_Wifi_Datastream
a data stream displayed graphically using adafruit IO application and an ESP8266 arduino
-------------------------------------------------------------------------------------------------

Download the Arduino IDE from https://www.arduino.cc/en/Main/Software
And choose your operating system from the list 
![arduino ide](https://user-images.githubusercontent.com/6255058/33036129-da2a0340-ce2d-11e7-821b-460d44698b00.JPG)

Go to https://wiki.wemos.cc/tutorials:get_started:get_started_in_arduino 
And copy the link http://arduino.esp8266.com/versions/2.3.0/package_esp8266com_index.jsonin the additiona board manager url (witch can be found under files -> preferences ) 
![extra boards](https://user-images.githubusercontent.com/6255058/33036195-fbb5a370-ce2d-11e7-8245-cf6a82dbdfae.JPG)

The required library’s found in the Arduino library manager
![libary maneger](https://user-images.githubusercontent.com/6255058/33036263-26019ae4-ce2e-11e7-89f3-74459195792e.png)


Adafruit  IO arduino

![arduinoiolib](https://user-images.githubusercontent.com/6255058/33036295-3b020d3e-ce2e-11e7-995f-50f1d9771ef1.JPG)

Adafruit MQTT


![arduino mqtt lib](https://user-images.githubusercontent.com/6255058/33036341-5b642878-ce2e-11e7-8d83-9bcadc17bc12.JPG)


Arduino http client


![arduino https client](https://user-images.githubusercontent.com/6255058/33036393-84768788-ce2e-11e7-8126-d26b68d9651c.JPG)


How to create a adafruit account:
Go to : https://accounts.adafruit.com/users/sign_up and singe up for a free account 
![adafruit acount](https://user-images.githubusercontent.com/6255058/33036481-cb9df93e-ce2e-11e7-948d-1d0dab44ff63.JPG)



Then go to io.adafruit.com and sign in with the account created in the previous step 

![adafruit io](https://user-images.githubusercontent.com/6255058/33036545-0e4f4f12-ce2f-11e7-9ce5-2d9c9ac3e0ca.JPG)

After you singed in to adafruit IO  go to the dasboards tab and creat a new one and name it temperature for example 

![dasboard](https://user-images.githubusercontent.com/6255058/33036597-2f54419a-ce2f-11e7-9960-5eed50c2ac71.JPG)

After you created your new dashboard click on the name and add a graph and a stream by clicking on add  new block 

![add block](https://user-images.githubusercontent.com/6255058/33036651-58ee108a-ce2f-11e7-9177-2c3a3f9c7b25.JPG)

After you created your dashboard you need to generate a key for your code to acsess the service  by clicking on the key symbol and take note of it  and also take note of your user name 

![key](https://user-images.githubusercontent.com/6255058/33036669-692cba46-ce2f-11e7-96d8-3032d23390f9.JPG)


After that go to https://github.com/bendelathouwer/arduino_Wifi_Datastream
And  press the green download button and download the zip file and unzip the file 

![github](https://user-images.githubusercontent.com/6255058/33036706-87660148-ce2f-11e7-8924-eb6e00c29a81.JPG)

Open the Arduino file 

![arduino file](https://user-images.githubusercontent.com/6255058/33036719-943cd072-ce2f-11e7-90c7-40b5f0951b8e.JPG)


The you need to go to the config.h file and fill in you’r Adafruit IO username and  key also you need to fill in you’r WIFI’s ssid and password 

![configuration of the esp8266](https://user-images.githubusercontent.com/6255058/33036750-a9f99256-ce2f-11e7-9ff2-6778fa0a6c42.JPG)


Go to the board selector and choose you’r WEEMOS D1 R2 board and hit compile and upload 

<img width="1920" alt="board selector" src="https://user-images.githubusercontent.com/6255058/33036879-1126412c-ce30-11e7-95ee-bf76f84fbfd1.png">

Enjoy your result 😊 




