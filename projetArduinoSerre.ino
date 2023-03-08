
//initialisation pour le servomoteur et le capteur d'humidité air

#include <Servo.h> //bibliothèque pour le servomoteur
#include <DHT.h> //bibliothèque pour le DHT 22
#define brocheDeBranchementDHT 4  
#define typeDeDHT DHT22

DHT dht(brocheDeBranchementDHT, typeDeDHT);
Servo monServomoteur;

// initialisation pour le capteur jour/nuit et les leds

#include <Adafruit_NeoPixel.h> //librairie pour les leds
int X = 54;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(X, 6, NEO_GRB + NEO_KHZ800);

int Pin_Capteur_JourNuit = A0;
int Valeur_Lumiere; 
int Pourcentage_Lumiere;
int nuit = 1000;
int jour = 0;
boolean couchersoleil = true; 
boolean leversoleil = true; 
int incr = 15;

// initialisation pour la pompe et le capteur hum sol

int Pin_Capteur_Humidite = A1;
int Valeur_Humidite;
int Pourcentage_Humidite;
int sec = 1023;
int humide = 200;
int Pin_Pompe = 13;

void setup() {
  // setup pour le capteur d'humidité air et servomoteur

  Serial.begin(9600);
  dht.begin();
  monServomoteur.attach(11);

  //setup pour le capteur jour/nuit et les leds
  strip.begin();
  strip.show();

  // setup pour la pompe et le capteur hum sol
  pinMode(Pin_Pompe, OUTPUT);

}

void manageHumidity()
{
  digitalWrite(9,LOW);
  float PourcentageHumidite = dht.readHumidity();
  Serial.print("HumiditéAir = "); Serial.print(PourcentageHumidite); Serial.println(" %");
  Serial.println();
  if (PourcentageHumidite >= 90) {
    digitalWrite(9,HIGH);   
  }
  else {
    monServomoteur.write(0);
    digitalWrite(9,LOW);
  }
}

void manageLuminosity()
{
  Valeur_Lumiere = analogRead(Pin_Capteur_JourNuit);
  Pourcentage_Lumiere = map(Valeur_Lumiere, nuit, jour, 0, 100);
  Serial.print("PourcentageJour = "); Serial.print(Pourcentage_Lumiere); Serial.println(" %");

  if (Pourcentage_Lumiere <= 40) {
    leversoleil = true;
    
    if (couchersoleil == true) {
      for (int i = 0; i < X; i++ ) {
        strip.setPixelColor(i, 244, 102, 27);
        delay(incr);
        strip.show();
      }

      for (int i = 0; i < X; i++ ) {
        strip.setPixelColor(i, 253, 108, 158);
        delay(incr);
        strip.show();
      }

      for (int i = 0; i < X; i++ ) {
        strip.setPixelColor(i, 253, 63, 146);
        delay(incr);
        strip.show();
      }

      for (int i = 0; i < X; i++ ) {
        strip.setPixelColor(i, 128, 0, 128);
        delay(incr);
        strip.show();
      }
      couchersoleil = false;
    }
    for (int i = 0; i < X; i++ ) {
      strip.setPixelColor(i, 128, 0, 128);
      strip.show();
      delay(incr);

    }
  }
  else {
    couchersoleil = true; 
    if (leversoleil == true) {
      for (int i = 0; i < X; i++ ) {
        strip.setPixelColor(i, 128, 0, 27);
        delay(incr);
        strip.show();
      }

      for (int i = 0; i < X; i++ ) {
        strip.setPixelColor(i, 253, 63, 146);
        delay(incr);
        strip.show();
      }

      for (int i = 0; i < X; i++ ) {
        strip.setPixelColor(i, 253, 108, 158);
        delay(incr);
        strip.show();
      }

      for (int i = 0; i < X; i++ ) {
        strip.setPixelColor(i, 244, 102, 27);
        delay(incr);
        strip.show();
      }

      leversoleil = false;

    }

    for (int i = 0; i < X; i++ ) {
      strip.setPixelColor(i, 255, 127, 0);
      strip.show();
      delay(incr);
    }
  }
}

void managePump() 
{
  Valeur_Humidite = analogRead(Pin_Capteur_Humidite);
  Pourcentage_Humidite = map(Valeur_Humidite, sec, humide, 0, 100);
  Serial.print("PourcentageHumiditeSol :"); Serial.print(Pourcentage_Humidite); Serial.println(" %");
  if (Pourcentage_Humidite < 40) {
    digitalWrite(Pin_Pompe, HIGH);
    delay(4000);
    digitalWrite(Pin_Pompe, LOW);
  }
  else {
    digitalWrite(Pin_Pompe, LOW);
  }
  delay(60000);
}



void loop() {
  managePump();
  manageLuminosity();
  manageHumidity();
}
