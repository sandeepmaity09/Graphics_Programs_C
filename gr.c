/* gr.c */
#include<graphics.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
line(1,1,500,500);
/* circle(300,300,60); */
getch();
closegraph();
return 0;
}
