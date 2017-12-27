#include<graphics.h>
void main()
{
    int i,gd=DETECT,gm;
    int x,y;
    y=400;
    initgraph(&gd,&gm,"");
    setbkcolor(0);
    cleardevice();
    setcolor(3);
    setfillstyle(1,3);
    while(1==1) 
    {
    cleardevice();
    {
    x=100; 
    fillellipse(x,y,10,10);
    x=x+10;
    if(x==800)
    {
        x=0;
    }
    }
    {
    x=130; 
    fillellipse(x,y,10,10);
    x=x+10;
    if(x==800)
    {
        x=0;
    }
    }
    }
    getch();
    closegraph();
}