/****************************************************************
								HEADER FILES USED
								¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
****************************************************************/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

class blocks
{
int score,round;
char name[30],player1[30],player2[30];
public:
void menu(int men);
void hs_save(int hs,int r);
void name_ini(char a[30],char b[30]);
void hs_show_name();
void hs_show_pts();
int retpts();
};

/****************************************************************
								END OF CLASS
								¯¯¯¯¯¯¯¯¯¯¯¯
****************************************************************/


/****************************************************************
							  CLASS FUNCTIONS
							  ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
****************************************************************/

void blocks :: menu(int men)
{
int i,y;
gotoxy(25,5);
for(i=1;i<=30;i++)
cout<<"=";
gotoxy(25,7);
for(i=1;i<=30;i++)
cout<<"=";
gotoxy(25,17);
for(i=1;i<=30;i++)
cout<<"=";
for(y=5;y<=17;y++)
{gotoxy(24,y);
cout<<"|";}
for(y=5;y<=17;y++)
{gotoxy(55,y);
cout<<"|";}
gotoxy(38,6);cout<<"MENU";
gotoxy(32,9);cout<<"1.START ROUND "<<men;
gotoxy(33,11);cout<<"2.VIEW SOCRES";
gotoxy(35,13);cout<<"3.END GAME";
gotoxy(32,15);cout<<"4. INSTRUCTIONS";
gotoxy(12,23);cout<<"Copyright "<<char(425)<<" 2012-2013 Saba Gaming Pros. All Rights "<<char(430)<<"eserved";
gotoxy(80,80);
}

void blocks :: hs_save(int hs,int r)
{
clrscr();
score=hs;
round=r;
int i,y;
gotoxy(30,7);
for(i=1;i<=20;i++)
cout<<"=";
gotoxy(30,15);
for(i=1;i<=20;i++)
cout<<"=";
for(y=7;y<=15;y++)
{gotoxy(29,y);
cout<<"|";}
for(y=7;y<=15;y++)
{gotoxy(50,y);
cout<<"|";}
gotoxy(37,8);cout<<"ROUND "<<round;
gotoxy(31,10);cout<<"WINNER : ";
if(hs>0){strcpy(name,player1);cout<<player1;}
if(hs<0){strcpy(name,player2);cout<<player2;score*=-1;}
gotoxy(31,12);cout<<"POINTS : "<<score;
gotoxy(34,14);cout<<"CONGRATS!!!";
gotoxy(80,80);
}

void blocks :: name_ini(char a[30],char b[30])
{strcpy(player1,a);
strcpy(player2,b);}

void blocks :: hs_show_name()
{cout<<name;}

void blocks :: hs_show_pts()
{cout<<score;}

int blocks :: retpts()
{return score;}


/****************************************************************
							  OTHER FUNCTIONS
							  ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
****************************************************************/

/****************************************************************
						 FUNCTION 1 : LOAD FUNCTION
****************************************************************/

void load(float d)
{
clock_t start, end;
start = clock();
do
{
end = clock();
}while(((end-start)/CLK_TCK)<=d);
}


/****************************************************************
						 FUNCTION 2 : PRODUCTIONS
****************************************************************/

void pros()
{
gotoxy(27,5);cout<<"######  ####  #####   #### ";
gotoxy(27,6);cout<<"##     ##  ## ##  ## ##  ##";
gotoxy(27,7);cout<<"###### ##  ## #####  ##  ##";
gotoxy(27,8);cout<<"    ## ###### ##  ## ######";
gotoxy(27,9);cout<<"###### ##  ## #####  ##  ##";
gotoxy(27,10);cout<<"¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";

gotoxy(21,12);cout<<"######  ####  ### ### ## ##   ## ######";
gotoxy(21,13);cout<<"##     ##  ## ## # ## ## ###  ## ##    ";
gotoxy(21,14);cout<<"## ### ##  ## ##   ## ## ## # ## ## ###";
gotoxy(21,15);cout<<"##  ## ###### ##   ## ## ##  ### ##  ##";
gotoxy(21,16);cout<<"###### ##  ## ##   ## ## ##   ## ######";

gotoxy(80,80);
getch();
clrscr();
}

/****************************************************************
							 FUNCTION 3 : RATING
****************************************************************/

