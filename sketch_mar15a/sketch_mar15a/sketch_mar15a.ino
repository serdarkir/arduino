const int ledPinleri[] = {9,10, 11, 12, 13}; //ledin takılı olduğu pinler olan 10,11,12,13,14 tanımlandı.
  
void setup() {
  for (int i = 0; i < 5; i++)
      pinMode(ledPinleri[i], OUTPUT); // Bütün pinler sırayla çıkış olarak tanımlandı.
}
void loop() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPinleri[i], HIGH); 10.pindeki led yandı.
    delay(50); //50 ms bekleme süresi
    digitalWrite(ledPinleri[i+1], HIGH); 11.pindeki led yandı.
    delay(50); //50 ms bekleme süresi
    digitalWrite(ledPinleri[i], LOW);// 10.pindeki led söndü
    delay(100); //100 ms bekleme süresi
  }
//14.pine kadar bu işlem devam eder.
 
  for (int i = 5; i > 0; i--) {
    digitalWrite(ledPinleri[i], HIGH); 14.pindeki led yandı.
    delay(50);//50 ms bekleme süresi
    digitalWrite(ledPinleri[i-1], HIGH); 13.pindeki led yandı.
    delay(50);//50 ms bekleme süresi
    digitalWrite(ledPinleri[i], LOW);14.pindeki led söndü.
    delay(100);//100 ms bekleme süresi
  }
//10.pine kadar bu işlem devam eder.</code></pre>
