int data;
void setup() {
 pinMode(12,OUTPUT);

 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //if(Serial.available()){
    data = Serial.read();
    delay(100);
    if(data == 1){
         Serial.println(data);
    }
    if(data == 2){
         Serial.println(data);
         Serial.println("hello");
    }
  

}
