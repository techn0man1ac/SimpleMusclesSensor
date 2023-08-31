[![UA_version_README](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Flags/UA%402x.png)](https://github.com/techn0man1ac/SimpleMusclesSensor)
[![GB_version_README](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Flags/GB%402x.png)](https://github.com/techn0man1ac/SimpleMusclesSensor/blob/main/README_EN.md)

# SimpleMusclesSensor

WARNING! I, as the author, do not bear any responsibility for your actions, since it is physical contact(body contact) with the USB power bus, there is a possibility of getting a network potential of 230 V. Observe all safety measures.

![Main](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Electrodes/20230824_162535.jpg "Main")

This is a simple muscle activity sensor, that works on the capacitive principle.

Video demonstration:

https://www.youtube.com/shorts/VuWuCSAJUlg

# Electrodes construction

![How to make electrode](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Electrodes/20230824_162405.jpg "How to make electrode")

I made the electrodes of the sensor from stainless steel (the back cover of the wristwatch). Ideally, it should be "medical steel" (or simply stainless steel ;) ).

![2 parts of electrodes](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Electrodes/20230824_164308.jpg "2 parts of electrodes")

I sawed it for two identical parts in the shape of a crescent.

![Soldering wires to stainless steel](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Electrodes/20230824_180009.jpg "Soldering wires to stainless steel")

Stainless steel itself does not solder with solder, so I had to use acid, and then wash it well with alcohol, still this part is in contact with my skin. The whole process took 40 minutes.

![Sensor construction](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Electrodes/Sensor.jpg "Sensor construction")

Next, I glued it to a rubber belt with dermantin in the middle with hot glue, put it on a fluffy zipper (they are called "Velcro" in the people) for convenient putting on and removing the sensor. In the photo, there are 3 contacts, left (IN-), right (IN+) and below reference (3.3V).

# Schematic

![Sensor on bread board](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Electrodes/20230825_123654.jpg "Sensor on bread board")

This is a very simple sensor of muscle activity based on a general-purpose operational amplifier LM358N, three electrodes are used (IN-, IN+ and 3.3V reference, connected through a series-connected resistor with a rating of 2 MΩ), the OP is connected according to the negative feedback loop scheme and has a gain of 1 to 110.

![Schematic SimoleMusclesSensor](https://raw.githubusercontent.com/techn0man1ac/SimoleMusclesSensor/main/Imgs/Schematic_SimoleMusclesSensor_2023-08-27.png "Schematic SimoleMusclesSensor")

Always actual circuitry is here:

https://oshwlab.com/raznie.podelki/simplemusclessensor

# How it's work?

![Sensor output scope](https://github.com/techn0man1ac/SimpleMusclesSensor/blob/main/Imgs/SensorOutputScope.gif "Sensor output scope")

The principle of operation of the sensor is very simple - if you make contact with the skin, the operational amplifier start oscillations and generating pulses with a frequency of 230 V network (i.e. 50 Hz), and as the contacts are pressed against the skin, the duty cycle decreases, this is detected using the pulseIn() function:

https://www.arduino.cc/reference/en/language/functions/advanced-io/pulsein/

# Data visualizations

Very important - learn how to achieve the maximum sensitivity of the sensor and you need data visualization, I used an open source project called "Serial-Oscilloscope":

![Data visualizations](https://raw.githubusercontent.com/techn0man1ac/SimoleMusclesSensor/main/Imgs/2023-08-25%20195831.png "Data visualizations")

Project link:

https://github.com/xioTechnologies/Serial-Oscilloscope
