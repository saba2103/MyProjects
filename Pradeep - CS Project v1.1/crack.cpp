#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

//****************************************************************
//                DECLARATION OF VARIABLES (Global)
//****************************************************************

int x=36,y=11;
int i;
int yy;
int a1,a2,a3,a4;
int b1,b2,b3,b4;
char o1,o2,o3,o4;
char i1=a1,i2=a2,i3=a3,i4=a4;
int d1,d2,d3,d4;

//****************************************************************
//                         LOAD
//****************************************************************

void load(float d)
{
clock_t start, end;
start = clock();
do
{
end = clock();
}while(((end-start)/CLK_TCK)<=d);
}

//****************************************************************
//                         WELCOME SCREEN
//****************************************************************

void welcome()
{
gotoxy(18,8);cout<<"###### ######  ####  #####  ##### ##### ######";
gotoxy(18,9);cout<<"##  ## ##  ## ##  ## ##  ## ##    ##    ##  ##";
gotoxy(18,10);cout<<"###### ###### ##  ## ##  ## ###   ###   ######";
gotoxy(18,11);cout<<"##     ## ##  ###### ##  ## ##    ##    ##    ";
gotoxy(18,12);cout<<"##     ##  ## ##  ## #####  ##### ##### ##    ";
gotoxy(18,13);cout<<"¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";

gotoxy(21,15);cout<<"######  ####  ### ### ## ##   ## ######";
gotoxy(21,16);cout<<"##     ##  ## ## # ## ## ###  ## ##    ";
gotoxy(21,17);cout<<"## ### ##  ## ##   ## ## ## # ## ## ###";
gotoxy(21,18);cout<<"##  ## ###### ##   ## ## ##  ### ##  ##";
gotoxy(21,19);cout<<"###### ##  ## ##   ## ## ##   ## ######";
gotoxy(21,21);cout<<"               PRESENTS";

gotoxy(80,80);
getch();
clrscr();
}

//****************************************************************
//                         CRACK
//****************************************************************

void crack()
{
gotoxy(14,9);cout<<"    ######    ########    ###       ######   #   ##  ";
gotoxy(14,10);cout<<"  ##          ##    ##   #    #   ##        #  #    ";
gotoxy(14,11);cout<<"  ##          ##    ##   #     #  ##        ###     ";
gotoxy(14,12);cout<<"   ##         ########    #######  ##        # #     ";
gotoxy(14,13);cout<<"    ##        ## ###       #     #  ##        #  #    ";
gotoxy(14,14);cout<<"      ######  ##    ##     #     #   ######   #   #   ";
gotoxy(80,80);
getch();
clrscr();
}

//****************************************************************
//                         OUTLINES
//****************************************************************

void outline1()
{
gotoxy(34,10);cout<<"|   |   |   |   |";
gotoxy(34,11);cout<<"|   |   |   |   |";
gotoxy(34,12);cout<<"|   |   |   |   |";
gotoxy(35,9);
cout<<"___ ___ ___ ___";
gotoxy(35,13);
cout<<"¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯";
}

void outline2()
{
gotoxy(34,13);cout<<"|   |   |   |   |";
gotoxy(34,14);cout<<"|   |   |   |   |";
gotoxy(34,15);cout<<"|   |   |   |   |";
gotoxy(35,13);
cout<<"¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯";
gotoxy(35,16);
cout<<"¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯";
gotoxy(38,13);cout<<"|";gotoxy(42,13);cout<<"|";gotoxy(46,13);cout<<"|";
}

void outline3()
{
gotoxy(34,16);cout<<"|   |   |   |   |";
gotoxy(34,17);cout<<"|   |   |   |   |";
gotoxy(34,18);cout<<"|   |   |   |   |";
gotoxy(35,16);
cout<<"¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯";
gotoxy(35,19);
cout<<"¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯";
gotoxy(38,16);cout<<"|";gotoxy(42,16);cout<<"|";gotoxy(46,16);cout<<"|";
}

