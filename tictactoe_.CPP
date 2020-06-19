#include <graphics.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
#include <time.h>
#include <dos.h>
#include <bios.h>
#include <process.h>
int midx=getmaxx()/2,midy=getmaxy()/2,key,n=0,xx,yy,cross[3][3]={0,0,0,0,0,0,0,0,0},circles[3][3]={0,0,0,0,0,0,0,0,0},ai;

		    /**************LOADING SCREEN***************/
void loading()
{
int xmax, ymax,i;
xmax = getmaxx();
ymax = getmaxy();
setbkcolor(0);
setcolor(2);
for(int k=0;k<=360;k++){
arc(xmax/2,ymax/2-10,0,k,36);
arc(xmax/2,ymax/2-10,0,k,35);
arc(xmax/2,ymax/2-10,0,k,34);
delay(2);
}
 setcolor(4);
settextstyle(0,0,9);
char val1[3][3]={'T'};
moveto(50,50);
outtext(val1[0]);
settextstyle(0,0,2);
   for( i=0;i<50;i++)                     //phase 1
   { setcolor(5);
  delay(5);
rectangle(xmax-30,ymax-30,30+i,400);
rectangle(xmax-29,ymax-29,29+i,399); //loading rectangle
rectangle(xmax-28,ymax-28,28+i,399);
}
setcolor(2);
line(xmax/2-70,ymax/2-100,xmax/2-70,ymax/2+70);
line(xmax/2-68,ymax/2-100,xmax/2-68,ymax/2+70); //left line
line(xmax/2-69,ymax/2-100,xmax/2-69,ymax/2+70);


setcolor(5);
for( k=0;k<=360;k++){
arc(xmax/2,ymax/2-10,0,k,36);
arc(xmax/2,ymax/2-10,0,k,35);
arc(xmax/2,ymax/2-10,0,k,34);
delay(2);
}
setcolor(1);
settextstyle(3,0,7);
char val2[3][3]={'I'};
moveto(115,50);
outtext(val2[0]);
//delay(3000);
 settextstyle(0,0,2);
   for( i=0;i<100;i++)
   { setcolor(5);
  delay(10);                                        //phase 2
rectangle(xmax-30,ymax-30,30+i,400);
rectangle(xmax-29,ymax-29,29+i,399); //loading rectangle
rectangle(xmax-28,ymax-28,28+i,399);
}

setcolor(2);
for( k=0;k<=360;k++){
arc(xmax/2,ymax/2-10,0,k,36);
arc(xmax/2,ymax/2-10,0,k,35);
arc(xmax/2,ymax/2-10,0,k,34);
delay(2);
}
setcolor(1);
settextstyle(3,0,7);
char val3[3][3]={'C'};
moveto(140,50);
outtext(val3[0]);
//delay(3000);
 settextstyle(0,0,2);
   for( i=0;i<150;i++)
   { setcolor(5);                                     //phase 3
  delay(9);
rectangle(xmax-30,ymax-30,30+i,400);
rectangle(xmax-29,ymax-29,29+i,399); //loading rectangle
rectangle(xmax-28,ymax-28,28+i,399);
}
setcolor(2);
line(xmax/2+70,ymax/2-100,xmax/2+70,ymax/2+70);
line(xmax/2+69,ymax/2-100,xmax/2+69,ymax/2+70); //right line
line(xmax/2+68,ymax/2-100,xmax/2+68,ymax/2+70);

setcolor(5);
for( k=0;k<=360;k++){
arc(xmax/2,ymax/2-10,0,k,36);
arc(xmax/2,ymax/2-10,0,k,35);
arc(xmax/2,ymax/2-10,0,k,34);
delay(2);
}
setcolor(4);
settextstyle(0,0,9);
char val4[3][3]={'T'} ;
moveto(250,50);
outtext(val4[0]);
//delay(3000);
 settextstyle(0,0,2);
   for(i=0;i<250;i++)
   { setcolor(5);                                       //phase 4
  delay(8);
rectangle(xmax-30,ymax-30,30+i,400);
rectangle(xmax-29,ymax-29,29+i,399); //loading rectangle
rectangle(xmax-28,ymax-28,28+i,399);
}

setcolor(2);
for( k=0;k<=360;k++){
arc(xmax/2,ymax/2-10,0,k,36);
arc(xmax/2,ymax/2-10,0,k,35);
arc(xmax/2,ymax/2-10,0,k,34);
delay(2);
}
setcolor(1);
settextstyle(3,0,7);
char val5[3][3]={'A'};
moveto(300,50);
outtext(val5[0]);
//delay(3000);
 settextstyle(0,0,2);
   for( i=0;i<300;i++)
   { setcolor(5);                                          //phase 5
  delay(7);
rectangle(xmax-30,ymax-30,30+i,400);
rectangle(xmax-29,ymax-29,29+i,399); //loading rectangle
rectangle(xmax-28,ymax-28,28+i,399);
}
setcolor(2);
line(xmax/2-130,ymax/2+30,xmax/2+130,ymax/2+30);
line(xmax/2-130,ymax/2+29,xmax/2+130,ymax/2+29); //up hori line
line(xmax/2-130,ymax/2+28,xmax/2+130,ymax/2+28);

setcolor(5);
for( k=0;k<=360;k++){
arc(xmax/2,ymax/2-10,0,k,36);
arc(xmax/2,ymax/2-10,0,k,35);
arc(xmax/2,ymax/2-10,0,k,34);
delay(2);
}
setcolor(1);
settextstyle(3,0,7);
char val6[3][3]={'C'};
moveto(350,50);
outtext(val6[0]);
//delay(3000);
 settextstyle(0,0,2);
   for( i=0;i<350;i++)
   { setcolor(5);                                           //phase 6
  delay(6);
rectangle(xmax-30,ymax-30,30+i,400);
rectangle(xmax-29,ymax-29,29+i,399); //loading rectangle
rectangle(xmax-28,ymax-28,28+i,399);
}

setcolor(2);
for( k=0;k<=360;k++){
arc(xmax/2,ymax/2-10,0,k,36);
arc(xmax/2,ymax/2-10,0,k,35);
arc(xmax/2,ymax/2-10,0,k,34);
delay(2);
}
setcolor(4);
settextstyle(0,0,9);
char val7[3][3]={'T'};
moveto(450,50);
outtext(val7[0]);
//delay(3000);
 settextstyle(0,0,2);
   for( i=0;i<400;i++)
   { setcolor(5);                                         //phase 7
  delay(5);
rectangle(xmax-30,ymax-30,30+i,400);
rectangle(xmax-29,ymax-29,29+i,399); //loading rectangle
rectangle(xmax-28,ymax-28,28+i,399);
}
setcolor(2);
line(xmax/2-130,ymax/2-50,xmax/2+130,ymax/2-50);
line(xmax/2-130,ymax/2-49,xmax/2+130,ymax/2-49); //down hori line
line(xmax/2-130,ymax/2-48,xmax/2+130,ymax/2-48);

setcolor(5);
for( k=0;k<=360;k++){
arc(xmax/2,ymax/2-10,0,k,36);
arc(xmax/2,ymax/2-10,0,k,35);
arc(xmax/2,ymax/2-10,0,k,34);
delay(2);
}
setcolor(1);
settextstyle(3,0,7);
char val8[3][3]={'O'};
moveto(500,50);
outtext(val8[0]);
//delay(3000);
 settextstyle(0,0,2);
   for( i=0;i<580;i++)
   { setcolor(5);                                           //phase 8
  delay(4);
rectangle(xmax-30,ymax-30,30+i,400);
rectangle(xmax-29,ymax-29,29+i,399); //loading rectangle
rectangle(xmax-28,ymax-28,28+i,399);
}

setcolor(2);
for( k=0;k<=360;k++){
arc(xmax/2,ymax/2-10,0,k,36);
arc(xmax/2,ymax/2-10,0,k,35);
arc(xmax/2,ymax/2-10,0,k,34);
delay(2);
}
setcolor(1);
settextstyle(3,0,7);
char val9[3][3]={'E'};
moveto(550,50);
outtext(val9[0]);
//delay(3000);
 settextstyle(0,0,2);
   for( i=0;i<10;i++)                                       //phase 9
   { setcolor(5);
  delay(3);
rectangle(xmax-30,ymax-30,30+i,400);
rectangle(xmax-29,ymax-29,29+i,399); //loading rectangle
rectangle(xmax-28,ymax-28,28+i,399);
}
void mainmenu();

setcolor(4);
outtextxy(xmax-400,ymax-100,"PRESS ENTER TO CONTINUE......");
key=bioskey(0);
if(key==7181)
{mainmenu();}
}

			 /*************HOMESCREEN*****************/


				 /******HELP*******/

