#include <graphics.h>
#include<iostream>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
     //For S
    line(50,50,70,50);
    line(50,50,50,70);
    line(50,70,70,70);
    line(70,70,70,90);
    line(70,90,50,90);

    //For A
    line(90,50,80,90);
    line(90,50,100,90);
    line(85,70,95,70);

    //For K
    line(110,50,110,90);
    line(125,50,110,70);
    line(110,70,125,90);

    //For I
    line(140,50,140,90);
    line(135,50,145,50);
    line(135,90,145,90);

    //For L
    line(160,50,160,90);
    line(160,90,175,90);

    //For A
    line(195,50,185,90);
    line(195,50,205,90);
    line(190,70,200,70);

    //For A
    line(240,50,230,90);
    line(240,50,250,90);
    line(235,70,245,70);

    //For K
    line(260,50,260,90);
    line(275,50,260,70);
    line(260,70,275,90);

    //For T
    line(290,50,290,90);
    line(285,50,295,50);

    //For E
    line(310,50,310,90);
    line(310,50,320,50);
    line(310,70,320,70);
    line(310,90,320,90);

    //For R
    line(335,50,335,90);
    line(335,50,350,50);
    line(350,50,350,70);
    line(350,70,335,70);
    line(335,70,350,90);

    //For C
    line(50,110,50,150);
    line(50,110,70,110);
    line(50,150,70,150);

    //For S
    line(85,110,105,110);
    line(85,110,85,130);
    line(85,130,105,130);
    line(105,130,105,150);
    line(105,150,85,150);

    //For E
    line(120,110,120,150);
    line(120,110,135,110);
    line(120,130,135,130);
    line(120,150,135,150);

    //For 2
    line(150,110,170,110);
    line(170,110,170,130);
    line(170,130,150,130);
    line(150,130,150,150);
    line(150,150,170,150);

    //For 0
    line(185,110,185,150);
    line(185,110,200,110);
    line(185,150,200,150);
    line(200,110,200,150);

    //For 0
    line(215,110,215,150);
    line(215,110,230,110);
    line(215,150,230,150);
    line(230,110,230,150);

    //For 1
    line(245,110,245,150);

    //For 0
    line(260,110,260,150);
    line(260,110,275,110);
    line(260,150,275,150);
    line(275,110,275,150);

    //For 1
    line(290,110,290,150);

    //For 9
    line(310,110,330,110);
    line(330,110,330,130);
    line(310,110,310,130);
    line(310,130,330,130);
    line(330,130,330,150);

    //For 1
    line(345,110,345,150);

    //For 4
    line(360,110,360,130);
    line(380,110,380,130);
    line(360,130,380,130);
    line(380,130,380,150);

    //For 3
    line(420,110,420,150);
    line(420,110,405,110);
    line(420,130,405,130);
    line(420,150,405,150);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle (180,180,190,450);
    floodfill(181,181,WHITE);
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle (190,190,360,290);
    floodfill(191,191,GREEN);
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(270,240,30);
    floodfill(270,240,RED);


     getch();
    closegraph();
    return 0;


    }


