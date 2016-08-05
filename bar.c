// Bar Creation: bar(int left,int top,int right,int bottom)
// Author:ghost
// Date:05-08-2016

#include<stdio.h>
#include<graphics.h>

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
bar(100,100,200,200);
bar(210,100,310,200);
getch();
return 0;
}
