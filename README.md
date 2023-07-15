# Using an Arduino to control LEGO EV3 Motors

## About

The LEGO Mindstorms EV3 is a robotics kit that blends the lines between LEGO and robotics. Although the EV3's Brick has limited functionality compared to Arduino microcontrollers, my transition to Arduino lacked the necessary resources for 3D printing casing parts. However, I had an abundance of LEGO bricks at my disposal. Thus, this project aims to assist others in integrating their Arduinos with EV3 motors. This not only enhances functionality but also promotes accessibility for those who already own a LEGO Mindstorms kit.

## How

The [LEGO Mindstorms website](https://education.lego.com/en-us/product-resources/mindstorms-ev3/downloads/developer-kits#ev3-hardware-developer-kit) includes a hardware developer manual that shows the pinout of the RJ12 cables that the EV3 utilizes. 

![image](https://github.com/VinsonOi/ArduinoToLEGO/assets/30189257/bc7275f2-7d74-4d44-a0f3-d124374ff1d6)

Pins 1 and 2 are used to control which direction the motor spins. For example, if 1 was HIGH and 2 was LOW, the motor will spin in one direction. If 1 was LOW and 2 was HIGH, then it would spin in the other direction. 

Pins 5 and 6 are used for the rotary encoder, which can give us information on the orientation of the motor. 

### The L293D Chip

This chip will be used to drive the EV3 motors, as it can drive voltages of up to 36V. However, we only need 9V for the EV3 motors. 

![image](https://github.com/VinsonOi/ArduinoToLEGO/assets/30189257/55582b80-ca6e-4576-be39-efdae227e752)

Since the Arduino UNO R3 isn't capable of outputting voltages of 9V, we will need a separate power supply module to help us.

### Schematic

![image](https://github.com/VinsonOi/ArduinoToLEGO/assets/30189257/ac15f635-e985-4ecc-8734-6a2c06debc03)
