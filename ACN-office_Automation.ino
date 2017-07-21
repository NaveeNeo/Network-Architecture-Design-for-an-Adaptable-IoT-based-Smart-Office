/*The following is the code required to be run on arduino to enable control of your 
home appliances from a smartphone, please install DIY SmartHome android application 
first on your android phone.Please visit DIYhacking.com for detailed instructions on this project.*/
char val;

void setup()
{
  
  Serial.begin(9600);//Change the baud rate value depending on the default baud rate of your bluetooth module, for Bluesmirf-115200 and for JY-MCU-9600
  pinMode(10, OUTPUT);//Light1 pin
}

void loop()
{
 int a=0;
 if(Serial.available())
  {
    val=Serial.read();
    Serial.println(val);//Display received value on Serial Monitor

if(val=='1')//Turn Light1 ON
   digitalWrite(10,HIGH);

 else if (val=='2')//Turn Light1 OFF
         digitalWrite(10,LOW);
}
}



