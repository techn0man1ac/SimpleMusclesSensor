[![UA_version_README](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Flags/UA%402x.png)](https://github.com/techn0man1ac/SimpleMusclesSensor)
[![GB_version_README](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Flags/GB%402x.png)](https://github.com/techn0man1ac/SimpleMusclesSensor/blob/main/README_EN.md)

# SimpleMusclesSensor

Це простий датчик м'язової активності, який працює по ємністному принципу.

# Конструкція електродів давача


# Схемотехніка

Це дуже простий датчик м'язової активності оснований на базі операційного підсилювача загального призначення LM358N, використовується три електроди(IN-, IN+ та 3.3В референс, підключається через послідовно підключений резистор номіналом 2 МОм), ОП підключений по схемі петлі негативного зворотного зв'язку і має коефіцієнт посилення 1 до 110.

![Data visualizations](https://raw.githubusercontent.com/techn0man1ac/SimoleMusclesSensor/main/Imgs/Schematic_SimoleMusclesSensor_2023-08-27.png "Data visualizations")

Завжди актуальна схемотехніка знаходиться тут:

https://oshwlab.com/raznie.podelki/simplemusclessensor

# Візуалізація данних

Для візуалізації данних я використав open source проект під назвою "Serial-Oscilloscope":

![Data visualizations](https://raw.githubusercontent.com/techn0man1ac/SimoleMusclesSensor/main/Imgs/2023-08-25%20195831.png "Data visualizations")

Посилання на проект:

https://github.com/xioTechnologies/Serial-Oscilloscope
