#include <UTFTGLUE.h>
#include <GyverUART.h>



UTFTGLUE myGLCD(0,A2,A1,A3,A4,A0); // выводы чисто заглушки
int R=80;
int a1,a2,b1,b2;
int cx,cy;



void setup()
{
 uart.begin();//9600 
 myGLCD.InitLCD(1);// empty or 1 - landscape? 0  portrait
 //myGLCD.setFont(&FreeSans10pt8b);
  
  myGLCD.setColor(100, 238, 100); //RGB
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.clrScr();
  //myGLCD.setCursor(0,14);
  myGLCD.drawPixel(200,120);
  //myGLCD.drawLine(200, 120, 100, 160);



// рисуем циферблат
cx=200-(R);
cy=120-(R);// center

for (int i=1; i<=60; ++i) //рисуем 48 делений
{
if (i%5==0) {myGLCD.setColor(255, 0, 0);}// пятиминутки красные
else{myGLCD.setColor(100, 238, 100);};


a1 = cx+R + 0.95*R*sin(i*2*PI /60);
b1 = cy+R + 0.95*R*cos(i*2*PI /60);
a2 = cx+R + R*sin(i*2*PI /60);
b2 = cy+R + R*cos(i*2*PI /60);
myGLCD.drawLine(a1,b1,a2,b2);
};// циферблат готов

}

int a1p, b1p,a1pm,b1pm,a1ph,b1ph;

void drawSecPaw(int i,int len){
 a1 = cx+R+ 0.9*len*sin((60-i)*2*PI/60+PI);
 b1 = cy+R+ 0.9*len*cos((60-i)*2*PI/60+PI);
 myGLCD.setColor(0, 0, 0);
 myGLCD.drawLine(cx+R,cy+R,a1p,b1p);
 myGLCD.setColor(255, 0, 0);
 myGLCD.drawLine(cx+R,cy+R,a1,b1);
 a1p=a1;
 b1p=b1;
}

void drawMinPaw(int m,int len){
 //a1 = cx+R+ 0.9*len*sin((60-i)*2*PI/60+PI);
 //b1 = cy+R+ 0.9*len*cos((60-i)*2*PI/60+PI);
 a1 = cx+R + len*cos(((m*PI)/30)-PI/2);
 b1 = cy+R + len*sin(((m*PI)/30)-PI/2);

 myGLCD.setColor(0, 0, 0);
 myGLCD.drawLine(cx+R,cy+R,a1pm,b1pm);
 myGLCD.drawLine(cx+R+1,cy+R+1,a1pm+1,b1pm+1);
 //myGLCD.drawLine(cx+R-1,cy+R-1,a1pm-1,b1pm-1);
 myGLCD.setColor(0, 255, 0);
 myGLCD.drawLine(cx+R,cy+R,a1,b1);
 myGLCD.drawLine(cx+R+1,cy+R+1,a1+1,b1+1);
 //myGLCD.drawLine(cx+R-1,cy+R-1,a1-1,b1-1);
 a1pm=a1;
 b1pm=b1;
}

void drawHrPaw(int h,int m,int len){
 //a1 = cx+R+ 0.9*len*sin((60-i)*2*PI/60+PI);
 //b1 = cy+R+ 0.9*len*cos((60-i)*2*PI/60+PI);
 a1 = cx+R + len*cos(((h*PI)/6)+(m*PI/360)-PI/2);
 b1 = cy+R + len*sin(((h*PI)/6)+(m*PI/360)-PI/2);

 myGLCD.setColor(0, 0, 0);
 myGLCD.drawLine(cx+R,cy+R,a1ph,b1ph);
 myGLCD.drawLine(cx+R+1,cy+R+1,a1ph+1,b1ph+1);
 myGLCD.drawLine(cx+R-1,cy+R-1,a1ph-1,b1ph-1);
 myGLCD.setColor(0, 0, 255);
 myGLCD.drawLine(cx+R,cy+R,a1,b1);
 myGLCD.drawLine(cx+R+1,cy+R+1,a1+1,b1+1);
 myGLCD.drawLine(cx+R-1,cy+R-1,a1-1,b1-1);
 a1ph=a1;
 b1ph=b1;
}

void loop()
{

for (int i=0; i<7200; ++i) 
 { 
  drawHrPaw(i/60,i%60,R/2);   
  drawMinPaw(i%60,R-10);
  //drawSecPaw(i*3,R);
  delay(1000);
 }


}    
