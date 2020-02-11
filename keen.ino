



/* This part is for ADXL335   http://wiring.org.co/learning/basics/accelerometer.html

COMPONENTS: adxl335 + Arduino Pro Mini / ATmega328 + buzzer

int x, y, z;

void setup()
{
  Serial.begin(9600);      // sets the serial port to 9600
}

void loop()
{
  x = analogRead(0);       // read analog input pin 0
  y = analogRead(1);       // read analog input pin 1
  z = analogRead(2);       // read analog input pin 1
  Serial.print("accelerations are x, y, z: ");
  Serial.print(x, DEC);    // print the acceleration in the X axis
  Serial.print(" ");       // prints a space between the numbers
  Serial.print(y, DEC);    // print the acceleration in the Y axis
  Serial.print(" ");       // prints a space between the numbers
  Serial.println(z, DEC);  // print the acceleration in the Z axis
  delay(100);              // wait 100ms for next reading
}

*/





/******************************************************************************

https://learn.sparkfun.com/tutorials/lilypad-buzzer-hookup-guide/all


LilyPad Buzzer Example
SparkFun Electronics

This example code shows how use a button (or alligator clips) to trigger sounds
with the LilyPad Buzzer.

Buzzer connections:
   * + pin to 5
   * - to -

******************************************************************************/

//Hellou Arduino + buzzer
//COMPONENTS: Arduino Pro Mini / ATmega328 + buzzer

// Pin the buzzer is attached to
int buzzerPin = 5;

// Set a time in milliseconds for all delays
int delayTime = 100; 

// Notes
const int C = 1046;
const int D = 1175;
const int E = 1319;
const int F = 1397;
const int G = 1568;
const int A = 1760;
const int B = 1976;
const int C1 = 2093;
const int D1 = 2349;

void setup()
{
    // Set the buzzer pin as an OUTPUT
    pinMode(buzzerPin, OUTPUT);

      // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
   Serial.begin(9600);

}

void loop()
{
    Serial.println("Play");
    playSong();


    //blink for 10 seconds
    for (int i = 0; i <= 5; i++) {
    Serial.println("Blink");
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);                       // wait for a second
    }
                    
    
}

void playSong() 
{
  /*
  tone(buzzerPin, C);
  delay(delayTime);
  tone(buzzerPin, D);
  delay(delayTime);
  tone(buzzerPin, E);
  delay(delayTime);
  tone(buzzerPin, F);
  delay(delayTime);
  tone(buzzerPin, G);
  delay(delayTime);
  tone(buzzerPin, A);
  delay(delayTime);
  tone(buzzerPin, B);
  delay(delayTime);
  tone(buzzerPin, C1);
  delay(delayTime); */
  // Use noTone() to shut off the buzzer and delay to create a 'rest'
  noTone(buzzerPin);
  delay(delayTime); 
}
