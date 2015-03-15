const int ledPinleri[] = {9,10, 11, 12, 13}; //ledlerin takılı olduğu pinler olan 9,10,11,12,13 tanımlandı.
  
void setup() {
  
  for (int i = 0; i < 5; i++)
      pinMode(ledPinleri[i], OUTPUT); // Bütün pinler sırayla çıkış olarak tanımlandı.
}

void loop() {
  
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPinleri[i], HIGH); //9.pindeki led yandı.
    delay(50); //50 ms bekleme süresi
    digitalWrite(ledPinleri[i+1], HIGH);// 10.pindeki led yandı.
    delay(50); //50 ms bekleme süresi
    digitalWrite(ledPinleri[i], LOW);// 9.pindeki led söndü
    delay(100); //100 ms bekleme süresi
  }
//13.pine kadar bu işlem devam eder.
 
  for (int i = 5; i > 0; i--) {
    digitalWrite(ledPinleri[i], HIGH); //13.pindeki led yandı.
    delay(50);//50 ms bekleme süresi
    digitalWrite(ledPinleri[i-1], HIGH); //12.pindeki led yandı.
    delay(50);//50 ms bekleme süresi
    digitalWrite(ledPinleri[i], LOW);//13.pindeki led söndü.
    delay(100);//100 ms bekleme süresi
  }
//9.pine kadar bu işlem devam eder.
}
