# Using an Arduino to control LEGO EV3 Motors

## About

The LEGO Mindstorms EV3 is a robotics kit that connects LEGOs to robotics. However, the functionality of the EV3's Brick is limited compared to the Arduino microcontrollers. However, when I switched to Arduino, I didn't have the resources to 3D print casing parts, but I had plenty of LEGO bricks lying around. This project was created to guide others in connecting their Arduinos to their EV3 motors, which would not only allow for greater functionality but also greater accessibility to those already possessing a LEGO Mindstorms kit.

## How

The [LEGO Mindstorms website](https://education.lego.com/en-us/product-resources/mindstorms-ev3/downloads/developer-kits#ev3-hardware-developer-kit){:target="_blank" rel="noopener"} provides a manual that shows the functions of each pin in the RJ12 cable.

### The L293D Chip

This chip will be used to drive the EV3 motors, as it can drive voltages of up to 36V. However, we only need 9V for the EV3 motors. 

![image](https://github.com/VinsonOi/ArduinoToLEGO/assets/30189257/55582b80-ca6e-4576-be39-efdae227e752)

Since the Arduino UNO R3 isn't capable of outputting voltages of 9V, we will need a separate power supply module to help us.

### Schematic

![image](https://github.com/VinsonOi/ArduinoToLEGO/assets/30189257/ac15f635-e985-4ecc-8734-6a2c06debc03)
