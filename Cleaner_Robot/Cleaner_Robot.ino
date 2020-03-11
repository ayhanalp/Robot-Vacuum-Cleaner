// connect motor controller pins to Arduino digital pins
// motor Sol
int enA0 = 2;
int in1 = 3;
int in2 = 4;

// motor Sağ
int enB0 = 5;
int in3 = 6;
int in4 = 7;

// motor Sol
int enA1 = 8;
int in5 = 9;
int in6 = 10;

// motor Sağ
int enB1 = 11;
int in7 = 12;
int in8 = 13;


void setup()
{
  // set all the motor control pins to outputs
  pinMode(enA0, OUTPUT);
  pinMode(enB1, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enA1, OUTPUT);
  pinMode(enB1, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in8, OUTPUT);
  
  Serial.begin(9600);
}



void move() {
  //Bu kısım için maksimum hız limiti 255
  //Araç ileri yönde gider
  Serial.println("arac ileri yonde gidiyor"); 
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA0, 255);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB0, 255);
  digitalWrite(in5, HIGH);
  digitalWrite(in6, LOW);
  analogWrite(enA1, 255);
  digitalWrite(in7, HIGH);
  digitalWrite(in8, LOW);
  analogWrite(enB1, 255);



}

void Stop() {

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA0, 0);

  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enB1, 0);
}
/* rotate
 * 180 derece => 460ms
 * 135 derece => 345ms
 * 90 derece => 230ms
 * 45 derece => 115ms
 */
void loop()
{
move();
delay(7000);
}
