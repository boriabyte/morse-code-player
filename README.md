# morse-code-player

A morse code player, programmed using the Arduino IDE, an ESP32 board, a Piezo buzzer and a LCD display with a I2C module.




## Table of contents

### 1. Motivation and origins
### 2. How it works
### 3. Technologies used
### 4. Challenges & potential uses





## 1. Motivation and origins

Taking up a very interesting and new course at Uni, Applied Informatics, I managed to delve deeper into the inner workings of a lot of devices that make up the modern world. I got a surface understanding of how hardware and software work together to further and simplify our existence and I ended up choosing this little, simple but very intriguing project at the end of the semester for my grade. The premise sounded promising and the its simplicity and at the same time its potential usefulness is what attracted me to choose it from a roster of 40 or so projects.

## 2. How it works

By employing the use of a small ESP32 board, an LCD and a small Piezo buzzer, we can make a simplistic yet surprisingly useful and intriguing ensamble. Connecting the 3.3 V and GND pin of the board to the buzzer, we supply the little sound making component with a steady supply of voltage. Connecting other chosen pins of the ESP to the LCD and supplying it with a 5 V voltage source, we can see the screen flicker to life with a green-yellow light; but this rather large component also needs some adjusting. On its I2C module there is a potentiometer (a variable resistor) which we can move with a small screwdriver in order to play with the backlight of the display, to either make the writing displayed on it visible or less visible.

Regarding the software, we enter the Arduino IDE, assign the pins and write the code: we read words from the console, we check which letters are which, we convert them to Morse symbols, showcase them on the display and emmit the coresponding sounds, with the appropiate pauses and durations, and voila.


## 3. Technologies used 

### a) software
      - Arduino IDE
      - C++ variation for Arduino IDE

### b) hardware
      - ESP32 board
      - liquid crystal display (LCD) with I2C module
      - Piezo buzzer
     
###
The ESP32 board was connected to both the display and buzzer; the buzzer had the ground connected to the GND pin of the board, and the power source was the 3.3 V pin of the ESP. The display was also connected to certain pins which were programmed in the code to make the connection between the two components, while also being connected to the 5 V pin of the board. The display also had a potentiometer that had to be adjusted in order for the backlight to work properly once initialized in the IDE. 


## 4. Challenges & potential uses

It was at first a pretty frustrating endeavor, as my original ESP32 was busted so I had to change it with one of me colleague's. I had to struggle a little bit to understand the role of the potentiometer on the back of the display, but when I finally used a small screwdriver to turn it some small degrees in one direction I was amazed to finally see what I wrote in the console finally show up on the display. 

The importance of such a project are, in my opinion, limited to certain circumstances but pretty high. Such a simple assembly of components, programmed with  a minimal C++ and Arduino understanding can be crucial when designing communication equipment, military or civilian; unconventional as it may be, society needs even such things when the situations arise.
