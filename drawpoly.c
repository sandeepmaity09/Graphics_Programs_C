// Polygon Creation: drawpoly(int num,int *polypoints)
// Author:ghost
// Date:05-08-2016

#include<stdio.h>
#include<graphics.h>

int main(){
int gd=DETECT,gm;
int p[]={100,100,200,100,200,200,100,200};
initgraph(&gd,&gm,NULL);
drawpoly(4,p);
//line(100,100,200,100);
getch();
closegraph();
return 0;
}
