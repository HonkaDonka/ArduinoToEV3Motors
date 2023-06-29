# Using an Arduino to control LEGO EV3 Motors

#### Connecting an Arduino to LEGO Motors not only allows for greater flexibility in designing but also allows for LEGO bricks to be integrated when other materials and resources aren't available.

## The Hardware Developer Manual

#### The [LEGO website](https://education.lego.com/en-us/product-resources/mindstorms-ev3/downloads/developer-kits#ev3-hardware-developer-kit) provides a manual that shows the functions of each pin in the RJ12 cable.

![image](https://github.com/VinsonOi/ArduinoToLEGO/assets/30189257/48acb6e1-cd50-4cc2-8897-e04f9d48eaa9)

## The L293D Chip

#### This chip will be used to drive the EV3 motors, as it can drive voltages of up to 36V. However, we only need 9V for the EV3 motors. 

![image](https://github.com/VinsonOi/ArduinoToLEGO/assets/30189257/2a782dcc-3ad6-4d04-8da8-be50a88afc6d)

Since the Arduino UNO R3 isn't capable of outputting voltages of 9V, we will need a separate power supply module to help us.

![image](https://github.com/VinsonOi/ArduinoToLEGO/assets/30189257/ac15f635-e985-4ecc-8734-6a2c06debc03)
