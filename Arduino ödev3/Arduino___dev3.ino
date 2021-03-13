#include <dht.h>
#define DHT11_PIN 1
dht heat;
void setup() {
  Serial.begin(9600);

}

void loop() {
  int okunanDeger=heat.read11(DHT11_PIN);
  
  int C=heat.temperature;
  int K=C+273;
  int F=(C*1.8)+32;

Serial.println("SICAKLIKLAR:");

Serial.print("Celcius:");
Serial.println(C);

Serial.print("Kelvin:");
Serial.println(K);

Serial.print("Fahrenheit:");
Serial.println(F);

Serial.print("NEM:");
Serial.println(heat.humidity);

delay(5000);
}
