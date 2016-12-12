int moistureSensor = 5;
int moisture_val;
int sol_pin = 2;

void setup() 
{
Serial.begin(9600); //open serial port
pinMode (13, OUTPUT);
pinMode (2, OUTPUT);
}

void loop() {
moisture_val = analogRead(moistureSensor); // read the value from the moisture-sensing probes
Serial.print("moisture sensor reads ");
Serial.println( moisture_val );

delay(1000);
if (moisture_val < 600)
{
  digitalWrite (13, HIGH); //soil is too dry- turn on LED
  digitalWrite (2, HIGH); //turn on solinoid
}else{
  digitalWrite (13, LOW); // soil is saturated- turn off LED
  digitalWrite (2, LOW);
}

}
