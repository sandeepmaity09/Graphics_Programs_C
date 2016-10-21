// DDA implementation
// Author:ghost
// Date:11-08-2016

#include<stdio.h>
#include<graphics.h>

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"NULL");

int x1=21,y1=11;
int x2=30,y2=18;

int delx = x2-x1;
int dely = y2-y1;

int m = dely/delx;

int twodelx = 2 * delx;
int twodely = 2 * dely;
int twodelxdely = 2*(dely-delx);

//int p= 2*dely-delx;

int x,y,xEnd;
int p = 2 * dely - delx;

// start point

x=x1;
y=y1;
xEnd=x2;

//setPixel(x,y);

line(x,y,x,y);

while(x<xEnd){

x=x+1;

if(p<0)
p=p+twodely;

else{

y=y+1;
p=p+twodelxdely;

}

//setPixel(x,y);
line(x,y,x,y);

}

getch();
return 0;

}
