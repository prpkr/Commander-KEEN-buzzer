


//COMPONENTS: adxl335 + Arduino + buzzer

int buzzerPin = 5;

double x, y, z;
double vect = 0;

int x_zero_G = 513;   // 399 - 627 min ja max
int x_one_G = 114;
int y_zero_G = 500;   //386 - 615
int y_one_G = 114;
int z_zero_G = 516;   //414 -618
int z_one_G = 102;

void setup()
{
  // Set the buzzer pin as an OUTPUT
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  
  //analogReference(EXTERNAL);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  Serial.begin(9600);      // sets the serial port to 9600
  digitalWrite(LED_BUILTIN, HIGH);

  
}

void loop(){

  readADXL();

  if (vect > 1.400) playHyppy();
  
  printData();

}



void readADXL(){
  x = analogRead(A0);       // read analog input pin 0
  x = (x - x_zero_G)/ x_one_G;
  
  y = analogRead(A1);       // read analog input pin 1
  y = (y - y_zero_G)/ y_one_G;
   
  z = analogRead(A2);       // read analog input pin 2
  z = (z - z_zero_G)/ z_one_G;
   
  vect = sqrt(sq(x) + sq(y) + sq(z));
  
}

void printData(){
  Serial.print(x, DEC);    // print the acceleration in the X axis
  Serial.print(" ");       // prints a space between the numbers
  Serial.print(y, DEC);    // print the acceleration in the Y axis
  Serial.print(" ");       // prints a space between the numbers
  Serial.print(z, DEC);  // print the acceleration in the Z axis
  Serial.print(" ");       // prints a space between the numbers
  Serial.println(vect, DEC);
  delay(50);              // wait
  
  }


void playAskel(){          //eka on walk ääni
  tone(buzzerPin, 233, 7);
  delay(7);
  tone(buzzerPin, 246, 7);
  delay(250);
  }


void playHyppy(){           //toka on hyppy

tone(buzzerPin, 261, 10);
delay(10);
tone(buzzerPin, 261, 10);
delay(10);
tone(buzzerPin, 277, 7);
delay(7);
tone(buzzerPin, 277, 7);
delay(7);
tone(buzzerPin, 293, 7);
delay(7);
tone(buzzerPin, 293, 7);
delay(7);
tone(buzzerPin, 311, 7);
delay(7);
tone(buzzerPin, 311, 7);
delay(7);
tone(buzzerPin, 311, 7);
delay(7);
tone(buzzerPin, 311, 7);
delay(7);
tone(buzzerPin, 311, 7);
delay(7);
tone(buzzerPin, 311, 7);
delay(7);
tone(buzzerPin, 293, 7);
delay(7);
tone(buzzerPin, 293, 7);
delay(7);
tone(buzzerPin, 293, 7);
delay(7);
tone(buzzerPin, 311, 7);
delay(7);
tone(buzzerPin, 311, 7);
delay(7);
tone(buzzerPin, 329, 7);
delay(7);
tone(buzzerPin, 329, 7);
delay(7);
tone(buzzerPin, 329, 7);
delay(7);
tone(buzzerPin, 349, 7);
delay(7);
tone(buzzerPin, 329, 7);

delay(200);
}
