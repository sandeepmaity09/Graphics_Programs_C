// Circle: circle(int x,int y,int radius);
// Author:ghost
// Date:05-08-2016

#include<stdio.h>
#include<graphics.h>

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
circle(200,200,100);
getch();
closegraph();
return 0;
}