void rating()
{
char c=430;
gotoxy(25,2); cout<<"|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|";
gotoxy(25,3); cout<<"|             EVERYONE             |";
gotoxy(25,4); cout<<"|  ______________________________  |";
gotoxy(25,5); cout<<"| |                              | |";
gotoxy(25,6); cout<<"| |  "<<c<<"  ###################      | |";
gotoxy(25,7); cout<<"| |     ###################      | |";
gotoxy(25,8); cout<<"| |     ####                     | |";
gotoxy(25,9); cout<<"| |     ####                     | |";
gotoxy(25,10);cout<<"| |     ####                     | |";
gotoxy(25,11);cout<<"| |     ####                     | |";
gotoxy(25,12);cout<<"| |     ####                     | |";
gotoxy(25,13);cout<<"| |     ###########              | |";
gotoxy(25,14);cout<<"| |     ###########              | |";
gotoxy(25,15);cout<<"| |     ####                     | |";
gotoxy(25,16);cout<<"| |     ####                     | |";
gotoxy(25,17);cout<<"| |     ####                     | |";
gotoxy(25,18);cout<<"| |     ####                     | |";
gotoxy(25,19);cout<<"| |     ####################     | |";
gotoxy(25,20);cout<<"| |     ####################     | |";
gotoxy(25,21);cout<<"| |                              | |";
gotoxy(25,22);cout<<"|  ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯  |";
gotoxy(25,23);cout<<"|       CONTENT RATED BY ESRB      |";
gotoxy(25,24);cout<<"|__________________________________|";
gotoxy(80,80);
getch();
clrscr();
}

/****************************************************************
						FUNCTION 4 : GAME COVER PAGE
****************************************************************/

char b=12,d=22,u=21;
int i,j;
int y1=1,y2=21;
int x1=80,x2=1,y=9;
char r=26,l=27;
char copy=425,res=430;

void b1()
{
gotoxy(5,5);
{
for(i=1;i<=7;i++)cout<<b;
cout<<" "<<b<<b<<"     ";
for(i=1;i<=6;i++)cout<<b;
cout<<" ";for(i=1;i<=6;i++)cout<<b;
cout<<" "<<b<<b<<"  "<<b<<b;
cout<<" ";for(i=1;i<=6;i++)cout<<b;
}
}

void b2()
{
gotoxy(5,6);
{
cout<<b<<b<<"  "<<b<<b;
cout<<"  "<<b<<b<<"     ";
cout<<b<<b<<"  "<<b<<b;
cout<<" "<<b<<b<<"     ";
cout<<b<<b<<" "<<b<<b;
cout<<"  "<<b<<b;
}
}

void b3()
{
gotoxy(5,7);
{
for(i=1;i<=5;i++)cout<<b;
cout<<"   "<<b<<b<<"     ";
cout<<b<<b<<"  "<<b<<b;
cout<<" "<<b<<b<<"     ";
for(i=1;i<=4;i++)cout<<b;
cout<<"   ";for(i=1;i<=6;i++)cout<<b;
}
}

void b4()
{
gotoxy(5,8);
{
cout<<b<<b<<"  "<<b<<b;
cout<<"  "<<b<<b<<"     ";
cout<<b<<b<<"  "<<b<<b;
cout<<" "<<b<<b<<"     ";
cout<<b<<b<<" "<<b<<b;
cout<<"      "<<b<<b;
}
}

void b5()
{
gotoxy(5,9);
{
for(i=1;i<=7;i++)cout<<b;
cout<<" ";for(i=1;i<=6;i++)cout<<b;
cout<<" ";for(i=1;i<=6;i++)cout<<b;
cout<<" ";for(i=1;i<=6;i++)cout<<b;
cout<<" "<<b<<b<<"  "<<b<<b;
cout<<" ";for(i=1;i<=6;i++)cout<<b;
}
}
void clear()
{
for(x1=1,x2=80;x1<=39,x2>=41;x1++,x2--)
{
load(0.01);
gotoxy(x2,5);cout<<l;
gotoxy(x2+1,5);cout<<" ";
gotoxy(x2,6);cout<<l;
gotoxy(x2+1,6);cout<<" ";
gotoxy(x2,7);cout<<l;
gotoxy(x2+1,7);cout<<" ";
gotoxy(x2,8);cout<<l;
gotoxy(x2+1,8);cout<<" ";
gotoxy(x2,9);cout<<l;
gotoxy(x2+1,9);cout<<" ";

gotoxy(x1,5);cout<<r;
gotoxy(x1-1,5);cout<<" ";
gotoxy(x1,6);cout<<r;
gotoxy(x1-1,6);cout<<" ";
gotoxy(x1,7);cout<<r;
gotoxy(x1-1,7);cout<<" ";
gotoxy(x1,8);cout<<r;
gotoxy(x1-1,8);cout<<" ";
gotoxy(x1,9);cout<<r;
gotoxy(x1-1,9);cout<<" ";

}
}