void help()
{ cleardevice();
  int midx=getmaxx()/2;
  int midy=getmaxy()/2;

  setcolor(RED);
  settextjustify(CENTER_TEXT,CENTER_TEXT);
  settextstyle(0,0,5);
  outtextxy(midx+10,25,"INSTRUCTIONS");
  settextstyle(1,0,2);
  outtextxy(midx,midy-50,"You have to place x or o in one of the nine places,");
  outtextxy(midx,midy,"and you can place it only one at a time.");
  outtextxy(midx,midy+100,"To win the game you should have 3 x or 3 o in a line ");
  outtextxy(midx,midy+150,"vertically or horizontally or diagonally.");
  settextstyle(1,0,1);
  outtextxy(midx,midy+200,"PRESS BACKSPACE TO GO BACK");
 // key=bioskey(1);
  void mainmenu();
  keys:
 while (bioskey(1) == 0);
  key=bioskey(0);
  if(key==3592)   //backspace
  mainmenu();
  goto keys;
 }




			       /********MAINMENU***********/
void mainmenu()
{ int x,y,z;
  int p2,k;
  int maxx=getmaxx();
  int maxy=getmaxy();
  void credits();
  void quit();
  void newgame();
 cleardevice();
 setbkcolor(BLACK);
 int midx=getmaxx()/2,midy=getmaxy()/2;
 setcolor(GREEN);
 line(0,0,0,maxy);
 line(maxx,0,maxx,maxy);
 settextstyle(0,0,6);
 setcolor(RED);
 settextjustify(CENTER_TEXT,CENTER_TEXT);
 outtextxy(midx-200,midy-200,"TIC");
 setcolor(GREEN);
 outtextxy(midx,midy-200,"TAC");
 setcolor(BLUE);
 outtextxy(midx+200,midy-200,"TOE");
 key=0;
 lol2:
 do
 { k++;
  setcolor(k);
  settextstyle(2,0,7);
  outtextxy(300,150,"1.NEW GAME");
  outtextxy(300,250,"2.INSTRUCTIONS");
  outtextxy(300,350,"3.CREDITS");
  outtextxy(300,450,"4.EXIT");
  settextstyle(2,0,5);
  outtextxy(maxx-100,maxy-30,"# ALL RIGHTS RESERVED #");
  outtextxy(100,maxy-30,"# ALL RIGHTS RESERVED #");
  delay(100);
  key=bioskey(1);
 }  while(key==!818 && key==!1075 && key==!1332 && key==!561);
if(key==818)
{help();}
else if(key==1075)
{credits();}
else if(key==1332)
{quit();}
else if(key==561)
{newgame();}
else goto lol2;
}

			      /**********CREDITS**********/

