#include <Adafruit_GFX.h> 
#include <Adafruit_SSD1306.h>
#include<DHT.h>
#define DHTPIN 27 
#define DHTTYPE DHT11 
#define WIDTH 128 
#define HEIGHT 64 
#define OLED_RESET -1 
DHT dht(DHTPIN,DHTTYPE); 
Adafruit_SSD1306 OLED(WIDTH,HEIGHT,&Wire,OLED_RESET); 
float Tempurature,Humiduty; 
void setup() { 
    dht.begin(); 
    OLED.begin(SSD1306_SWITCHCAPVCC,0X3C); 
    Serial.begin(115200); 
} 
void loop() { 
    OLED.clearDisplay(); 
    OLED.setTextColor(WHITE,BLACK); 
    Tempurature = dht.readTemperature(); 
    Humiduty=dht.readHumidity(); 
    OLED.setCursor(0,0); 
    OLED.setTextSize(1); 
    OLED.println("Tempurature : "); 
    OLED.setTextSize(2); 
    OLED.print(Tempurature); 
    OLED.cp437(true); 
    OLED.write (248); 
    OLED.println("C"); 
    OLED.println(); 
    OLED.setTextSize(1); 
    OLED.println("Humiduty : "); 
    OLED.setTextSize(2); 
    OLED.print(Humiduty); 
    OLED.println(" %"); 
    OLED.setCursor(100,54); 
    OLED.setTextSize(1); 
    OLED.print("036"); 
    OLED.display(); 
    delay(1000); 
}