void block()
{
gotoxy(4,5);cout<<" ####### ##     ###### ###### ##  ## ######   ###### ######  ####   ###### ";
gotoxy(4,6);cout<<" ##  ##  ##     ##  ## ##     ## ##  ##           ## ##  ## ## ##       ## ";
gotoxy(4,7);cout<<" #####   ##     ##  ## ##     ####   ######   ###### ##  ##    ##   ###### ";
gotoxy(4,8);cout<<" ##  ##  ##     ##  ## ##     ## ##      ##   ##     ##  ##    ##       ## ";
gotoxy(4,9);cout<<" ####### ###### ###### ###### ##  ## ######   ###### ######  ###### ###### ";
gotoxy(80,80);
getch();

b1();b2();b3();b4();b5();
gotoxy(32,12);cout<<" Press Any Button ";
gotoxy(33,21);cout<<" Version 1.1 ";
gotoxy(12,23);cout<<"Copyright "<<copy<<" 2012-2013 Saba Gaming Pros. All Rights "<<res<<"eserved";
gotoxy(80,80);

getch();
clear();

load(0.1);clrscr();

}

/****************************************************************
						FUNCTION 5 : WELCOME PAGE
****************************************************************/

void welcome()
{
gotoxy(12,9);cout<<" ##       ## ###### ##     ###### ###### ####   #### ###### ";
gotoxy(12,10);cout<<" ##       ## ##     ##     ##     ##  ## ## ## ## ## ##     ";
gotoxy(12,11);cout<<" ##  ###  ## ####   ##     ##     ##  ## ##  ###  ## ####   ";
gotoxy(12,12);cout<<" ## ## ## ## ##     ##     ##     ##  ## ##       ## ##     ";
gotoxy(12,13);cout<<" ####   #### ###### ###### ###### ###### ##       ## ###### ";
}

/****************************************************************
				 FUNCTION 6 : LOADING PLEASE WAIT FUNCTION
****************************************************************/

void gameload()
{
int x,i;
char aa=12;

gotoxy(35,10);
cout<<"_______________";
gotoxy(35,12);
cout<<"¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";
gotoxy(34,11);
cout<<"|";
gotoxy(50,11);
cout<<"|";

for(j=1;j<=2;j++)
{
x=37;
load(0.01);
gotoxy(x-2,11);
cout<<aa;
load(0.01);
gotoxy(x-1,11);
cout<<aa;
load(0.01);
gotoxy(x,11);
cout<<aa;

for(i=1;i<=12;i++)
{
x+=1;
load(0.01);
gotoxy(x-3,11);
cout<<" ";
gotoxy(x,11);
cout<<aa;
}

load(0.01);
gotoxy(x-2,11);
cout<<" ";
load(0.01);
gotoxy(x-1,11);
cout<<" ";
load(0.01);
gotoxy(x,11);
cout<<" ";
}
clrscr();
}

/****************************************************************
					  FUNCTION 7 : COUNTDOWN FUNCTION
****************************************************************/

void start()
{
clrscr();
load(0.01);
gotoxy(39,9);cout<<" ###### ";
gotoxy(39,10);cout<<"     ## ";
gotoxy(39,11);cout<<"   #### ";
gotoxy(39,12);cout<<"     ## ";
gotoxy(39,13);cout<<" ###### ";
load(0.5);
gotoxy(39,9);cout<<" ###### ";
gotoxy(39,10);cout<<"     ## ";
gotoxy(39,11);cout<<" ###### ";
gotoxy(39,12);cout<<" ##     ";
gotoxy(39,13);cout<<" ###### ";
load(0.5);
gotoxy(39,9);cout<<"  ####   ";
gotoxy(39,10);cout<<" ## ##   ";
gotoxy(39,11);cout<<"    ##   ";
gotoxy(39,12);cout<<"    ##   ";
gotoxy(39,13);cout<<" ####### ";
load(0.5);
}

/****************************************************************
					 FUNCTION 8 : LAST ROUND FUNCTION
****************************************************************/

void lastround()
{
for(int i=1;i<=3;i++)
{
load(0.25);
gotoxy(8,9);cout<<" ##      ####  ###### ######   ###### ###### ##  ## ##   ## #####   ";
gotoxy(8,10);cout<<" ##     ##  ## ##       ##     ##  ## ##  ## ##  ## ###  ## ##  ##  ";
gotoxy(8,11);cout<<" ##     ##  ## ######   ##     ###### ##  ## ##  ## ## # ## ##   ## ";
gotoxy(8,12);cout<<" ##     ######     ##   ##     ## ##  ##  ## ##  ## ##  ### ##  ##  ";
gotoxy(8,13);cout<<" ###### ##  ## ######   ##     ##  ## ###### ###### ##   ## #####   ";
load(0.25);
clrscr();
}
}

