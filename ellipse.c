// ellipse(int x,int y,int startangle,int endangle,int xradius,int yradius);
// Author:ghost
// Date:05-08-2016

#include<stdio.h>
#include<graphics.h>

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
ellipse(100,100,0,180,50,25);
getch();
closegraph();
return 0;
}