void credits()
{cleardevice();
 settextjustify(CENTER_TEXT,CENTER_TEXT);
 settextstyle(2,0,7);
 outtextxy(300,200,"KINSHUK-EVERYTHING TILL NOW,ADITYA-MORAL SUPPORT");
 settextstyle(1,0,2);
 outtextxy(300,400,"PRESS BACKSPACE TO RETURN TO MAIN MENU");
 key=bioskey(0);
 if(key==3592)
 {return;}
 }


			       /***********EXIT************/
void quit()
{cleardevice();
 int midx=getmaxx()/2,midy=getmaxy()/2;
 settextstyle(2,0,4);
 outtextxy(midx,midy,"do you really want to quit ???");
 settextstyle(1,0,2);
 outtextxy(midx,midy+200,"PRESS BACKSPACE TO RETURN TO MAIN MENU");
 key=bioskey(1);
 if(key==1332)
 {closegraph();}
 else if(key==3592)
 {mainmenu();}
}


			    /**********NEWGAME************/
void newgame()
{cleardevice();
 void gamescrai();
 void gamescrpvp();
 int midx=getmaxx()/2,midy=getmaxy()/2;
 setcolor(WHITE);
 //maybe i will place difficulty options here
 settextstyle(2,0,5);
 outtextxy(midx,midy,"A)2 player");
 outtextxy(midx,midy+100,"B)vs computer");
 cin>>key;
 if(key==1)
 {ai=0;
  gamescrpvp();
  }
 else if(key==2)
 {ai=1;
 gamescrai();
  }
 }

				/*******MAIN GAMESCREEN*********/