/****************************************************************
							 FUNCTION 9 : WIN LOSE
****************************************************************/

void win1lose2()
{
gotoxy(17,1);cout<<"WON ";
gotoxy(57,1);cout<<"LOST ";
gotoxy(45,9); cout<<"      ##   ##  ####  ##  ##     ";
gotoxy(45,10);cout<<"       ## ##  ##  ## ##  ##     ";
gotoxy(45,11);cout<<"         #    ##  ## ##  ##     ";
gotoxy(45,12);cout<<"        ###    ####   ####      ";
gotoxy(45,14);cout<<"    ##      ####  ##### ######";
gotoxy(45,15);cout<<"    ##     ##  ## ##      ##  ";
gotoxy(45,16);cout<<"    ##     ##  ## #####   ##  ";
gotoxy(45,17);cout<<"    ##     ##  ##    ##   ##  ";
gotoxy(45,18);cout<<"    ######  ####  #####   ##  ";

for(int i=1;i<=10;i++)
{
load(0.25);
gotoxy(2,9); cout<<"                                      ";
gotoxy(2,10);cout<<"                                      ";
gotoxy(2,11);cout<<"                                      ";
gotoxy(2,12);cout<<"                                      ";
gotoxy(2,13);cout<<"                                      ";
gotoxy(2,14);cout<<"                                      ";
gotoxy(2,15);cout<<"                                      ";
gotoxy(2,16);cout<<"                                      ";
gotoxy(2,17);cout<<"                                      ";
load(0.25);
gotoxy(2,9); cout<<" ##   ##  ####  ##  ##                ";
gotoxy(2,10);cout<<"  ## ##  ##  ## ##  ##         ##     ";
gotoxy(2,11);cout<<"    #    ##  ## ##  ##       ##  ##   ";
gotoxy(2,12);cout<<"   ###    ####   ####     ############";
gotoxy(2,13);cout<<"##     ## ###### ###  ##   ##      ## ";
gotoxy(2,14);cout<<"##     ## ##  ## ###  ##    ###  ###  ";
gotoxy(2,15);cout<<"##  #  ## ##  ## ## # ##       ##     ";
gotoxy(2,16);cout<<"## ### ## ##  ## ##  ###       ##     ";
gotoxy(2,17);cout<<"#### #### ###### ##  ###   ########## ";

}
}

void win2lose1()
{
gotoxy(57,1);cout<<"WON ";
gotoxy(17,1);cout<<"LOST ";
gotoxy(5,9); cout<<"      ##   ##  ####  ##  ##     ";
gotoxy(5,10);cout<<"       ## ##  ##  ## ##  ##     ";
gotoxy(5,11);cout<<"         #    ##  ## ##  ##     ";
gotoxy(5,12);cout<<"        ###    ####   ####      ";
gotoxy(5,14);cout<<"    ##      ####  ##### ######";
gotoxy(5,15);cout<<"    ##     ##  ## ##      ##  ";
gotoxy(5,16);cout<<"    ##     ##  ## #####   ##  ";
gotoxy(5,17);cout<<"    ##     ##  ##    ##   ##  ";
gotoxy(5,18);cout<<"    ######  ####  #####   ##  ";

for(int i=1;i<=10;i++)
{
load(0.25);
gotoxy(42,9); cout<<"                                      ";
gotoxy(42,10);cout<<"                                      ";
gotoxy(42,11);cout<<"                                      ";
gotoxy(42,12);cout<<"                                      ";
gotoxy(42,13);cout<<"                                      ";
gotoxy(42,14);cout<<"                                      ";
gotoxy(42,15);cout<<"                                      ";
gotoxy(42,16);cout<<"                                      ";
gotoxy(42,17);cout<<"                                      ";
load(0.25);
gotoxy(42,9); cout<<" ##   ##  ####  ##  ##                ";
gotoxy(42,10);cout<<"  ## ##  ##  ## ##  ##         ##     ";
gotoxy(42,11);cout<<"    #    ##  ## ##  ##       ##  ##   ";
gotoxy(42,12);cout<<"   ###    ####   ####     ############";
gotoxy(42,13);cout<<"##     ## ###### ###  ##   ##      ## ";
gotoxy(42,14);cout<<"##     ## ##  ## ###  ##    ###  ###  ";
gotoxy(42,15);cout<<"##  #  ## ##  ## ## # ##       ##     ";
gotoxy(42,16);cout<<"## ### ## ##  ## ##  ###       ##     ";
gotoxy(42,17);cout<<"#### #### ###### ##  ###   ########## ";
}
}

