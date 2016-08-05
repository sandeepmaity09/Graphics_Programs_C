// To clear the screen in graphics mode : void cleardevice()
// Author:ghost
// Data:05-08-2016

#include<stdio.h>
#include<graphics.h>

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
outtext("Press any key to clear the screen.");
getch();
cleardevice();
outtext("Press any key to exit....");

getch();
closegraph();
return 0;
}