void gamescrpvp()
{//tiles function goes here
 //o and x generator
 //navigator
 //score counter
 //ai dialogs
// void circlemain();
// void crossgen();
 void gamelogic();
 setbkcolor(0);
 void playarea();
 playarea();
 void gameoperatorpvp();
 gameoperatorpvp();

  //final build me newgame() hoga
}
				 /*********AI GAMESCREEN*******/

void gamescrai()
{//tiles function goes here
 //o and x generator
 //navigator
 //score counter
 //ai dialogs
// void circlemain();
// void crossgen();
 void gamelogic();
 setbkcolor(0);
 void playarea();
 playarea();
 void gameoperatorai();
 gameoperatorai();

  //final build me newgame() hoga
}
				 /*********GAMEBOARD*********/

void playarea()
{cleardevice();
 setcolor(2);
 line(150,100,150,400);
 line(250,100,250,400);
 line(70,200,330,200);
 line(70,300,330,300);

 line(149,100,149,400);
 line(249,100,249,400);
 line(70,199,330,199);
 line(70,299,330,299);

 line(148,100,148,400);
 line(248,100,248,400);
 line(70,198,330,198);
 line(70,298,330,298);
}
			    /*********GAME PAD************/
/*void gamepad()
{ int midx=getmaxx()/2,midy=getmaxy()/2;
  //insert line codes here
  //score counter
} */


			    /*********TO CREATE CIRCLES********/
void circlemain()
{//circle coordinates are wrong...
 //navigator(n);
 inv2:
 void invalidinput();
 setcolor(RED);
 key=bioskey(0);
 if(key==4209 && cross[0][0]==!1 && circles[0][0]==!1)
 {circle(100,150,30);
  circles[0][0]=1;
  return;}//box1
 else if(key==4471 && cross[0][1]==!2 && circles[0][1]==!2)
 {circle(200,150,30);
  circles[0][1]=2;
  return;}//box2
 else if(key==4709 && cross[0][2]==!3 && circles[0][2]==!3)
 {circle(290,150,30);
  circles[0][2]=3;
  return;}//box3
 else if(key==7777 && cross[1][0]==!4 && circles[1][0]==!4)
 {circle(100,250,30);
  circles[1][0]=4;
  return;}//box4
 else if(key==8051 && cross[1][1]==!5 && circles[1][1]==!5)
 {circle(200,250,30);
  circles[1][1]=5;
  return;}//box5
 else if(key==8292 && cross[1][2]==!6 && circles[1][2]==!6)
 {circle(290,250,30);
  circles[1][2]=6;
  return;}//box6
 else if(key==11386 && cross[2][0]==!7 && circles[2][0]==!7)
 {circle(100,350,30);
  circles[2][0]=7;
  return;}//box7
 else if(key==11640 && cross[2][1]==!8 && circles[2][1]==!8)
 {circle(200,350,30);
  circles[2][1]=8;
  return;}//box8
 else if(key==11875 && cross[2][2]==!9 && circles[2][2]==!9)
 {circle(290,350,30);
  circles[2][2]=9;
  return;}//box9
 else
 {
   invalidinput();
   goto inv2;
 }
}
			 /******************CROSS GENERATOR****************/