//****************************************************************
//                  --===MAIN PROGRAM===--
//****************************************************************

void main()
{
fstream fp;
blocks g;
randomize();
int count,i,l1,l2,u1,u2;
int x1,x2,x,y1,y2,y,j;
int p[100],p1,p2,h[5];
char opt,ch,aa=12,bb=18,cc=26,dd=27,ee=24;
char name1[30],name2[30];
int pts1=0,pts2=0,high;
int sum=0;
int p12=pts1-pts2;
int p21=pts2-pts1;

remove("game.dat");               //To refresh the binary file

pros();
rating();
block();
welcome();
load(0.5);
gotoxy(30,17);cout<<"PLAYER 1 : ";cin>>name1;
gotoxy(30,19);cout<<"PLAYER 2 : ";cin>>name2;
g.name_ini(name1,name2);
gotoxy(25,22);cout<<"Click any key to start game";
load(0.25);cout<<"."; load(0.25);cout<<"."; load(0.25);cout<<".";
getch();

count=1;
do
{
pts1=0;pts2=0;
clrscr();
g.menu(count);
opt=getch();
switch(opt)
{
case '1':
clrscr();

gameload();

if(count==5)
lastround();
start();
clrscr();


for(x=1;x<=80;x++)
{
gotoxy(x,24);
cout<<"_";
}

for(i=1;i<=10;i++)            //generation of blocks randomly
{                             //and calculating a unique address for every block
x=random(39)+1;
y=random(15)+3;
gotoxy(x,y);
cout<<aa;
p[i]=x*100+y;
}

for(i=11;i<=20;i++)          //generation of blocks randomly
{                            //and calculating a unique address for every block
x=random(40)+41;
y=random(15)+3;
gotoxy(x,y);
cout<<aa;
p[i]=x*100+y;
}

for(x=1;x<=80;x++)
{
gotoxy(x,2);
cout<<"_";
}

for(y=1;y<=24;y++)
{
gotoxy(40,y);
cout<<"|";
}

x1=20;y1=23;x2=60;y2=23;

gotoxy(x1,y1);
cout<<ee;
gotoxy(x2,y2);
cout<<ee;
l1=strlen(name1);
l2=strlen(name2);
u1=l1/2;
u2=l2/2;
gotoxy(20-u1,25);cout<<name1;
gotoxy(60-u2,25);cout<<name2;
gotoxy(80,80);

do
{
ch=getch();
switch(ch)
{
case 'a':
gotoxy(x1,y1);
cout<<" ";
gotoxy(x1-1,y1);
cout<<dd;
if(x1>1)
x1-=1;
p1=x1*100+y1;
for(i=1;i<=100;i++)
{
if(p1==p[i])
{pts1+=1;p[i]=0;
p12=pts1-pts2;
p21=pts2-pts1;}
}
if(pts1>pts2)
{gotoxy(13,1);
cout<<"YOU LEAD by "<<p12<<" !!";
gotoxy(53,1);
cout<<"YOU TRAIL by "<<p12<<" !";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if(pts2>pts1)
{gotoxy(13,1);
cout<<"YOU TRAIL by "<<p21<<" !";
gotoxy(53,1);
cout<<"YOU LEAD by "<<p21<<" !!";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if((pts1!=0)&&(pts1==pts2))
{gotoxy(35,1);
cout<<"SCORES LEVEL";
gotoxy(13,1);
cout<<"                ";
gotoxy(53,1);
cout<<"                ";}
if(pts1==10)
{win1lose2();ch='0';}
gotoxy(80,80);
break;

case 'd':
if(x1!=39)
{gotoxy(x1,y1);
cout<<" ";
gotoxy(x1+1,y1);
cout<<cc;}
if(x1<39)
x1+=1;
p1=x1*100+y1;
for(i=1;i<=100;i++)
{
if(p1==p[i])
{pts1+=1;p[i]=0;
p12=pts1-pts2;
p21=pts2-pts1;}
}
if(pts1>pts2)
{gotoxy(13,1);
cout<<"YOU LEAD by "<<p12<<" !!";
gotoxy(53,1);
cout<<"YOU TRAIL by "<<p12<<" !";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if(pts2>pts1)
{gotoxy(13,1);
cout<<"YOU TRAIL by "<<p21<<" !";
gotoxy(53,1);
cout<<"YOU LEAD by "<<p21<<" !!";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if((pts1!=0)&&(pts1==pts2))
{gotoxy(35,1);
cout<<"SCORES LEVEL";
gotoxy(13,1);
cout<<"                ";
gotoxy(53,1);
cout<<"                ";}
if(pts1==10)
{win1lose2();ch='0';}
gotoxy(80,80);
break;

case 'w':
if(y1!=3)
{gotoxy(x1,y1);
cout<<" ";
gotoxy(x1,y1-1);
cout<<ee;}
if(y1>3)
y1-=1;
p1=x1*100+y1;
for(i=1;i<=100;i++)
{
if(p1==p[i])
{pts1+=1;p[i]=0;
p12=pts1-pts2;
p21=pts2-pts1;}
}
if(pts1>pts2)
{gotoxy(13,1);
cout<<"YOU LEAD by "<<p12<<" !!";
gotoxy(53,1);
cout<<"YOU TRAIL by "<<p12<<" !";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if(pts2>pts1)
{gotoxy(13,1);
cout<<"YOU TRAIL by "<<p21<<" !";
gotoxy(53,1);
cout<<"YOU LEAD by "<<p21<<" !!";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if((pts1!=0)&&(pts1==pts2))
{gotoxy(35,1);
cout<<"SCORES LEVEL";
gotoxy(13,1);
cout<<"                ";
gotoxy(53,1);
cout<<"                ";}
if(pts1==10)
{win1lose2();ch='0';}
gotoxy(80,80);
break;

case 's':
if(y1!=23)
{gotoxy(x1,y1);
cout<<" ";
gotoxy(x1,y1+1);
cout<<bb;}
if(y1<23)
y1+=1;
p1=x1*100+y1;
for(i=1;i<=100;i++)
{
if(p1==p[i])
{pts1+=1;p[i]=0;
p12=pts1-pts2;
p21=pts2-pts1;}
}
if(pts1>pts2)
{gotoxy(13,1);
cout<<"YOU LEAD by "<<p12<<" !!";
gotoxy(53,1);
cout<<"YOU TRAIL by "<<p12<<" !";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if(pts2>pts1)
{gotoxy(13,1);
cout<<"YOU TRAIL by "<<p21<<" !";
gotoxy(53,1);
cout<<"YOU LEAD by "<<p21<<" !!";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if((pts1!=0)&&(pts1==pts2))
{gotoxy(35,1);
cout<<"SCORES LEVEL";
gotoxy(13,1);
cout<<"                ";
gotoxy(53,1);
cout<<"                ";}
if(pts1==10)
{win1lose2();ch='0';}
gotoxy(80,80);
break;

case '4':
if(x2!=41)
{gotoxy(x2,y2);
cout<<" ";
gotoxy(x2-1,y2);
cout<<dd;}
if(x2>41)
x2-=1;
p2=x2*100+y2;
for(i=1;i<=100;i++)
{
if(p2==p[i])
{pts2+=1;p[i]=0;
p12=pts1-pts2;
p21=pts2-pts1;}
}
if(pts2>pts1)
{gotoxy(53,1);
cout<<"YOU LEAD by "<<p21<<" !!";
gotoxy(13,1);
cout<<"YOU TRAIL by "<<p21<<" !";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if(pts1>pts2)
{gotoxy(53,1);
cout<<"YOU TRAIL by "<<p12<<" !";
gotoxy(13,1);
cout<<"YOU LEAD by "<<p12<<" !!";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if((pts2!=0)&&(pts1==pts2))
{gotoxy(35,1);
cout<<"SCORES LEVEL";
gotoxy(13,1);
cout<<"                ";
gotoxy(53,1);
cout<<"                ";}
if(pts2==10)
{win2lose1();ch='0';}
gotoxy(80,80);
break;

case '6':
gotoxy(x2,y2);
cout<<" ";
gotoxy(x2+1,y2);
cout<<cc;
if(x2<80)
x2+=1;
p2=x2*100+y2;
for(i=1;i<=100;i++)
{
if(p2==p[i])
{pts2+=1;p[i]=0;
p12=pts1-pts2;
p21=pts2-pts1;}
}
if(pts2>pts1)
{gotoxy(53,1);
cout<<"YOU LEAD by "<<p21<<" !!";
gotoxy(13,1);
cout<<"YOU TRAIL by "<<p21<<" !";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if(pts1>pts2)
{gotoxy(53,1);
cout<<"YOU TRAIL by "<<p12<<" !";
gotoxy(13,1);
cout<<"YOU LEAD by "<<p12<<" !!";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if((pts2!=0)&&(pts1==pts2))
{gotoxy(35,1);
cout<<"SCORES LEVEL";
gotoxy(13,1);
cout<<"                ";
gotoxy(53,1);
cout<<"                ";}
if(pts2==10)
{win2lose1();ch='0';}
gotoxy(80,80);
break;

case '8':
if(y2!=3)
{gotoxy(x2,y2);
cout<<" ";
gotoxy(x2,y2-1);
cout<<ee;}
if(y2>3)
y2-=1;
p2=x2*100+y2;
for(i=1;i<=100;i++)
{
if(p2==p[i])
{pts2+=1;p[i]=0;
p12=pts1-pts2;
p21=pts2-pts1;}
}
if(pts2>pts1)
{gotoxy(53,1);
cout<<"YOU LEAD by "<<p21<<" !!";
gotoxy(13,1);
cout<<"YOU TRAIL by "<<p21<<" !";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if(pts1>pts2)
{gotoxy(53,1);
cout<<"YOU TRAIL by "<<p12<<" !";
gotoxy(13,1);
cout<<"YOU LEAD by "<<p12<<" !!";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if((pts2!=0)&&(pts1==pts2))
{gotoxy(35,1);
cout<<"SCORES LEVEL";
gotoxy(13,1);
cout<<"                ";
gotoxy(53,1);
cout<<"                ";}
if(pts2==10)
{win2lose1();ch='0';}
gotoxy(80,80);
break;

case '5':
if(y2!=23)
{gotoxy(x2,y2);
cout<<" ";
gotoxy(x2,y2+1);
cout<<bb;}
if(y2<23)
y2+=1;
p2=x2*100+y2;
for(i=1;i<=100;i++)
{
if(p2==p[i])
{pts2+=1;p[i]=0;
p12=pts1-pts2;
p21=pts2-pts1;}
}
if(pts2>pts1)
{gotoxy(53,1);
cout<<"YOU LEAD by "<<p21<<" !!";
gotoxy(13,1);
cout<<"YOU TRAIL by "<<p21<<" !";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if(pts1>pts2)
{gotoxy(53,1);
cout<<"YOU TRAIL by "<<p12<<" !";
gotoxy(13,1);
cout<<"YOU LEAD by "<<p12<<" !!";
gotoxy(35,1);
cout<<"             ";
gotoxy(40,1);
cout<<"|";}
if((pts2!=0)&&(pts1==pts2))
{gotoxy(35,1);
cout<<"SCORES LEVEL";
gotoxy(13,1);
cout<<"                ";
gotoxy(53,1);
cout<<"                ";}
if(pts2==10)
{win2lose1();ch='0';}
gotoxy(80,80);
break;

default : cout<<"\a";
break;
}

}while(ch!='0');



high=p12;
h[count]=high;
sum+=h[count];

fp.open("game.dat",ios::out|ios::app);
g.hs_save(high,count);
fp.write((char*)&g,sizeof(blocks));
fp.close();
getch();
count+=1;

break;

case '2':
clrscr();
fp.open("game.dat",ios::in);
if(!fp)
{
cout<<"ERROR";
}
clrscr();
ch=-69;
gotoxy(25,3);
for(i=1;i<=30;i++)
cout<<"=";
gotoxy(37,4);  cout<<"SCORES";
gotoxy(25,5);
for(i=1;i<=30;i++)
cout<<"=";
gotoxy(30,6);  cout<<"NAME";
gotoxy(45,6);  cout<<"POINTS";
gotoxy(25,7);
for(i=1;i<=30;i++)
cout<<"-";
gotoxy(25,19);
for(i=1;i<=30;i++)
cout<<"¯";
gotoxy(25,21);
for(i=1;i<=30;i++)
cout<<"_";
for(y=3;y<=21;y++)
{gotoxy(24,y);
cout<<"|";}
for(y=3;y<=21;y++)
{gotoxy(55,y);
cout<<"|";}
for(y=9;y<=18;y+=2)
{gotoxy(27,y);
cout<<ch;}
gotoxy(30,20);
if(count!=6)
{
if(sum==0)
cout<<"    SCORES LEVEL";
if(sum>0)
cout<<name1<<" Leads By "<<sum;
if(sum<0)
cout<<name2<<" Leads By "<<sum*-1;
gotoxy(80,80);}

x1=29;y=9;x2=47;i=1;

while(fp.read((char*)&g,sizeof(blocks)))
{
if(i<=5)
{
gotoxy(x1,y);
g.hs_show_name();
gotoxy(x2,y);
g.hs_show_pts();
y+=2;
i++;
}
}
fp.close();
gotoxy(80,80);
break;

case '3':
clrscr();
fp.open("game.dat",ios::in);
if(!fp)
{
cout<<"ERROR";
}
clrscr();
ch=-69;
gotoxy(25,3);
for(i=1;i<=30;i++)
cout<<"=";
gotoxy(37,4);  cout<<"SCORES";
gotoxy(25,5);
for(i=1;i<=30;i++)
cout<<"=";
gotoxy(30,6);  cout<<"NAME";
gotoxy(45,6);  cout<<"POINTS";
gotoxy(25,7);
for(i=1;i<=30;i++)
cout<<"-";
gotoxy(25,19);
for(i=1;i<=30;i++)
cout<<"¯";
gotoxy(25,21);
for(i=1;i<=30;i++)
cout<<"_";
for(y=3;y<=21;y++)
{gotoxy(24,y);
cout<<"|";}
for(y=3;y<=21;y++)
{gotoxy(55,y);
cout<<"|";}
for(y=9;y<=18;y+=2)
{gotoxy(27,y);
cout<<ch;}
gotoxy(30,20);
if(sum==0)
cout<<"    MATCH DRAWN";
if(sum>0)
cout<<name1<<" Wins By "<<sum;
if(sum<0)
cout<<name2<<" Wins By "<<sum*-1;
gotoxy(80,80);

x1=29;y=9;x2=47;i=1;

while(fp.read((char*)&g,sizeof(blocks)))
{
if(i<=5)
{
gotoxy(x1,y);
g.hs_show_name();
gotoxy(x2,y);
g.hs_show_pts();
y+=2;
i++;
}
}
fp.close();
exit(0);
break;

case 4:
case '4': clrscr();
gotoxy(34,4);cout<<"INSTRUCTIONS";
gotoxy(1,6);cout<<"This is an interactive 2 player game. You will be given with 10 blocks. The "<<endl;
cout<<"first to complete clearing all the 10 wins the round. You will have 5 rounds."<<endl;
cout<<"The difference in which you win a round is your score of that round. Whoever is"<<endl;
cout<<"in lead after the 5th round wins the match. "<<endl;
cout<<"One of the extraordinary features is that each player will be getting LIVE SCORE UPDATES during the game. Please NOTE, this is not a best of five game ";
cout<<"i.e, no. of wins will not decide the winner. The overall difference of points decides the winner.";
cout<<"\n\n     CONTROLS FOR PLAYER 1 :                    CONTROLS FOR PLAYER 1 :";
cout<<"\n            UP - 'w'                                    UP - '8'";
cout<<"\n           DOWN - 's'                                  DOWN - '5'";
cout<<"\n           RIGHT - 'd'                                 RIGHT - '6'";
cout<<"\n           LEFT - 'a'                                  LEFT - '4'";
cout<<"\n\n                To quit in the middle of the game press '0'";
cout<<"\n\n\n                 Press any key to go back to the main menu";
cout<<"\n                 ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";
gotoxy(80,80);
break;


default:cout<<"\a";
}


getch();
if(count==6)
{
clrscr();
fp.open("game.dat",ios::in);
if(!fp)
{
cout<<"ERROR";
}
clrscr();
ch=-69;
gotoxy(25,3);
for(i=1;i<=30;i++)
cout<<"=";
gotoxy(37,4);  cout<<"SCORES";
gotoxy(25,5);
for(i=1;i<=30;i++)
cout<<"=";
gotoxy(30,6);  cout<<"NAME";
gotoxy(45,6);  cout<<"POINTS";
gotoxy(25,7);
for(i=1;i<=30;i++)
cout<<"-";
gotoxy(25,19);
for(i=1;i<=30;i++)
cout<<"¯";
gotoxy(25,21);
for(i=1;i<=30;i++)
cout<<"_";
for(y=3;y<=21;y++)
{gotoxy(24,y);
cout<<"|";}
for(y=3;y<=21;y++)
{gotoxy(55,y);
cout<<"|";}
for(y=9;y<=18;y+=2)
{gotoxy(27,y);
cout<<ch;}
gotoxy(30,20);
if(sum==0)
cout<<"    MATCH DRAWN";
if(sum>0)
cout<<name1<<" Wins By "<<sum;
if(sum<0)
cout<<name2<<" Wins By "<<sum*-1;
gotoxy(30,24);


x1=29;y=9;x2=47;i=1;

while(fp.read((char*)&g,sizeof(blocks)))
{
if(i<=5)
{
gotoxy(x1,y);
g.hs_show_name();
gotoxy(x2,y);
g.hs_show_pts();
y+=2;
i++;
}
}
fp.close();
exit(0);
}

}while(count!='6');

}



