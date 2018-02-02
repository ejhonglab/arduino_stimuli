
// Hardware requirements: An Arduino Nano is sufficient, but should work on any.

// Connections: 
// Vin <-> power source positive (7-12v recommended for most Arduinos, but see 
// specifications)
// GND <-> power source ground <-> olfactometer driver ground
// Digital pin 5 <-> all gates of valve control MOSFETs (all driven in unison)

const unsigned char gate_pin = 5;
const unsigned long on_ms = 1000;
const unsigned long off_ms = 20000;

void setup() {
  pinMode(gate_pin, OUTPUT);
}

void loop() {
  digitalWrite(gate_pin, HIGH);
  delay(on_ms);
  digitalWrite(gate_pin, LOW);
  delay(off_ms);
}
