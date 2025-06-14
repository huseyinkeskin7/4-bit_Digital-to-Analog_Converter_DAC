const int analogPin = A0; // Analog pin
int sensorValue = 0; // Okunan voltaj değeri
int lsb = 4; //Least significant bit
int lsb2 = 5; //Second least significant bit
int msb2 = 6; //Second most significant bit
int msb = 7; //Most significant bit

void setup() {
  Serial.begin(9600); // Start serial communication
  //Defining bits as output
  pinMode(lsb,OUTPUT);
  pinMode(lsb2,OUTPUT);
  pinMode(msb2,OUTPUT);
  pinMode(msb,OUTPUT);
}

void loop() {
/*Defining analog input with sensor value variable.
Serial.available() is greater than 0 when there is an input to the serial port screen.
When this enters the if statement, the value on the serial port is read with the serialread function and stored with the value variable.
*/
  sensorValue = analogRead(analogPin);

  if (Serial.available() > 0) {
    int value = Serial.read();

/*
For each binary value, the value sent from MATLAB is compared and when the desired value is reached, it is sent to the digital pins as a command.
*/
    switch (value) {
      case 'a':  //0 0 0 0   // 0
        digitalWrite(lsb, LOW);
        digitalWrite(lsb2, LOW);
        digitalWrite(msb2, LOW);
        digitalWrite(msb, LOW);
        break;
      case 'b':  //0 0 0 1   // 1
        digitalWrite(lsb, HIGH);
        digitalWrite(lsb2, LOW);
        digitalWrite(msb2, LOW);
        digitalWrite(msb, LOW);
        break;
      case 'c':  //0 0 1 0   // 2
        digitalWrite(lsb, LOW);
        digitalWrite(lsb2, HIGH);
        digitalWrite(msb2, LOW);
        digitalWrite(msb, LOW);
        break;
      case 'd':  //0 0 1 1   // 3
        digitalWrite(lsb, HIGH);
        digitalWrite(lsb2, HIGH);
        digitalWrite(msb2, LOW);
        digitalWrite(msb, LOW);
        break;
      case 'e':  //0 1 0 0   // 4
        digitalWrite(lsb, LOW);
        digitalWrite(lsb2, LOW);
        digitalWrite(msb2, HIGH);
        digitalWrite(msb, LOW);
        break;
      case 'f':  //0 1 0 1   // 5
        digitalWrite(lsb, HIGH);
        digitalWrite(lsb2, LOW);
        digitalWrite(msb2, HIGH);
        digitalWrite(msb, LOW);
        break;
      case 'g':  //0 1 1 0   // 6
        digitalWrite(lsb, LOW);
        digitalWrite(lsb2, HIGH);
        digitalWrite(msb2, HIGH);
        digitalWrite(msb, LOW);
        break;
      case 'h':  //0 1 1 1   // 7
        digitalWrite(lsb, HIGH);
        digitalWrite(lsb2, HIGH);
        digitalWrite(msb2, HIGH);
        digitalWrite(msb, LOW);
        break;
      case 'i':  //1 0 0 0   // 8
        digitalWrite(lsb, LOW);
        digitalWrite(lsb2, LOW);
        digitalWrite(msb2, LOW);
        digitalWrite(msb, HIGH);
        break;
      case 'j':  //1 0 0 1   // 9
        digitalWrite(lsb, HIGH);
        digitalWrite(lsb2, LOW);
        digitalWrite(msb2, LOW);
        digitalWrite(msb, HIGH);
        break;
      case 'k':  //1 0 1 0   // 10
        digitalWrite(lsb, LOW);
        digitalWrite(lsb2, HIGH);
        digitalWrite(msb2, LOW);
        digitalWrite(msb, HIGH);
        break;
      case 'l':  //1 0 1 1   // 11
        digitalWrite(lsb, HIGH);
        digitalWrite(lsb2, HIGH);
        digitalWrite(msb2, LOW);
        digitalWrite(msb, HIGH);
        break;
      case 'm':  //1 1 0 0   // 12
        digitalWrite(lsb, LOW);
        digitalWrite(lsb2, LOW);
        digitalWrite(msb2, HIGH);
        digitalWrite(msb, HIGH);
        break;
      case 'n':  //1 1 0 1   // 13
        digitalWrite(lsb, HIGH);
        digitalWrite(lsb2, LOW);
        digitalWrite(msb2, HIGH);
        digitalWrite(msb, HIGH);
        break;
      case 'o':  //1 1 1 0   // 14
        digitalWrite(lsb, LOW);
        digitalWrite(lsb2, HIGH);
        digitalWrite(msb2, HIGH);
        digitalWrite(msb, HIGH);
        break;
      case 'p':  //1 1 1 1   // 15
        digitalWrite(lsb, HIGH);
        digitalWrite(lsb2, HIGH);
        digitalWrite(msb2, HIGH);
        digitalWrite(msb, HIGH);
        break;

      default:
        break;
    }
  }
  /*
  In order for MATLAB to read the analog value, the analog value is printed on the serial port screen.
  */
  Serial.println(float(sensorValue));

  delay(350); 
}
