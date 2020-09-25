

#include <DmxSimple.h>

void setup() {
  DmxSimple.usePin(3);
  DmxSimple.maxChannel(4);
}

void loop() {
  int brightness;
  for (brightness = 0; brightness <= 255; brightness++) {
    DmxSimple.write(1, brightness);
    delay(10);
  }

}

void demo ()
{
  DmxSimple.write(1, 0);
  DmxSimple.write(2, 0);
  DmxSimple.write(3, 0);
  delay(20);
  DmxSimple.write(1, 255);
  delay(1000);
  DmxSimple.write(2, 255);
  DmxSimple.write(1, 0);
  delay(1000);
  DmxSimple.write(3, 255);
  DmxSimple.write(2, 0);
  delay(1000);
}
void manuel ()
{
  int valpot1,valpot2,valpot3,valpot4,val1,val2,val3,val4;
  valpot1=analogRead(A0);
  valpot2=analogRead(A1);
  valpot3=analogRead(A2);
  valpot4=analogRead(A3);
  val1=map(valpot1,0,1023,0,255);
  val2=map(valpot2,0,1023,0,255);
  val3=map(valpot3,0,1023,0,255);
  val4=map(valpot4,0,1023,0,255);
  DmxSimple.write(1,0);
  DmxSimple.write(2,0);
  DmxSimple.write(3,0);
  delay(val4);
  DmxSimple.write(1,val1);
  DmxSimple.write(2,val2);
  DmxSimple.write(3,val3);
  delay(val4);
}

void aleatoire () // Ajouter "randomSeed(analogRead(0);" dans setup
{
  int nbAlea1,nbAlea2,nbAlea3;
  nbAlea1=random(255);
  nbAlea2=random(255);
  nbAlea3=random(255);
  delay(1000);
  DmxSimple.write(1,nbAlea1);
  DmxSimple.write(2,nbAlea2);
  DmxSimple.write(3,nbAlea3);
}
void musique ()
{
  int valmic,valmic1;
  valmic=analogRead(A4);
  valmic1=map(valpot1,0,150,0,255);
  DmxSimple.write(1,valmic1);
}
void nuit ()
{
  DmxSimple.write(1,0);
  DmxSimple.write(2,0);
  DmxSimple.write(3,0);
}
int sauvegarde (int x)
{
  int valpot1,valpot2,valpot3,valpot4,val1,val2,val3,val4;
  valpot1=analogRead(A0);
  valpot2=analogRead(A1);
  valpot3=analogRead(A2);
  val1=map(valpot1,0,1023,0,255);
  val2=map(valpot2,0,1023,0,255);
  val3=map(valpot3,0,1023,0,255);
}
int affichageSauvegarde (int x)
{
  DmxSimple.write(1,val1);
  DmxSimple.write(2,val2);
  DmxSimple.write(3,val3);
  delay(20);
}

