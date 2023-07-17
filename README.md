# Using an Arduino to control LEGO EV3 Motors

## About

The LEGO Mindstorms EV3 is a robotics kit that blends the lines between LEGO and robotics. Although the EV3's Brick has limited functionality compared to Arduino microcontrollers, my transition to Arduino lacked the necessary resources for 3D printing casing parts. However, I had an abundance of LEGO bricks at my disposal. Thus, this project aims to assist others in integrating their Arduinos with EV3 motors. This not only enhances functionality but also promotes accessibility for those who already own a LEGO Mindstorms kit.

## How

### Hardware Developer Manual

The [LEGO Mindstorms website](https://education.lego.com/en-us/product-resources/mindstorms-ev3/downloads/developer-kits#ev3-hardware-developer-kit) includes a hardware developer manual that shows the pinout of the RJ12 cables that the EV3 utilizes. 

![image](https://github.com/VinsonOi/ArduinoToLEGO/assets/30189257/bc7275f2-7d74-4d44-a0f3-d124374ff1d6)

Pins 1 and 2 are used to control which direction the motor spins. For example, if 1 was HIGH and 2 was LOW, the motor will spin in one direction. If 1 was LOW and 2 was HIGH, then it would spin in the other direction. 

Pins 5 and 6 are used for the rotary encoder, which can give us information on the orientation of the motor. 

### The L293D Chip

This chip will be used to drive the EV3 motors, as it can drive voltages of up to 36V. However, we only need 9V for the EV3 motors.

[This link](https://www.robotix.in/tutorial/auto/motor_driver/) provides a great explanation of how this motor driver functions. 

![image](https://github.com/VinsonOi/ArduinoToLEGO/assets/30189257/7980f1d7-6336-4dcd-92a4-360ae3bbc679)

This chip is capable of driving two motors, but for this project, we will only need to use one side of the L293D since we are just connecting to a singular motor.

### External Power Source

Since the Arduino isn't capable of outputting 9V, an external power source is also needed. When assembling the project, make sure the grounds of the power source and the Arduino are connected together or else it may not function properly. 

### Schematic

This schematic includes connections to the motor and its encoder.

![image](https://github.com/VinsonOi/ArduinoToLEGO/assets/30189257/bc7f618f-4df0-4fd0-b1e1-76a68a82ded9)

## Steps

We can wire the motor to the L293D chip just like with a normal motor. Pins 1 and 2 on the motor go to output 1 and 2 on the L293D. The input pins along with the enable should connect to the Arduino. In my example code I have them connected to pins 3, 4 and 5.