void crossmain()
{
  //navigator();
  inv1:
  void invalidinput();
   setcolor(YELLOW);
  key=bioskey(0);
  if(key==4209 && circles[0][0]==!1 && cross[0][0]==!1)
  {line(90,110,130,190); //box 1
  line(130,110,90,190);
  cross[0][0]=1;
  return;
  }
  else if(key==4471 && circles[0][1]==!2 && cross[0][1]==!2)       //box2
  {line(180,110,220,190);
  line(220,110,180,190);
  cross[0][1]=2;
  return;
  }
  else if(key==4709 && circles[0][2]==!3 && cross[0][2]==!3)     //box3
  {line(270,110,310,190);
   line(310,110,270,190);
   cross[0][2]=3;
   return;
  }
  else if(key==7777 && circles[1][0]==!4 && cross[1][0]==!4)     //box4
  {line(90,210,130,290);
   line(130,210,90,290);
   cross[1][0]=4;
   return;
  }
  else if(key==8051 && circles[1][1]==!5 && cross[1][1]==!5)        //box5
  {line(180,210,220,290);
   line(220,210,180,290);
   cross[1][1]=5;
   return;
  }
  else if(key==8292 && circles[1][2]==!6 && cross[1][2]==!6)              //box6
  {line(270,210,310,290);
   line(310,210,270,290);
   cross[1][2]=6;
   return;
  }
  else if(key==11386 && circles[2][0]==!7 && cross[2][0]==!7)                   //box7
  {line(90,310,130,390);
   line(130,310,90,390);
   cross[2][0]=7;
   return;
  }
  else if(key==11640 && circles[2][1]==!8 && cross[2][1]==!8)                         //box8
  {line(180,310,220,390);
   line(220,310,180,390);
   cross[2][1]=8;
   return;
  }
  else if(key==11875 && circles[2][2]==!9 && cross[2][2]==!9)                               //box9
  {line(270,310,310,390);
   line(310,310,270,390);
   cross[2][2]=9;
   return;
  }
  else
  {  invalidinput();
     goto inv1;
  }
}
		      /**********INVALID INPUT*********/
void invalidinput()
{lol:
 settextstyle(2,0,7);
 settextjustify(CENTER_TEXT,CENTER_TEXT);
 setcolor(RED);
 outtextxy(midx+300,50,"INVALID INPUT!!!,PRESS ANY KEY TO CONTINUE");
 key=0;
 key=bioskey(0);
 if(key>0)
{ setcolor(BLACK);
 outtextxy(midx+300,50,"INVALID INPUT!!!,PRESS ANY KEY TO CONTINUE");
 return;      }
 else goto lol;
}
		/****TWO PLAYER GAMEOPERATOR****/
		/****FULLY FUNCTIONAL FINAL RELEASE CANDIDATE SWITCHER****/
void gameoperatorpvp()
{
  void gamelogic();
  do
  {n++;
  if(n%2==!0)
   {crossmain();}
  if(n%2==0)
   {circlemain();}
   key=bioskey(1);
  if(key==3592)
   {return;}
   gamelogic();
  } while(n<10);

}
	    /***********AI GAME OPERATOR**********/
void gameoperatorai()
{ void aimainhub();
  void gamelogic();
  do
  {n++;
  if(n%2==!0)
   {crossmain();}
  if(n%2==0)
   {aimainhub();}
   key=bioskey(1);
  if(key==3592)
   {return;}
   gamelogic();
  } while(n<10);
}
	    ////GAME LOGIC
