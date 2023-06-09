//Script to learn how to use Potentiometers. The circuit includes 5V running
//through one of the legs of the potentiometer and then a ground wire on the 2nd leg.
// through the third leg we use analogRead to read a scaled value from 0 -1023, 1023 indicating
//5 Volts. Using floating point division we divide .5/.1023 to 
//determine the actual voltage. The voltage is controled using the potentiometer
//and based on where the dial is positioned, will determine the amount
//of voltage being produced. Based on voltage one of 3 LED's will light.
//@author Armand Amores

//LED light pins
int goodPin = 11;
int cautionPin = 10;
int alertPin = 9;

//used to read amount of volts produced
int voltageReader = A5;
float v2 = 0;
int readVal;

//adjustable delay timer
int delayTime = 1000;

//Sets up pins accordingly - 11,10,9 to produce light while
//A5 anologReads
void setup() {
  // put your setup code here, to run once:

  pinMode (goodPin, OUTPUT);
  pinMode (cautionPin, OUTPUT);
  pinMode (alertPin, OUTPUT);
  pinMode (voltageReader, INPUT);

  //set up baud rate for console log
  Serial.begin(9600);

}

// A5 pin will read the amount of voltage and based on number, will light corresponding
//LED
void loop() {
  // put your main code here, to run repeatedly:

  //set up anlogRead
  readVal = analogRead(voltageReader);
  //formula to produce floating point voltage number, and get all the inbetween numbers
  v2 = (5./1023.) * readVal;
  //format voltage number to console
  Serial.println("");
  Serial.println("v2: " + String(v2));

  // logic for when corresponding LED will light, note the good level, to cautionary, to alert level.
  if(v2 > 0 && v2 < 3){
    digitalWrite(goodPin, HIGH);
    Serial.println("Voltage at good level.");
    } else{
        digitalWrite(goodPin, LOW);
      } 
  if (v2 > 3 && v2 < 4) {
    digitalWrite(cautionPin, HIGH);
    Serial.println("Voltage at cautionary level.");
    } else{
          digitalWrite(cautionPin, LOW);
      }
  if (v2 > 4) {
    digitalWrite(alertPin, HIGH);
    Serial.println("Voltage alert, levels too high!");
        } else {
          digitalWrite(alertPin, LOW);
          }
  if (v2 == 0 || v2 < 0) {
    Serial.println("No voltage present.");
    }

  
  delay(delayTime);
  

}
