
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

// road
        line(5, 400, 620, 400);

        // human
        circle(150,300,20);
        line(150,320,150,370);
        line(150,370,130,400);
        line(150,370,170,400);
        line(150,330,170,370);
        line(110,320,150,350);

// kite
line(70,50,30,80);
line(70,50,100,80);
line(30,80,65,115);
line(100,80,60,115);
line(60,80,110,320);

// house
line(350, 250, 350, 400);
 line(500, 250, 500, 400);
line(350,250,500,250);
line(430,170,510,260);

line(430,170,338,260);
 line(390, 310, 390, 400);
 line(460, 310, 460, 400);
 line(390, 310, 460, 310);

// tree
line(225, 260, 225, 400);
line(245, 260, 245, 400);
line(170, 260,295, 260);
line(220,190,170, 260);
line(250,190,295, 260);
line(190, 190,275, 190);
line(237.5, 120,190, 190);
line(237.5, 120,275, 190);
// flower
line(570, 335, 570, 400);
circle(570,310,10);
ellipse(570,315,180,360,10,20);
ellipse(570,305,0,180,10,20);
ellipse(580,310,270,90,20,9);
ellipse(560,310,90,270,20,9);
ellipse(570,360,90,270,14,9);
ellipse(570,365,270,90,14,9);


//  sun
circle(580,60,25);
line(580,5,580,35);
line(580,85,580,120);
line(605,60,630,60);
line(525,60,555,60);
line(540,10,560,40);
line(610,10,595,40);
line(560,75,522,100);
line(595,79,610,110);

        getch();
    closegraph();
}