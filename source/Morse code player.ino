#include <Wire.h> //wire.h library for interfacing with i2c module
#include <LiquidCrystal_I2C.h> //library for implementing the functionality of the lcd
#include <Tone32.h> //replacement library to compensate for the lack of tone() and noTone() functions in this version of the IDE

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); //the lcd is initialized by stating its adress, number of column, respectively the number of rows

int buzzer = 18; //pin assigned to buzzer
int note = 1000; //pitch of the note

int timeUnit = 100; //the time unit with which we multiply the duration of the dash and dot in morse code
char input; //a char variable which takes the value of each character/string it encounters in the serial monitor


// basic setup function for the lcd and baud rate
void setup(){

  Serial.begin(115200); //setting baud rate

  lcd.begin(16,2); //initialization
  lcd.init();
  lcd.backlight(); //function that tells the lcd to turn on its backlight

 }

// function definitions for the functions used in representing each letter through a beep from the buzzer
 void dot(){

    tone(buzzer, note, timeUnit);
    delay(timeUnit * 2); //delay of 200 miliseconds after a dot component of a letter

  }

  void dash(){

    tone(buzzer, note, timeUnit * 3);
    delay(timeUnit * 4); //delay of 400 miliseconds

  }

//a function make the distinction between letters
  void letterPause(){

      delay(timeUnit * 3); 

  }

//a function to make the distinction between words
  void wordPause(){

      delay(timeUnit * 7); //700 miliseconds

  } 

//function definitions for the letters & numbers represented through morse code, according to the internationally established morse code conventions
  void letter_A (){

    dot();
    dash();
    letterPause();

  }

  void letter_B (){

    dash();
    dot();
    dot();
    dot();
    letterPause();

  }

  void letter_C (){

    dash();
    dot();
    dash();
    dot();
    letterPause();
    
  }

  void letter_D (){

    dash();
    dot();dot();
    letterPause();
    
  }

  void letter_E (){

    dot();
    letterPause();
    
  }

  void letter_F (){
    
    dot();
    dot();
    dash();
    dot();
    letterPause();
    
  }

  void letter_G (){

    dash();
    dash();
    dot();
    letterPause();
    
  }

  void letter_H (){
    dot();
    dot();
    dot();
    dot();letterPause();
    
  }

  void letter_I (){

    dot();
    dot();
    letterPause();
    
  }

  void letter_J (){
    
    dot();
    dash();
    dash();
    dash();
    letterPause();
    
  }

  void letter_K (){
  
    dash();
    dot();
    dash();
    letterPause();
  
  }

  void letter_L (){
  
    dot();
    dash();
    dot();
    dot();
    letterPause();
  
  }

  void letter_M (){
    
    dash();
    dash();
    letterPause();
  
  }

  void letter_N (){
    
    dash();
    dot();
    letterPause();
  
  }

  void letter_O (){
      
    dash();
    dash();
    dash();
    letterPause;

  }

  void letter_P (){
  
    dot();
    dash();
    dash();
    dot();
    letterPause();
  
  }

  void letter_Q (){
    
    dash();
    dash();
    dot();
    dash();
    letterPause();
  
  }

  void letter_R (){
    
    dot();
    dash();
    dot();
    letterPause();
  
  }

  void letter_S (){
    
    dot();
    dot();
    dot();
    letterPause();
  
  }

  void letter_T (){
    
    dash();
    letterPause();
  
  }

  void letter_U (){
    
    dot();
    dot();
    dash();
    letterPause();
  
  }

  void letter_V (){
    
    dot();
    dot();
    dot();
    dash();
    letterPause();
  
  }

  void letter_W (){
    
    dot();
    dash();
    dash();
    letterPause();
  
  }

  void letter_X (){
    
    dash();
    dot();
    dot();
    dash();
    letterPause();
  
  }

  void letter_Y (){
  
    dash();
    dot();
    dash();
    dash();
    letterPause();
  
  }

  void letter_Z (){
  
    dash();
    dash();
    dot();
    dot();
    letterPause();
  
  }

  void number_0 (){

    dash();
    dash();
    dash();
    dash();

  }

  void number_1 (){

    dot();
    dash();
    dash();
    dash();
    dash();

  }

  void number_2 (){

    dot();
    dot();
    dash();
    dash();
    dash();

  }

  void number_3 (){

      dot();
      dot();
      dot();
      dash();
      dash();

  }

  void number_4 (){

    dot();
    dot();
    dot();
    dot();
    dash();

  }

  void number_5 (){

    dot();
    dot();
    dot();
    dot();
    dot();

  }

  void number_6 (){

    dash();
    dot();
    dot();
    dot();
    dot();

  }

  void number_7 (){

    dash();
    dash();
    dot();
    dot();
    dot();

  }

  void number_8 (){

    dash();
    dash();
    dash();
    dot();
    dot():

  }

  void number_9 (){

    dash();
    dash();
    dash();
    dash();
    dot();

  }

void loop() {

  if(Serial.available()){ //function checking whether there is text in the serial console

  //conditional structures used for checking what letter and/or number is next in the serial console; for each letter, each corresponding function is called upon
    input = Serial.read();
    if (input == 'a' || input == 'A') {letter_A();}
    if (input == 'b' || input == 'B') {letter_B();}
    if (input == 'c' || input == 'C') {letter_C();}
    if (input == 'd' || input == 'D') {letter_D();}
    if (input == 'e' || input == 'E') {letter_E();}
    if (input == 'f' || input == 'F') {letter_F();}
    if (input == 'g' || input == 'G') {letter_G();}
    if (input == 'h' || input == 'H') {letter_H();}
    if (input == 'i' || input == 'I') {letter_I();}
    if (input == 'j' || input == 'J') {letter_J();}
    if (input == 'k' || input == 'K') {letter_K();}
    if (input == 'l' || input == 'L') {letter_L();}
    if (input == 'm' || input == 'M') {letter_M();}
    if (input == 'n' || input == 'N') {letter_N();}
    if (input == 'o' || input == 'O') {letter_O();}
    if (input == 'p' || input == 'P') {letter_P();}
    if (input == 'q' || input == 'Q') {letter_Q();}
    if (input == 'r' || input == 'R') {letter_R();}
    if (input == 's' || input == 'S') {letter_S();}
    if (input == 't' || input == 'T') {letter_T();}
    if (input == 'u' || input == 'U') {letter_U();}
    if (input == 'v' || input == 'V') {letter_V();}
    if (input == 'w' || input == 'W') {letter_W();}
    if (input == 'x' || input == 'X') {letter_X();}
    if (input == 'y' || input == 'Y') {letter_Y();}
    if (input == 'z' || input == 'Z') {letter_Z();}
    if (input == '0') {number_0();}
    if (input == '1') {number_1();}
    if (input == '2') {number_2();}
    if (input == '3') {number_3();}
    if (input == '4') {number_4();}
    if (input == '5') {number_5();}
    if (input == '6') {number_6();}
    if (input == '7') {number_7();}
    if (input == '8') {number_8();}
    if (input == '9') {number_9();}
    if (input == ' ') {wordPause();}

    Serial.println(input);

    delay(100); //delay of 100 miliseconds 
    lcd.clear(); //function that clears the screen whenever new strings are introduced

    while(Serial.available() > 0){ //loop function that tells the lcd to display anything that is written in console, while there is something written there

        lcd.write(Serial.read()); //the lcd screen displays what the serial.read() function manages to get from the console
      }
  }

}