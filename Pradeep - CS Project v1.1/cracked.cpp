#include<iostream.h>
#include<conio.h>
#include"load.cpp"
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