void gamelogic()
{
 int midx=getmaxx()/2,midy=getmaxy()/2;
 if(cross[0][0]+cross[1][1]+cross[2][2]==15 || cross[0][2]+cross[1][1]+cross[2][0]==15 || cross[0][1]+cross[1][1]+cross[2][1]==15 || cross[1][0]+cross[1][1]+cross[1][2]==15 || cross[0][0]+cross[1][0]+cross[2][0]==12 || cross[0][0]+cross[0][1]+cross[0][2]==6 || cross[0][2]+cross[1][2]+cross[2][2]==18 || cross[2][0]+cross[2][1]+cross[2][2]==24)
 {cleardevice();
  setcolor(GREEN);
  settextstyle(2,0,9);
  settextjustify(CENTER_TEXT,CENTER_TEXT);
 if(ai==0){outtextxy(midx,midy,"player 1 WINS!");}
 else {outtextxy(midx,midy,"YOU WIN!!");}
   delay(1000);
   closegraph();
  }
else if(circles[0][0]+circles[1][1]+circles[2][2]==15 || circles[0][2]+circles[1][1]+circles[2][0]==15 || circles[0][1]+circles[1][1]+circles[2][1]==15 || circles[1][0]+circles[1][1]+circles[1][2]==15 || circles[0][0]+circles[1][0]+circles[2][0]==12 || circles[0][0]+circles[0][1]+circles[0][2]==6 || circles[0][2]+circles[1][2]+circles[2][2]==18 || circles[2][0]+circles[2][1]+circles[2][2]==24 || cross[0][0]+cross[1][0]+cross[2][0]==12 || cross[0][0]+cross[0][1]+cross[0][2]==6 || cross[0][2]+cross[1][2]+cross[2][2]==18 || cross[2][0]+cross[2][1]+cross[2][2]==24)
 { cleardevice();
   setcolor(GREEN);
   settextstyle(2,0,9);
   settextjustify(CENTER_TEXT,CENTER_TEXT);
   if(ai==0)
   {outtextxy(midx,midy,"player 2 WINS!");}
   else if(ai==1) {outtextxy(midx,midy,"COMPUTER WINS!!!");}
   delay(1000);
   closegraph();
 }
 else if(n<9)
 {return;}
else
{ cleardevice();
   setcolor(GREEN);
   settextstyle(2,0,9);
   settextjustify(CENTER_TEXT,CENTER_TEXT);
   outtextxy(midx,midy,"DRAW :(");
  delay(1000);
  closegraph();
 }
}
	       /************AI MAIN LOGIC*********/