void outline4()
{
gotoxy(34,19);cout<<"|   |   |   |   |";
gotoxy(34,20);cout<<"|   |   |   |   |";
gotoxy(34,21);cout<<"|   |   |   |   |";
gotoxy(35,19);
cout<<"¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯";
gotoxy(35,22);
cout<<"¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯";
gotoxy(38,19);cout<<"|";gotoxy(42,19);cout<<"|";gotoxy(46,19);cout<<"|";
}

//****************************************************************
//                         OPERATIONS
//****************************************************************

void movement()
{
char m='q';
gotoxy(x,y);
do
{
m=getch();
switch(m)
{
case '0':cout<<"0";gotoxy(x+4,y);
if(x==36)a1=m;if(x==40)a2=m;if(x==44)a3=m;if(x==48)a4=m;
if(x!=48)x+=4;else m='p';
break;
case '1':cout<<"1";gotoxy(x+4,y);
if(x==36)a1=m;if(x==40)a2=m;if(x==44)a3=m;if(x==48)a4=m;
if(x!=48)x+=4;else m='p';
break;
case '2':cout<<"2";gotoxy(x+4,y);
if(x==36)a1=m;if(x==40)a2=m;if(x==44)a3=m;if(x==48)a4=m;
if(x!=48)x+=4;else m='p';
break;
case '3':cout<<"3";gotoxy(x+4,y);
if(x==36)a1=m;if(x==40)a2=m;if(x==44)a3=m;if(x==48)a4=m;
if(x!=48)x+=4;else m='p';
break;
case '4':cout<<"4";gotoxy(x+4,y);
if(x==36)a1=m;if(x==40)a2=m;if(x==44)a3=m;if(x==48)a4=m;
if(x!=48)x+=4;else m='p';
break;
case '5':cout<<"5";gotoxy(x+4,y);
if(x==36)a1=m;if(x==40)a2=m;if(x==44)a3=m;if(x==48)a4=m;
if(x!=48)x+=4;else m='p';
break;
case '6':cout<<"6";gotoxy(x+4,y);
if(x==36)a1=m;if(x==40)a2=m;if(x==44)a3=m;if(x==48)a4=m;
if(x!=48)x+=4;else m='p';
break;
case '7':cout<<"7";gotoxy(x+4,y);
if(x==36)a1=m;if(x==40)a2=m;if(x==44)a3=m;if(x==48)a4=m;
if(x!=48)x+=4;else m='p';
break;
case '8':cout<<"8";gotoxy(x+4,y);
if(x==36)a1=m;if(x==40)a2=m;if(x==44)a3=m;if(x==48)a4=m;
if(x!=48)x+=4;else m='p';
break;
case '9':cout<<"9";gotoxy(x+4,y);
if(x==36)a1=m;if(x==40)a2=m;if(x==44)a3=m;if(x==48)a4=m;
if(x!=48)x+=4;else m='p';
break;

default:
cout<<'\a';
break;
}
}while(m!='p');
}



void code()
{
randomize();
b1=b2=b3=b4=1;
while((b1==b2)||(b1==b3)||(b1==b4)||(b2==b3)||(b2==b4)||(b3==b4))
{
b1=random(10)+48;
b2=random(10)+48;
b3=random(10)+48;
b4=random(10)+48;
}
}

