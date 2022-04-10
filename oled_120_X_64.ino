#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


// create object using libry 
Adafruit_SSD1306 oled = Adafruit_SSD1306(128,64,&Wire); // para(width oled ,hight oled , commiunication way)

void setup() {
  //start oled display
oled.begin(SSD1306_SWITCHCAPVCC, 0x3C); // (i2c address  )
}

void loop() {
 
oled.clearDisplay();         // clear display
oled.setTextColor(WHITE);    //led on (pixcel on)
oled.setTextSize(2);        //set test size 1 to 7 

 // test
oled.setCursor(0,0);        // set cursor
oled.println(" SUBSCRIBE");    //print message 
oled.setCursor(30,30);    
oled.setTextSize(1);  
oled.print("ELECTRO BOY");    //print message 
oled.display();    // send to display (push message )


  

}
