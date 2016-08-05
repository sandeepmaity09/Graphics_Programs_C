// Bar 3d Creation: bar3d(int left,int top,int right,int bottom,int depth,int topflag)
// Author:ghost
// Date:05-08-2016

#include<stdio.h>
#include<graphics.h>

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
//setfillstyle(0,RED);
bar3d(100,100,200,200,50,3);
getch();
closegraph();
return 0;
}
