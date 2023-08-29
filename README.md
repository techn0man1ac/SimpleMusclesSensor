[![UA_version_README](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Flags/UA%402x.png)](https://github.com/techn0man1ac/SimpleMusclesSensor)
[![GB_version_README](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Flags/GB%402x.png)](https://github.com/techn0man1ac/SimpleMusclesSensor/blob/main/README_EN.md)

# SimpleMusclesSensor

УВАГА! Я, як автор не несу ніякої відповідальності за Ваші вчинки, так як це фізичний контакт(дотик до тіла) з шиною живлення USB, існує ймовірність отримати потенціал мережі 230 В. 
Дотримуйтесь всіх заходів безпеки.

![Main](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Electrodes/20230824_162535.jpg "Main")

Це простий датчик м'язової активності, який працює по ємністному принципу.

# Конструкція електродів давача

![How to make electrode](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Electrodes/20230824_162405.jpg "How to make electrode")

Електроди давача я виготовив із нержавіючої сталі(задня кришка наручного годинника). В ідеалі це повинна бути "медична сталь"(або просто нержавійка ;) ).

![2 parts of electrodes](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Electrodes/20230824_164308.jpg "2 parts of electrodes")

Розпиляв круглу кришку на дві однакові частини у формі півмісяця.

![Soldering wires to stainless steel](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Electrodes/20230824_180009.jpg "Soldering wires to stainless steel")

Нержавійка сама по собі не паяється припоєм, тому прийшлось використати кислоту, та потім добре відмити її спиртом, все таки ця частина контактує з моєю шкірою. Весь процес зайняяв 40 хвилин.

![Sensor construction](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Electrodes/Sensor.jpg "Sensor construction")

Далі приклеїв на термоклей до прогумованого пояска з дермантином по середині, нашив на ворсисту блискавку(в народі їх зовуть "липучками") для зручного надівання, знімання датчика. На фото в идно 3 контакти, лівий(IN-), правий(IN+) та знизу референс(3.3В).

# Схемотехніка

![Sensor on bread board](https://raw.githubusercontent.com/techn0man1ac/SimpleMusclesSensor/main/Imgs/Electrodes/20230825_123654.jpg "Sensor on bread board")

Це дуже простий датчик м'язової активності оснований на базі операційного підсилювача загального призначення LM358N, використовується три електроди(IN-, IN+ та 3.3В референс, підключається через послідовно підключений резистор номіналом 2 МОм), ОП підключений по схемі петлі негативного зворотного зв'язку і має коефіцієнт посилення 1 до 110.

![Schematic SimoleMusclesSensor](https://raw.githubusercontent.com/techn0man1ac/SimoleMusclesSensor/main/Imgs/Schematic_SimoleMusclesSensor_2023-08-27.png "Schematic SimoleMusclesSensor")

Завжди актуальна схемотехніка знаходиться тут:

https://oshwlab.com/raznie.podelki/simplemusclessensor

# Як це працює?

![Sensor output scope](https://github.com/techn0man1ac/SimpleMusclesSensor/blob/main/Imgs/SensorOutputScope.gif "Sensor output scope")

Принцип роботи датчика дуже простий по своїй суті, при контакті з шкірою операційний підсилювач збуджується та починає генерацію імпульсів з частотою мережі 230 В(тобто 50 Гц) на своєму виході, і по мірі притискання контактів до шкіри скважність зменшується, це детектується за допомогою функції pulseIn():

https://www.arduino.cc/reference/en/language/functions/advanced-io/pulsein/

# Візуалізація данних

Для досягнення максимальної чутливості сенсора важливо візуалізовувати данні(навчитись керувати м'язами так, щоб сенсор максимально це "відчував"), для візуалізації даних я використав open source проект під назвою "Serial-Oscilloscope":

![Data visualizations](https://raw.githubusercontent.com/techn0man1ac/SimoleMusclesSensor/main/Imgs/2023-08-25%20195831.png "Data visualizations")

Посилання на проект:

https://github.com/xioTechnologies/Serial-Oscilloscope
