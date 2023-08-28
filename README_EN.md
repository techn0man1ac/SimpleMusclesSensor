# SimpleMusclesSensor

/* тут має бути піктограмка прапорця з Українським та Англійським прапором для переключення між мовами(файлами README.md та README_EN.md) */

This is a simple muscle activity sensor based on LM358, that works on the capacitive principle.

# Sensor electrodes constructions

# Schematic

This is a very simple sensor of muscle activity based on a general-purpose operational amplifier LM358N, three electrodes are used (IN-, IN+ and 3.3V reference, connected through a series-connected resistor with a rating of 2 MΩ), the opamp is connected according to the negative feedback loop scheme and has a gain of 1 to 110.

![Data visualizations](https://raw.githubusercontent.com/techn0man1ac/SimoleMusclesSensor/main/Imgs/Schematic_SimoleMusclesSensor_2023-08-27.png "Data visualizations")

The actual scheme is always here:

https://oshwlab.com/raznie.podelki/simplemusclessensor

# Data visualizations

For data visualization, I used an open source project called "Serial-Oscilloscope":

![Data visualizations](https://raw.githubusercontent.com/techn0man1ac/SimoleMusclesSensor/main/Imgs/2023-08-25%20195831.png "Data visualizations")

Project link:

https://github.com/xioTechnologies/Serial-Oscilloscope
