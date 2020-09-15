/*Funktion: LED blinkt im Sekundentakt
  Programmierer: Christian Lehmann
  letzte Änderung: 11.09.2020
  Version: 0.01

  Hardware: grüne LED an PIN 3 und einen 220 Ohm Widerstand

*/

#define LED_gruen 3 // Variable für den Ausgangspin der gruenen LED

void setup()
{
  pinMode(LED_gruen, OUTPUT); //LED Grün
  Serial.begin(9600); //zur Kontrolle
}

void loop()
{
  /*******************LED im sekundentakt an- und ausschalten*******************/
  digitalWrite(LED_gruen, HIGH);        //LED an
  Serial.println("LED an" );
  delay(1000);                  //1s warten
  digitalWrite(LED_gruen, LOW);         //LED aus
  Serial.println("LED aus" );
  delay(1000);

}
