const int trigger = 13;
const int echo = 12;
float jarak, waktu;


void setup (){
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}

void loop (){
digitalWrite(trigger, HIGH);
delay(50);
digitalWrite(trigger, LOW);
 
waktu = pulseIn(echo, HIGH);
jarak = 0.034 * waktu / 2;

if (jarak <=30){
Serial.println("DEKAT");
} else {
  Serial.println("JAUH");
}
}

/*
int trig= 12;            // membuat varibel trig yang di set ke-pin 3
int echo= 11;            // membuat variabel echo yang di set ke-pin 2 
long durasi, jarak;     // membuat variabel durasi dan jarak
 
void setup() {
pinMode(trig, OUTPUT);    // set pin trig menjadi OUTPUT
pinMode(echo, INPUT);     // set pin echo menjadi INPUT
Serial.begin(9600);       // digunakan untuk komunikasi Serial dengan komputer
}
 
void loop() {
 
// program dibawah ini agar trigger memancarakan suara ultrasonic
digitalWrite(trig, LOW);
delayMicroseconds(8);
digitalWrite(trig, HIGH);
delayMicroseconds(8);
digitalWrite(trig, LOW);
delayMicroseconds(8);
 
durasi= pulseIn(echo, HIGH);  // menerima suara ultrasonic
jarak= (durasi/2) / 29.1;     // mengubah durasi menjadi jarak (cm)
Serial.println(jarak);        // menampilkan jarak pada Serial Monitor
 
}*/