void bar()
{
char block=12;

o1=o2=o3=o4='p';

if(a1==b1)
{gotoxy(36,9);cout<<block;
gotoxy(36,8);cout<<block;
gotoxy(36,7);cout<<block;
o1='y';}
if((a1==b2)||(a1==b3)||(a1==b4))
{gotoxy(36,9);cout<<block;
gotoxy(36,8);cout<<block;
o1='h';}
else if(a1!=b1)
{gotoxy(36,9);cout<<block;o1='n';}

if(a2==b2)
{gotoxy(40,9);cout<<block;
gotoxy(40,8);cout<<block;
gotoxy(40,7);cout<<block;
o2='y';}
if((a2==b1)||(a2==b3)||(a2==b4))
{gotoxy(40,9);cout<<block;
gotoxy(40,8);cout<<block;
o2='h';}
else if(a2!=b2)
{gotoxy(40,9);cout<<block;o2='n';}

if(a3==b3)
{gotoxy(44,9);cout<<block;
gotoxy(44,8);cout<<block;
gotoxy(44,7);cout<<block;
o3='y';}
if((a3==b1)||(a3==b2)||(a3==b4))
{gotoxy(44,9);cout<<block;
gotoxy(44,8);cout<<block;
o3='h';}
else if(a3!=b3)
{gotoxy(44,9);cout<<block;o3='n';}

if(a4==b4)
{gotoxy(48,9);cout<<block;
gotoxy(48,8);cout<<block;
gotoxy(48,7);cout<<block;
o4='y';}
if((a4==b1)||(a4==b2)||(a4==b3))
{gotoxy(48,9);cout<<block;
gotoxy(48,8);cout<<block;
o4='h';}
else if(a4!=b4)
{gotoxy(48,9);cout<<block;o4='n';}
}

void carry1()
{
char cross=215;
i1=a1,i2=a2,i3=a3,i4=a4;

if(o1=='y'){gotoxy(36,14);cout<<i1;}
if(o1=='h'){gotoxy(36,11);cout<<" ";gotoxy(36,12);cout<<i1;}
if(o1=='n'){gotoxy(36,11);cout<<cross;gotoxy(36,10);cout<<i1;}

if(o2=='y'){gotoxy(40,14);cout<<i2;}
if(o2=='h'){gotoxy(40,11);cout<<" ";gotoxy(40,12);cout<<i2;}
if(o2=='n'){gotoxy(40,11);cout<<cross;gotoxy(40,10);cout<<i2;}

if(o3=='y'){gotoxy(44,14);cout<<i3;}
if(o3=='h'){gotoxy(44,11);cout<<" ";gotoxy(44,12);cout<<i3;}
if(o3=='n'){gotoxy(44,11);cout<<cross;gotoxy(44,10);cout<<i3;}

if(o4=='y'){gotoxy(48,14);cout<<i4;}
if(o4=='h'){gotoxy(48,11);cout<<" ";gotoxy(48,12);cout<<i4;}
if(o4=='n'){gotoxy(48,11);cout<<cross;gotoxy(48,10);cout<<i4;}
}

void carry2()
{
char cross=215;
i1=a1,i2=a2,i3=a3,i4=a4;

if(o1=='y'){gotoxy(36,17);cout<<i1;}
if(o1=='h'){gotoxy(36,14);cout<<" ";gotoxy(36,15);cout<<i1;}
if(o1=='n'){gotoxy(36,14);cout<<cross;gotoxy(36,13);cout<<i1;}

if(o2=='y'){gotoxy(40,17);cout<<i2;}
if(o2=='h'){gotoxy(40,14);cout<<" ";gotoxy(40,15);cout<<i2;}
if(o2=='n'){gotoxy(40,14);cout<<cross;gotoxy(40,13);cout<<i2;}

if(o3=='y'){gotoxy(44,17);cout<<i3;}
if(o3=='h'){gotoxy(44,14);cout<<" ";gotoxy(44,15);cout<<i3;}
if(o3=='n'){gotoxy(44,14);cout<<cross;gotoxy(44,13);cout<<i3;}

if(o4=='y'){gotoxy(48,17);cout<<i4;}
if(o4=='h'){gotoxy(48,14);cout<<" ";gotoxy(48,15);cout<<i4;}
if(o4=='n'){gotoxy(48,14);cout<<cross;gotoxy(48,13);cout<<i4;}
}