void aimainhub()
{delay(500);
 setcolor(RED);
 void autoplay();
 if(n==2)
 { if(cross[1][1]==5)
    {
      circle(100,150,30);
      circles[0][0]=1;
      return;
    }
    else
    {circle(200,250,30);
     circles[1][1]=5;
     return;
    }
 }
else if(circles[0][0]==1 && circles[0][2]==3 && cross[0][1]==0)
{   circle(200,150,30);
    circles[0][1]=2;
    return;
 }
else if(circles[0][0]==1 && circles[2][0]==7 && cross[1][0]==0)
{  circle(100,250,30);
   circles[1][0]=4;
   return;
 }
else if(circles[0][2]==3 && circles[2][2]==9 && cross[1][2]==0)
{
  circle(290,250,30);
  circles[1][2]=8;                                //
  return;
 }
else if(circles[2][0]==7 && circles[2][2]==9 && cross[2][1]==0)
{circle(200,350,30);
 circles[2][1]=8;
 return;
 }
else if(circles[0][0]==1 && circles[0][1]==2 && cross[0][2]==0)
{
   circle(290,150,30);
   circles[0][2]=3;
   return;
 }
else if(circles[0][1]==1 && circles[0][2]==3 && cross[0][0]==0)
 {
  circle(100,150,30);
  circles[0][0]=1;
  return;
 }
else if(circles[0][0]==1 && circles[1][0]==4 && cross[2][0]==0)
{
  circle(100,350,30);
  circles[2][0]=7;
  return;
 }
 else if(circles[0][0]==1 && circles[2][0]==7 && cross[1][0]==0)
 {
  circle(100,250,30);
  circles[1][0]=4;
  return;
 }
else if(circles[1][0]==4 && circles[2][0]==7 && cross[0][0]==0)
 {
  circle(100,150,30);
  circles[0][0]=1;
  return;
 }
 else if(circles[1][0]==4 && circles[1][1]==5 && cross[1][2]==0)
 {
  circle(290,250,30);
  circles[1][2]=6;
  return;
 }
 else if(circles[1][1]==5 && circles[1][2]==6 && cross[1][0]==0)
 {
  circle(100,250,30);
  circles[1][0]=4;
  return;
 }
 else if(circles[2][0]==7 && circles[2][1]==8 && cross[2][2]==0)
 {
  circle(290,350,30);
  circles[2][2]=9;
  return;
 }
 else if(circles[2][0]==7 && circles[2][2]==9 && cross[2][1]==0)
 {
  circle(200,350,30);
  circles[2][1]=8;
  return;
 }
 else if(circles[2][1]==8 && circles[2][2]==9 && cross[2][0]==0)
 {
  circle(100,350,30);
  circles[2][0]=7;
  return;
 }
 else if(circles[0][1]==2 && circles[1][1]==5 && cross[2][1]==0)
 {
  circle(200,350,30);
  circles[2][1]=8;
  return;
 }
 else if(circles[1][1]==5 && circles[2][1]==8 && cross[0][1]==0)
 {
  circle(200,150,30);
  circles[0][1]=2;
  return;
 }
 else if(circles[0][2]==3 && circles[1][2]==6 && cross[2][2]==0)
 {
  circle(290,350,30);
  circles[2][2]=9;
  return;
 }
 else if(circles[0][2]==3 && circles[2][2]==9 && cross[1][2]==0)
 {
  circle(290,250,30);
  circles[1][2]=6;
  return;
 }
 else if(circles[1][2]==6 && circles[2][2]==9 && cross[0][2]==0)
 {
  circle(290,150,30);
  circles[0][2]=3;
  return;
 }
 else if(circles[0][0]==1 && circles[1][1]==5 && cross[2][2]==0)
 {
  circle(290,350,30);
  circles[2][2]=9;
  return;
 }
 else if(circles[1][1]==5 && circles[2][2]==9 && cross[0][0]==0)
 {
  circle(100,150,30);
  circles[0][0]=1;
  return;
 }
 else if(circles[0][2]==3 && circles[1][1]==5 && cross[2][0]==0)
 {
  circle(100,350,30);
  circles[2][0]=7;
  return;
 }
 else if(circles[1][1]==5 && circles[2][0]==7 && cross[0][2]==0)
 {
  circle(290,150,30);
  circles[0][2]=3;
  return;
 }
		  /****DEFENSIVE****/
 else if(cross[0][0]==1 && cross[0][2]==3 && circles[0][1]==0)
 {  circle(200,150,30);
    circles[0][1]=2;
    return;
 }
 else if(cross[0][0]==1 && cross[2][0]==7 && circles[1][0]==0)
 {  circle(100,250,30);
    circles[1][0]=4;
    return;
 }
 else if(cross[0][2]==3 && cross[2][2]==9 && circles[1][2]==0)
 {
  circle(290,250,30);
  circles[1][2]=6;
  return;
 }
 else if(cross[2][0]==7 && cross[2][2]==9 && circles[2][1]==0)
 {circle(200,350,30);
 circles[2][1]=8;
 return;
 }
 else if(cross[0][0]==1 && cross[0][1]==2 && circles[0][2]==0)
 {
   circle(290,150,30);
   circles[0][2]=3;
   return;
 }
 else if(cross[0][1]==2 && cross[0][2]==3 && circles[0][0]==0)
 {
  circle(100,150,30);
  circles[0][0]=1;
  return;
 }
 else if(cross[0][0]==1 && cross[1][0]==4 && circles[2][0]==0)
 {
  circle(100,350,30);
  circles[2][0]=7;
  return;
 }
 else if(cross[0][0]==1 && cross[2][0]==7 && circles[1][0]==0)
 {
  circle(100,250,30);
  circles[1][0]=4;
  return;
 }
 else if(cross[1][0]==4 && cross[2][0]==7 && circles[0][0]==0)
 {
  circle(100,150,30);
  circles[0][0]=1;
  return;
 }
 else if(cross[1][0]==4 && cross[1][1]==5 && circles[1][2]==0)
 {
  circle(290,250,30);
  circles[1][2]=6;
  return;
 }
 else if(cross[1][1]==5 && cross[1][2]==6 && circles[1][0]==0)
 {
  circle(100,250,30);
  circles[1][0]=4;
  return;
 }
 else if(cross[2][0]==7 && cross[2][1]==8 && circles[2][2]==0)
 {
  circle(290,350,30);
  circles[2][2]=9;
  return;
 }
 else if(cross[2][0]==7 && cross[2][2]==9 && circles[2][1]==0)
 {
  circle(200,350,30);
  circles[2][1]=8;
  return;
 }
 else if(cross[2][1]==8 && cross[2][2]==9 && circles[2][0]==0)
 {
  circle(100,350,30);
  circles[2][0]=7;
  return;
 }
 else if(cross[0][1]==2 && cross[1][1]==5 && circles[2][1]==0)
 {
  circle(200,350,30);
  circles[2][1]=8;
  return;
 }
 else if(cross[1][1]==5 && cross[2][1]==8 && circles[0][1]==0)
 {
  circle(200,150,30);
  circles[0][1]=2;
  return;
 }
 else if(cross[0][2]==3 && cross[1][2]==6 && circles[2][2]==0)
 {
  circle(290,350,30);
  circles[2][2]=9;
  return;
 }
 else if(cross[0][2]==3 && cross[2][2]==9 && circles[1][2]==0)
 {
  circle(290,250,30);
  circles[1][2]=6;
  return;
 }
 else if(cross[1][2]==6 && cross[2][2]==9 && circles[0][2]==0)
 {
  circle(290,150,30);
  circles[0][2]=3;
  return;
 }
 else if(cross[0][0]==1 && cross[1][1]==5 && circles[2][2]==0)
 {
  circle(290,350,30);
  circles[2][2]=9;
  return;
 }
 else if(cross[1][1]==5 && cross[2][2]==9 && circles[0][0]==0)
 {
  circle(100,150,30);
  circles[0][0]=1;
  return;
 }
 else if(cross[0][2]==3 && cross[1][1]==5 && circles[2][0]==0)
 {
  circle(100,350,30);
  circles[2][0]=7;
  return;
 }
 else if(cross[1][1]==5 && cross[2][0]==7 && circles[0][2]==0)
 {
  circle(290,150,30);
  circles[0][2]=3;
  return;
 }

 else
 { autoplay();
   return;
 }
}

