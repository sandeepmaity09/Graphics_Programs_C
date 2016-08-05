// Arc Creation func:- arc(int x,int y,int stangle,int endangle,int radius)
// Author:ghost
// Date:05-08-2016

#include<graphics.h>
#include<stdio.h>

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
arc(100,100,0,359,100);
arc(300,100,0,359,100);
arc(500,100,0,359,100);
getch();
return 0;
}
