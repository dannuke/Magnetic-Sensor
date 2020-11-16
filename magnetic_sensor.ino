
//Digital Magnetic Sensor DFROBOT DFR 0033
//Connect LED with 330 ohm resistor to Arduino digital pin 13. Cathode to GND or graound rail
//to experiment, move hobby electric motor towrds sensor. LED will turn off. Rotate the motor body towards the sensor to sense maximum magentic flux
//if you do not have an external LED, the Arduino onboard LED witll turn off
//reference https://www.dfrobot.com/product-233.html





int ledPin = 13;                // choose the pin for the LED
int inputPin = 2;               // choose the input pin
int val = 0;                    // variable for reading the pin status
void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare pushbutton as input
}
void loop(){
  val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, LOW);  // turn LED OFF
  } else {
    digitalWrite(ledPin, HIGH); // turn LED ON
  }
}