void assigner(int rd,int rd2)
{ if(rd==0 && rd2==0)
 {circle(100,150,30);
  circles[rd][rd2]=1;
  return;}//box1
 else if(rd==0 && rd2==1)
  {circle(200,150,30);
  circles[rd][rd2]=2;
  return;}//box2
 else if(rd==0 && rd2==2)
  {circle(290,150,30);
  circles[rd][rd2]=3;
  return;}//box3
 else if(rd==1 && rd2==0)
  {circle(100,250,30);
  circles[rd][rd2]=4;
  return;}//box4
 else if(rd==1 && rd2==1)
  {circle(200,250,30);
  circles[rd][rd2]=5;
  return;}//box5
 else if(rd==1 && rd2==2)
 {circle(290,250,30);
  circles[rd][rd2]=6;
  return;}//box6
 else if(rd==2 && rd2==0)
  {circle(100,350,30);
  circles[rd][rd2]=7;
  return;}//box7
 else if(rd==2 && rd2==1)
  {circle(200,350,30);
  circles[rd][rd2]=8;
  return;}//box8
 else if(rd==2 && rd2==2)
 {circle(290,350,30);
  circles[rd][rd2]=9;
  return;}//box9
}

void autoplay()
{
 for(int rd=0;rd<3;rd++)
 {
  for(int rd2=0;rd2<=rd;rd++)
  {//int counter=1;
   if(cross[rd][rd2]==0 && circles[rd][rd2]==0)
   {  assigner(rd,rd2);
      break;
   }
   else continue;
  }
 }
 return;
}


int main(void)
{ clrscr();
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;
   int left,right,top,bottom;
   int p1;
   int midx,midy;
   int c1;
   int f1;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      cout<<"Graphics error: \n"<< grapherrormsg(errorcode);
      cout<<"Press any key to halt:";
      getch();
      exit(1);
   }
  loading();

   /*clean up*/
   getch();
   closegraph();
   return 0;

}