void carry3()
{
char cross=215;
i1=a1,i2=a2,i3=a3,i4=a4;

if(o1=='y'){gotoxy(36,20);cout<<i1;}
if(o1=='h'){gotoxy(36,17);cout<<" ";gotoxy(36,18);cout<<i1;}
if(o1=='n'){gotoxy(36,17);cout<<cross;gotoxy(36,16);cout<<i1;}

if(o2=='y'){gotoxy(40,20);cout<<i2;}
if(o2=='h'){gotoxy(40,17);cout<<" ";gotoxy(40,18);cout<<i2;}
if(o2=='n'){gotoxy(40,17);cout<<cross;gotoxy(40,16);cout<<i2;}

if(o3=='y'){gotoxy(44,20);cout<<i3;}
if(o3=='h'){gotoxy(44,17);cout<<" ";gotoxy(44,18);cout<<i3;}
if(o3=='n'){gotoxy(44,17);cout<<cross;gotoxy(44,16);cout<<i3;}

if(o4=='y'){gotoxy(48,20);cout<<i4;}
if(o4=='h'){gotoxy(48,17);cout<<" ";gotoxy(48,18);cout<<i4;}
if(o4=='n'){gotoxy(48,17);cout<<cross;gotoxy(48,16);cout<<i4;}
}

clear()
{
gotoxy(36,9);cout<<"_";
gotoxy(40,9);cout<<"_";
gotoxy(44,9);cout<<"_";
gotoxy(48,9);cout<<"_";

gotoxy(36,8);cout<<" ";
gotoxy(40,8);cout<<" ";
gotoxy(44,8);cout<<" ";
gotoxy(48,8);cout<<" ";

gotoxy(36,7);cout<<" ";
gotoxy(40,7);cout<<" ";
gotoxy(44,7);cout<<" ";
gotoxy(48,7);cout<<" ";
}

//****************************************************************
//                         CRACKED
//****************************************************************


void cracked()
{
load(0.01);
clrscr();
int x1,x2,y1,y2;
for(x1=1,x2=52;x1<=26,x2>=26;x1++,x2--)
{
load(0.01);
gotoxy(x1,12);cout<<"Password Successfully Cracked";
gotoxy(x1-1,12);cout<<" ";

gotoxy(x2,12);cout<<"Password Successfully Cracked";
gotoxy(x2+29,12);cout<<" ";
}

for(y1=1,y2=23;y1<=12,y2>=12;y1++,y2--)
{
load(0.01);
gotoxy(26,y1);cout<<"Password Successfully Cracked";
gotoxy(26,y1-1);cout<<"                             ";

gotoxy(26,y2);cout<<"Password Successfully Cracked";
gotoxy(26,y2+1);cout<<"                             ";
}
}

//****************************************************************
//                  --===MAIN PROGRAM===--
//****************************************************************

void main()
{
restart: clrscr();
d1=d2=d3=d4=10;

welcome();
crack();

code();


outline1();
movement();
bar();
if((a1==b1)&&(a2==b2)&&(a3==b3)&&(a4==b4)){cracked();exit(0);}
gotoxy(80,80);getch();
clear();

outline2();
carry1();
x=36;y=14;
movement();
bar();
if((a1==b1)&&(a2==b2)&&(a3==b3)&&(a4==b4)){cracked();exit(0);}
gotoxy(80,80);getch();
clear();

outline3();
carry2();
x=36;y=17;
movement();
bar();
if((a1==b1)&&(a2==b2)&&(a3==b3)&&(a4==b4)){cracked();exit(0);}
gotoxy(80,80);getch();
clear();

outline4();
carry3();
x=36;y=20;
movement();
//bar();
if((a1==b1)&&(a2==b2)&&(a3==b3)&&(a4==b4)){cracked();exit(0);}
gotoxy(80,80);
load(3);

for(x=35;x<=49;x++)
{gotoxy(x,23);cout<<"_";}
for(x=35;x<=49;x++)
{gotoxy(x,25);cout<<"¯";}
gotoxy(34,24);cout<<"|";
gotoxy(50,24);cout<<"|";
gotoxy(36,24);cout<<char(b1)<<"   "<<char(b2)<<"   "<<char(b3)<<"   "<<char(b4);
gotoxy(80,80);getch();
goto restart;
}