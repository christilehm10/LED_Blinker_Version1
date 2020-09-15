/*Funktion: LED blinkt im Sekundentakt
  Programmierer: Christian Lehmann
  letzte Änderung: 11.09.2020
  Version: 0.01

  Hardware: gründe LED an PIN 3 und einen 220 Ohm Widerstand

*/



void setup()
{
  pinMode(3, OUTPUT); //LED Grün
  Serial.begin(9600); //zur Kontrolle
}

void loop()
{
  /*******************LED im sekundentakt an- und ausschalten*******************/
  digitalWrite(3, HIGH);        //LED an
  Serial.println("LED an" );
  delay(1000);                  //1s warten
  digitalWrite(3, LOW);         //LED aus
  Serial.println("LED aus" );
  delay(1000);

}
