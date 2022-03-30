// C++ code
//
int Red1=5;
int Green1=7;
int Yellow1=6;

int Red2=11;
int Green2=13;
int Yellow2=12;

void setup()
{
  pinMode(Red1,OUTPUT);
  pinMode(Green1,OUTPUT);
  pinMode(Yellow1,OUTPUT);
  
  pinMode(Red2,OUTPUT);
  pinMode(Green2,OUTPUT);
  pinMode(Yellow2,OUTPUT);
  
  
  
}

void loop()
{ 
  
 digitalWrite(Red1,HIGH);
 digitalWrite(Green2,HIGH);
 digitalWrite(Yellow1,LOW);
 digitalWrite(Green1,LOW);
 digitalWrite(Yellow2,LOW);
 digitalWrite(Red2,LOW);
 delay(10000);
  
 digitalWrite(Yellow1,HIGH);
 digitalWrite(Yellow2,HIGH);
 digitalWrite(Red1,LOW);
 digitalWrite(Green1,LOW);
 digitalWrite(Red2,LOW);
 digitalWrite(Green2,LOW);
 delay(5000);
  
 digitalWrite(Green1,HIGH);
 digitalWrite(Red2,HIGH);
 digitalWrite(Red1,LOW);
 digitalWrite(Green2,LOW);
 digitalWrite(Yellow1,LOW);
 digitalWrite(Yellow2,LOW);
 delay(10000);
  
 digitalWrite(Yellow1,HIGH);
 digitalWrite(Yellow2,HIGH);
 digitalWrite(Red1,LOW);
 digitalWrite(Green1,LOW);
 digitalWrite(Red2,LOW);
 digitalWrite(Green2,LOW);
 delay(5000);
  
  
  
}