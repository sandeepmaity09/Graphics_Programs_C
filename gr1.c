// A demo graphics program
// Author:ghost
// Date:05-08-2016

#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main(){

int gd=DETECT,gm,errorcode;

initgraph(&gd,&gm,NULL);

//errorcode=graphresult();

/*if(errorcode!=0){
printf("Graphics Error:%s\n",grapherrormsg(errorcode));
getch();
exit(1);
}*/

printf("%d",getmaxx());
printf("%d",getmaxy());
line(0,0,getmaxx(),getmaxy());
getch();
closegraph();
return 0;
}
