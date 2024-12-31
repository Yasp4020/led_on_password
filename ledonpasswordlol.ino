/*Serial.parseInt()
Serial.parseFloat()
Serial.readBytes()
Serial.readBytesUntil()

All of these are blocking functions that prevent the Arduino from doing something else until they are satisfied, or until the timeout expires. The examples here do exactly the same job without blocking. That allows the Arduino to do other things while it is waiting for data to arrive.
*/
int led = 13;
const String password = "ledyaar489";
int i = 0;
String userpass;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  Serial.println("______________________Led password lol______________________");
  while(password!=userpass){
  Serial.print("Enter the password to light the led: ");
  while(Serial.available() == 0){

  }
    userpass=Serial.readString();
 

    if (password== userpass){
    digitalWrite(led,HIGH);
    Serial.print(password);
    Serial.println("");
    Serial.println("Password entered is correct");
    Serial.print("No of incorrect attempts: ");
    Serial.println(i);
    Serial.print("Press the reset button on Arduino to begin again");

  }
  else{
    Serial.println("");
    Serial.println("Wrong password");
     i++;
  }
  }

  
  
  delay(200);
  Serial.println("");
  exit(0);//loop just persists or exists in this state or last state
  // put your main code here, to run repeatedly:

}
