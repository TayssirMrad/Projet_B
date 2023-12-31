# Projet_B
Descriptif du projet:
Le but de ce projet est de créer un système capable de compter des composants électroniques en se basant sur la reconnaissance et la classification d'images. Ce dispositif utilise une carte Arduino Nano 33 BLE et une caméra OV7670.
Les composants à compter sont placés sur un espace de travail et défilent individuellement toutes les deux secondes (leur déplacement se fait manuellement). Le système effectue la reconnaissance grâce à un modèle de Deep Learning entraîné préalablement avec TensorFlow Lite ou Edge Impulse. 
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/5b40c25e-cc23-473c-9415-ab105d92f6ea)

## 1) Getting Started with OpenMV
### Updating the Bootloader:
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/97ded7ce-1ed4-4985-ac2d-d3e439d0ff92)
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/73f0b4a7-b962-4b5d-8bc2-20d356c10a6c)
typed : y (yes)
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/d1960255-c158-4023-914a-01962233be92)
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/23159886-7c82-429a-9548-a185dd127f7e)
### Flashing the OpenMV Firmware :
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/bb977e66-09cb-411a-af59-1274741bcccf)
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/f91068b7-b339-49ac-a805-43c7f9077aa5)
###### 1er Test :
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/4b14a360-f72e-4de4-853d-50376a637be9)

## 2) Deploying the ML model to the board :
### Optimizing the model with EON Tuner :
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/edb56d8f-df36-4275-90b8-db0114ab22b8)
### Testing the optimized model :
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/922fc86d-01ee-4483-b168-ee28bb04514b)

### Building and Downloading The OpenMP Firmwork:
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/8e825de7-deff-4bc3-81b3-794c0c2352f3)

### Testing the code on Aduino IDE :
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/63f48a56-80be-4177-953d-ac66f4a324dc)

## 3) Connecting Arduino and pc via Bluetooth :
### Installing libraries : Arduino_APDS9960 & ArduinoBLE 

## 4) NodeRed Dashboard :
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/6940c8f5-036e-45ea-a3cb-ed1882906425)

#### Installing NodeRED :
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/38e7f41e-35d5-46d5-887c-86afb6986410)
#### Launching Node-RED :
![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/b8ca244c-20e1-4127-8f15-d603b3ae1678)

#### For Bluetooth Connection :
Palettes used : node-red-contrib-noble-bluetooth
Here is a exemple of how we can print on the dashboard the transmitted data :

![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/592b5c10-9525-44d1-b2ec-ffa9f5b33671)

In this project a bluetooth configuration is needed as shown below :

![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/2405c3d5-c994-4bc0-8134-87c79c7e4acf)

In the node red, we used modules to activate and desactivate the scan and connection process (Connect & Disconnect).

We can also see in the debugger mode the transmitted value is in the buffer section (in hex) :

![image](https://github.com/TayssirMrad/Projet_B/assets/60198040/8fe946a6-acd7-4964-9624-af7831630e78)
