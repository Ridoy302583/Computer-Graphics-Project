#include <iostream>
#include <graphics.h>
#include <math.h>
using namespace std;
void customStar4Edge(int x, int y, int e){
	int m = e/4;
    setfillstyle(1, 15);

	line(x-m, y, x, y+e);
	line(x, y+e, x+m, y);
	line(x+m, y, x, y-e);
	line(x, y-e, x-m, y);

	floodfill(x, y, WHITE);

	line(x, y+m, x+e, y);
	line(x+e, y, x, y-m);
	line(x, y-m, x-e, y);
	line(x-e, y, x, y+m);

	floodfill(x+m+1, y, WHITE);
	floodfill(x-m-1, y, WHITE);
}

int main()
{
    //Window DEsign
    int height=GetSystemMetrics(SM_CYSCREEN);
    int ss=400,pp=200;
    //int width=GetSystemMetrics(SM_CXSCREEN);
    initwindow(1550+200,height+300,"Airoplane Simulation");
    int midx = getmaxx() / 2;
    int midy = getmaxy() / 2;
    int page=0;
    int del=10;
    int h=20;
    int G=0;
    int cc=10;
    int angle=0;
    double t=20;
    double tt=0;
    int rr=8;
    int rrr=6;
    char key;
    while(1)
    {
        //int a[10]={20,550,70,550,140,630,40,630,20,550};
        for(int i=0; i<1700; i++)
        {
            setactivepage(page);
            setvisualpage(1-page);
            cleardevice();
            //Display Color
            setcolor(9);
            setfillstyle(SOLID_FILL,9);
            floodfill(10,650,9);




            //sun drawing

            setcolor(YELLOW);
            setfillstyle(SOLID_FILL, YELLOW);
            circle((310+((i+1000)/4)), (-200+((i+1000)/4)), 50);
            floodfill((310+((i+1000)/4)), (-200+((i+1000)/4)), YELLOW);

            line(260+((i+1000)/4),-200+((i+1000)/4),230+((i+1000)/4),-200+((i+1000)/4));
            line(360+((i+1000)/4),-200+((i+1000)/4),390+((i+1000)/4),-200+((i+1000)/4));
            line(310+((i+1000)/4),-250+((i+1000)/4),310+((i+1000)/4),-280+((i+1000)/4));
            line(310+((i+1000)/4),-150+((i+1000)/4),310+((i+1000)/4),-120+((i+1000)/4));
            //line(330+((i+1000)/4),-230+((i+1000)/4),330+((i+1000)/4),-210+((i+1000)/4));
            line(350+((i+1000)/4),-220+((i+1000)/4),380+((i+1000)/4),-230+((i+1000)/4));
            line(330+((i+1000)/4),-235+((i+1000)/4),360+((i+1000)/4),-260+((i+1000)/4));

            line(270+((i+1000)/4),-220+((i+1000)/4),240+((i+1000)/4),-240+((i+1000)/4));
            line(290+((i+1000)/4),-240+((i+1000)/4),270+((i+1000)/4),-270+((i+1000)/4));

            line(270+((i+1000)/4),-180+((i+1000)/4),240+((i+1000)/4),-160+((i+1000)/4));
            line(290+((i+1000)/4),-160+((i+1000)/4),270+((i+1000)/4),-130+((i+1000)/4));

            line(350+((i+1000)/4),-180+((i+1000)/4),380+((i+1000)/4),-160+((i+1000)/4));
            line(330+((i+1000)/4),-160+((i+1000)/4),350+((i+1000)/4),-130+((i+1000)/4));


            //Drawing a moon
             //cout<<height;

            //Night Mode
            if(i>1300)
            {
                //Lighthly Sky


                //Night View
                setcolor(GREEN);
                circle(300,100,80);
                setcolor(BLACK);
                rectangle(0,0,1550+200,height+300);
                setfillstyle(SOLID_FILL,BLACK);
                floodfill(875,582,BLACK);




                //Star Drawing
                setcolor(WHITE);
        customStar4Edge(300, 20, 20);
        customStar4Edge(800, 150, 15);
        customStar4Edge(1200, 300, 7);
        customStar4Edge(1300, 20, 5);
        customStar4Edge(70, 300, 7);
        customStar4Edge(30, 40,9 );
        customStar4Edge(500, 40, 4);
        customStar4Edge(1000, 50, 9);
        customStar4Edge(midx-420, midy+15, 4);
        customStar4Edge(midx+420, midy-315, 4);

        //Lightly Sky
        for(int i=0; i<=100; i++){
            int x=rand()%1750;
            int y=rand()%600;
            putpixel(x,y,i%15);

            if(i==25){
                customStar4Edge(x, y, 5);
                customStar4Edge(x+400, y, 5);
            }
        }


            //Lighting of Tree
            setcolor(WHITE);
            circle(70,482,10);

            circle(43,498,7);
            circle(98,498,7);
            circle(1465,482,10);
            circle(1440,498,7);
            circle(1490,498,7);
            circle(55,245,15);
            circle(1485,245,15);
            if(cc==10)
            {
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(71,483,WHITE);
                floodfill(44,499,WHITE);
                floodfill(99,499,WHITE);
                floodfill(1466,483,WHITE);
                floodfill(1440,499,WHITE);
                floodfill(1490,499,WHITE);
                floodfill(1486,246,WHITE);
                floodfill(56,246,WHITE);
                cc=cc/2;
            }
            else
            {

                setfillstyle(SOLID_FILL,RED);
                floodfill(71,483,WHITE);
                floodfill(42,499,WHITE);
                floodfill(101,499,WHITE);
                floodfill(1466,483,WHITE);
                floodfill(1440,499,WHITE);
                floodfill(1490,499,WHITE);
                floodfill(1486,246,WHITE);
                floodfill(56,246,WHITE);
                cc=cc*2;

            }
            //Drawing Moon
             setcolor(WHITE);
            //arc(1300,100,80,340,40);
            //arc(1300,100,130,290,20);
            //line(1305,60,1283,90);
            //line(1335,115,1295,120);
            circle(1470,50,40);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(1471,51,WHITE);






            //Left Bulb
            setcolor(GREEN);
            rectangle(5,200,15,700);
            rectangle(1520,200,1530,700);
            setfillstyle(SOLID_FILL,YELLOW);
              floodfill(10,450,GREEN);
               floodfill(1525,450,GREEN);



              arc(5,280,40,90,70);
              arc(5,290,40,90,70);
              line(55,230,55,245);
              arc(1530,280,90,130,70);
              arc(1530,290,90,130,70);
              line(1485,225,1485,240);
              //setfillstyle(SOLID_FILL,RED);
              //floodfill(20,200,RED);




            //Drawing Star
            /*setcolor(WHITE);
            line(1100,100,1200,100);
            line(1200,100,1150,50);
            line(1150,50,1100,100);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(1150,70,WHITE);


            setcolor(WHITE);
            line(1100,75,1150,125);
            line(1150,125,1200,75);
            line(1200,75,1100,75);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(1105,78,WHITE);
            floodfill(1150,123,WHITE);
            floodfill(1195,78,WHITE);*/






            }

            //Drawing 2nd Cloud
            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            circle(100+(i/4),150,27);
            floodfill(101+(i/4),151,WHITE);
            circle(130+(i/4),150,30);
            floodfill(131+(i/4),151,WHITE);

            //3rd Cloud Drawing
            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            circle(1000+(i/10+7),100+(i/10),27);
            floodfill(1001+(i/10+7),101+(i/10),WHITE);
            circle(1000+30+(i/10+7),100+(i/10),30);
            floodfill(1001+30+(i/10+7),101+(i/10),WHITE);

            //4th cloud Drawing




            //right bulb

            //setcolor(GREEN);

            //setfillstyle(SOLID_FILL,YELLOW);


              //circle(1485,245,15);
              //setfillstyle(SOLID_FILL,YELLOW);
              //floodfill(1486,246,GREEN);





            //Cloud Drawing

            setcolor(WHITE);
            circle(1550-i,70,25);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1549-i,71,WHITE);

            setcolor(WHITE);
            circle(1585-i,60,30);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1584-i,61,WHITE);

            setcolor(WHITE);
            circle(1575-i,80,30);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1574-i,91,WHITE);

            setcolor(WHITE);
            circle(1610-i,70,30);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1609-i,81,WHITE);


            //2nd cloud drawing


             //Left Grass Drawing
            setcolor(LIGHTGREEN);
            circle(120,660,170);
            setfillstyle(SOLID_FILL,LIGHTGREEN);
            floodfill(110,570,LIGHTGREEN);

            //RIGHT GRASS DRAWING

            setcolor(LIGHTGREEN);
            circle(1400,630,150);
            setfillstyle(SOLID_FILL,LIGHTGREEN);
            floodfill(1401,631,LIGHTGREEN);

            setcolor(WHITE);
            if(i>1300){
            circle(98,498,7);
            circle(1440,498,7);
            //circle(1490,498,7);

             if(rrr==6){
               setfillstyle(SOLID_FILL,YELLOW);
               floodfill(99,499,WHITE);
               floodfill(1441,499,WHITE);
              rrr=rrr/2;

            }
            else
            {
                setfillstyle(SOLID_FILL,RED);
                floodfill(99,499,WHITE);
                floodfill(1441,499,WHITE);
              //setfillstyle(CLOSE_DOT_FILL,YELLOW);
              //floodfill(10,450,GREEN);
               //floodfill(1525,450,GREEN);
              rrr=rrr*2;
            }}


           //circle(1490,498,7);
           //floodfill(1491,499,WHITE);




            //TREE DRAWING
            //Left Tree
            setcolor(1);
            rectangle(55,540,75,600);
            setfillstyle(SOLID_FILL,6);
            floodfill(65,545,1);









            setcolor(GREEN);
            circle(70,510,25);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(71,511,GREEN);

            setcolor(GREEN);
            circle(45,520,20);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(46,521,GREEN);

            setcolor(GREEN);
            circle(95,520,20);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(96,521,GREEN);

            setcolor(GREEN);
            circle(30,535,20);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(31,536,GREEN);

            setcolor(GREEN);
            circle(105,535,20);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(106,536,GREEN);


            setcolor(GREEN);
            circle(55,535,20);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(56,536,GREEN);


            setcolor(GREEN);
            circle(75,535,20);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(75,536,GREEN);

            //Right Tree
            setcolor(1);
            rectangle(1455,540,1475,600);
            setfillstyle(SOLID_FILL,6);
            floodfill(1465,570,1);


            //LIGHTING

            /*setcolor(WHITE);
            circle(1465,482,10);
            circle(1440,498,7);
            circle(1490,498,7);
            if(cc==10)
            {
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(1466,483,WHITE);
                floodfill(1440,499,WHITE);
                floodfill(1490,499,WHITE);
                cc=cc/2;
            }
            else
            {

                setfillstyle(SOLID_FILL,RED);
                floodfill(1466,483,WHITE);
                floodfill(1440,499,WHITE);
                floodfill(1490,499,WHITE);
                cc=cc*2;

            }*/





            setcolor(GREEN);
            circle(1465,510,25);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(1466,511,GREEN);

            setcolor(GREEN);
            circle(1440,520,20);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(1441,521,GREEN);

            setcolor(GREEN);
            circle(1490,520,20);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(1491,521,GREEN);

            setcolor(GREEN);
            circle(1425,535,20);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(1426,536,GREEN);

            setcolor(GREEN);
            circle(1500,535,20);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(1501,536,GREEN);


            setcolor(GREEN);
            circle(1480,535,20);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(1480,540,GREEN);


            setcolor(GREEN);
            circle(1450,535,20);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(1450,540,GREEN);


            //Tree Image take

            //Light Code


        //Tree Footer Coler
        setcolor(GREEN);
        line(90,600,65,590);
        line(65,590,40,600);
        line(40,600,90,600);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(67,593,GREEN);

        setcolor(GREEN);
        line(1490,600,1465,590);
        line(1465,590,1440,600);
        line(1440,600,1490,600);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(1467,593,GREEN);










            //Road Drawing
            setcolor(8);
            rectangle(1,600,1532,height-30);
            float x=(-5+1540)/2;
            int y=(600+(height-10))/2;
            setfillstyle(9,8);
            floodfill(10,650,8);


            setcolor(14);
            rectangle(0-5,727,50,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(22.5,732,14);

            setcolor(14);
            rectangle(90,727,150,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(120,732,14);

            setcolor(14);
            rectangle(190,727,250,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(220,732,14);
            setcolor(14);
            rectangle(290,727,350,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(320,732,14);
            setcolor(14);
            rectangle(390,727,450,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(420,732,14);
            setcolor(14);
            rectangle(490,727,550,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(520,732,14);
            setcolor(14);
            rectangle(590,727,650,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(620,732,14);
            setcolor(14);
            rectangle(690,727,750,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(720,732,14);
            setcolor(14);
            rectangle(790,727,850,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(820,732,14);
            setcolor(14);
            rectangle(890,727,950,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(920,732,14);
            setcolor(14);
            rectangle(990,727,1050,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(1020,732,14);
            setcolor(14);
            rectangle(1090,727,1150,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(1120,732,14);
            setcolor(14);
            rectangle(1190,727,1250,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(1220,732,14);
            setcolor(14);
            rectangle(1290,727,1350,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(1320,732,14);
            setcolor(14);
            rectangle(1390,727,1450,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(1420,732,14);
            setcolor(14);
            rectangle(1490,727,1540,737);
            setfillstyle(SOLID_FILL,14);
            floodfill(1520,732,14);

            //Bangladeshi Flag in Left Tower
            setcolor(RED);
            rectangle(430,200,570,280);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(495,240,RED);

            setcolor(RED);
            circle(495,240,28);
            setfillstyle(SOLID_FILL,RED);
            floodfill(496,241,RED);

            setcolor(RED);
            rectangle(430,200,420,400);
            setfillstyle(SLASH_FILL,RED);
            floodfill(425,300,RED);

            //RIGHT TOWER FLAG
            setcolor(RED);
            rectangle(970,200,1110,280);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(1050,240,RED);

            setcolor(RED);
            circle(1045,240,28);
            setfillstyle(SOLID_FILL,RED);
            floodfill(1046,241,RED);

            setcolor(RED);
            rectangle(1110,200,1120,400);
            setfillstyle(SLASH_FILL,RED);
            floodfill(1115,300,RED);

            //Station Drawing

            rectangle(150,400,450,600);
            rectangle(1090,400,1390,600);
            rectangle(451,370,1089,600);
            //Left tower
            setcolor(WHITE);
            rectangle(150,400,450,440);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(300,420,WHITE);



            setcolor(1);
            rectangle(150,440,450,480);
            setfillstyle(SOLID_FILL,1);
            floodfill(300,460,1);

            setcolor(WHITE);
            rectangle(160,455,440,475);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(300,460,WHITE);


            setcolor(2);
            rectangle(150,480,450,520);
            setfillstyle(SOLID_FILL,2);
            floodfill(300,500,2);

            setcolor(WHITE);
            rectangle(160,485,440,505);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(300,495,WHITE);

            setcolor(WHITE);
            rectangle(150,520,450,560);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(300,540,WHITE);

            rectangle(150,560,450,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(300,580,WHITE);

            setcolor(1);
            rectangle(150,550,450,565);
            setfillstyle(SOLID_FILL,1);
            floodfill(300,560,1);

            setcolor(8);
            rectangle(170,400,175,600);
            setfillstyle(SOLID_FILL,8);
            floodfill(172,500,8);

            setcolor(8);
            rectangle(425,400,430,600);
            setfillstyle(SOLID_FILL,8);
            floodfill(427,500,8);


            //Right Tower
            setcolor(WHITE);
            rectangle(1090,400,1390,440);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1200,420,WHITE);
            setcolor(1);
            rectangle(1090,440,1390,480);
            setfillstyle(SOLID_FILL,1);
            floodfill(1200,460,1);

            setcolor(WHITE);
            rectangle(1100,455,1380,475);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1200,460,WHITE);

            setcolor(2);
            rectangle(1090,480,1390,520);
            setfillstyle(SOLID_FILL,2);
            floodfill(1200,500,2);

            setcolor(WHITE);
            rectangle(1100,485,1380,505);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1200,495,WHITE);


            setcolor(WHITE);
            rectangle(1090,520,1390,560);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1200,540,WHITE);

            rectangle(1090,560,1390,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1200,580,WHITE);

            setcolor(1);
            rectangle(1090,550,1390,565);
            setfillstyle(SOLID_FILL,1);
            floodfill(1200,560,1);


            setcolor(8);
            rectangle(1110,400,1115,600);
            setfillstyle(SOLID_FILL,8);
            floodfill(1112,500,8);

            setcolor(8);
            rectangle(1365,400,1370,600);
            setfillstyle(SOLID_FILL,8);
            floodfill(1367,500,8);

            //Air Traffic Control Tower
            //1st step
            setcolor(8);
            rectangle(170,350,180,400);
            setfillstyle(SLASH_FILL,8);
            floodfill(172,380,8);

            setcolor(BLACK);
            rectangle(180,350,230,400);
            setfillstyle(SLASH_FILL,BLACK);
            floodfill(200,380,BLACK);

            setcolor(8);
            rectangle(230,350,235,400);
            setfillstyle(SLASH_FILL,8);
            floodfill(232,380,8);
            //2nd step

            setcolor(8);
            rectangle(170,280,180,350);
            setfillstyle(SOLID_FILL,8);
            floodfill(175,320,8);

            setcolor(WHITE);
            rectangle(180,280,230,350);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(200,320,WHITE);

            setcolor(8);
            rectangle(230,280,235,350);
            setfillstyle(SOLID_FILL,8);
            floodfill(232,320,8);

            //3rd step
            setcolor(8);
            rectangle(170,230,180,280);
            setfillstyle(SLASH_FILL,8);
            floodfill(172,250,8);

            setcolor(BLACK);
            rectangle(180,230,230,280);
            setfillstyle(SLASH_FILL,BLACK);
            floodfill(200,250,BLACK);

            setcolor(8);
            rectangle(230,230,235,280);
            setfillstyle(SLASH_FILL,8);
            floodfill(232,250,8);
            //4th step

            setcolor(GREEN);
            rectangle(145,215,260,230);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(200,220,GREEN);
            //5th step

            setcolor(BLACK);
            int e[12]= {155,215,255,215,270,190,140,190,150,215};
            setfillstyle(SOLID_FILL,YELLOW);
            fillpoly(5,e);
            setcolor(BLACK);
            line(160,215,149,190);
            line(168,215,158,190);
            line(176,215,158+9,190);
            line(176+8,215,158+8+9,190);
            line(176+8+8,215,158+8+8+9,190);
            line(176+8+8+8,215,158+8+8+8+9,190);
            line(176+8+8+8,215,158+8+8+8+8+10,190);
            line(176+8+8+8,215,158+8+8+8+8+8+9,190);
            line(176+8+8+8+8,215,158+8+8+8+8+8+9+9,190);
            line(176+8+8+8+8+8,215,158+8+8+8+8+8+9+9+9,190);
            line(176+8+8+8+8+8+8,215,158+8+8+8+8+8+9+9+9+9,190);
            line(176+8+8+8+8+8+8+8,215,158+8+8+8+8+8+9+9+9+9+9,190);
            line(176+8+8+8+8+8+8+8+8,215,158+8+8+8+8+8+9+9+9+9+9+9,190);
            line(176+8+8+8+8+8+8+8+8+8,215,158+8+8+8+8+8+9+9+9+9+9+9+9,190);
            setcolor(BLACK);
            rectangle(150,185,260,190);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(200,187,BLACK);


            setcolor(YELLOW);
            int f[12]= {145,185,265,185,255,160,160,160};
            setfillstyle(SOLID_FILL,YELLOW);
            fillpoly(4,f);
            setcolor(WHITE);
            rectangle(163,155,250,160);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(200,157,WHITE);

            setcolor(BLACK);
            rectangle(180,145,230,155);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(200,150,BLACK);

            setcolor(YELLOW);
            rectangle(180,120,185,155);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(182,130,YELLOW);

            setcolor(12);
            rectangle(180,100,185,120);
            setfillstyle(SOLID_FILL,12);
            floodfill(182,110,12);

            setcolor(WHITE);
            rectangle(180,80,185,100);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(182,90,WHITE);

            setcolor(12);
            rectangle(180,50,185,80);
            setfillstyle(SOLID_FILL,12);
            floodfill(182,65,12);



            /////////


            setcolor(YELLOW);
            rectangle(230,120,235,155);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(232,130,YELLOW);

            setcolor(12);
            rectangle(230,100,235,120);
            setfillstyle(SOLID_FILL,12);
            floodfill(232,110,12);

            setcolor(WHITE);
            rectangle(230,80,235,100);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(232,90,WHITE);

            setcolor(12);
            rectangle(230,50,235,80);
            setfillstyle(SOLID_FILL,12);
            floodfill(232,65,12);



            setcolor(YELLOW);
            rectangle(205,70,210,155);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(207,130,YELLOW);

            setcolor(12);
            rectangle(180,120,235,125);
            setfillstyle(SOLID_FILL,12);
            floodfill(200,122,12);

            circle(210,85,5);
            setfillstyle(SOLID_FILL,12);
            floodfill(210,85,12);
            setcolor(YELLOW);
            line(205,70,215,85);
            setcolor(14);
            rectangle(187,130,200,145);
            rectangle(215,130,228,145);



            /////



            //setcolor(WHITE);
            // rectangle(120,675,150,720);


            //MIDDLE Tower
            setcolor(15);
            rectangle(452,300,550,600);
            setfillstyle(SOLID_FILL,15);
            floodfill(501,450,15);



            setcolor(15);
            rectangle(990,300,1088,600);
            setfillstyle(SOLID_FILL,15);
            floodfill(1039,450,15);
            setcolor(1);
            rectangle(465,300,515,600);
            setfillstyle(SOLID_FILL,1);
            floodfill(490,450,1);
            rectangle(1025,300,1075,600);
            setfillstyle(SOLID_FILL,1);
            floodfill(1050,450,1);
            setcolor(WHITE);
            rectangle(488,300,492,600);
            setfillstyle(SOLID_FILL,15);
            floodfill(491.5,450,15);
            rectangle(1048,300,1052,600);
            setfillstyle(SOLID_FILL,15);
            floodfill(1050,450,15);
            setcolor(WHITE);
            rectangle(465,315,515,318);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(467,317,WHITE);
            floodfill(513,317,WHITE);

            rectangle(1025,315,1075,318);
            floodfill(1026,317,WHITE);
            floodfill(1074,317,WHITE);

            rectangle(1025,330,1075,333);
            floodfill(1026,331,WHITE);
            floodfill(1074,331,WHITE);
            rectangle(1025,345,1075,348);
            floodfill(1026,346,WHITE);
            floodfill(1074,346,WHITE);

            rectangle(1025,360,1075,363);
            floodfill(1026,361,WHITE);
            floodfill(1074,361,WHITE);

            rectangle(1025,375,1075,378);
            floodfill(1026,376,WHITE);
            floodfill(1074,376,WHITE);

            rectangle(1025,390,1075,393);
            floodfill(1026,391,WHITE);
            floodfill(1074,391,WHITE);

            rectangle(1025,405,1075,408);
            floodfill(1026,406,WHITE);
            floodfill(1074,406,WHITE);

            rectangle(1025,420,1075,423);
            floodfill(1026,421,WHITE);
            floodfill(1074,421,WHITE);


            rectangle(1025,435,1075,438);
            floodfill(1026,436,WHITE);
            floodfill(1074,436,WHITE);

            rectangle(1025,450,1075,453);
            floodfill(1026,451,WHITE);
            floodfill(1074,451,WHITE);

            rectangle(1025,465,1075,468);
            floodfill(1026,466,WHITE);
            floodfill(1074,466,WHITE);

            rectangle(1025,480,1075,483);
            floodfill(1026,481,WHITE);
            floodfill(1074,481,WHITE);

            rectangle(1025,495,1075,498);
            floodfill(1026,496,WHITE);
            floodfill(1074,496,WHITE);

            rectangle(1025,510,1075,513);
            floodfill(1026,511,WHITE);
            floodfill(1074,511,WHITE);

            rectangle(1025,525,1075,528);
            floodfill(1026,526,WHITE);
            floodfill(1074,526,WHITE);



            rectangle(1025,540,1075,543);
            floodfill(1026,541,WHITE);
            floodfill(1074,541,WHITE);

            rectangle(1025,555,1075,558);
            floodfill(1026,556,WHITE);
            floodfill(1074,556,WHITE);

            rectangle(1025,570,1075,573);
            floodfill(1026,571,WHITE);
            floodfill(1074,571,WHITE);

            rectangle(1025,585,1075,588);
            floodfill(1026,586,WHITE);
            floodfill(1074,586,WHITE);

            rectangle(1025,597,1075,600);
            floodfill(1026,598,WHITE);
            floodfill(1074,598,WHITE);

            rectangle(465,330,515,333);
            floodfill(467,331,WHITE);
            floodfill(513,331,WHITE);
            rectangle(465,345,515,348);
            floodfill(467,346,WHITE);
            floodfill(513,346,WHITE);
            rectangle(465,360,515,363);
            floodfill(467,361,WHITE);
            floodfill(513,361,WHITE);
            rectangle(465,375,515,378);
            floodfill(467,376,WHITE);
            floodfill(513,376,WHITE);
            rectangle(465,390,515,393);
            floodfill(467,391,WHITE);
            floodfill(513,391,WHITE);
            rectangle(465,405,515,408);
            floodfill(467,406,WHITE);
            floodfill(513,406,WHITE);
            rectangle(465,420,515,423);
            floodfill(467,421,WHITE);
            floodfill(513,421,WHITE);
            rectangle(465,435,515,438);
            floodfill(467,436,WHITE);
            floodfill(513,436,WHITE);
            rectangle(465,450,515,453);
            floodfill(467,451,WHITE);
            floodfill(513,451,WHITE);
            rectangle(465,465,515,468);
            floodfill(467,466,WHITE);
            floodfill(513,466,WHITE);
            rectangle(465,480,515,483);
            floodfill(467,481,WHITE);
            floodfill(513,481,WHITE);
            rectangle(465,495,515,498);
            floodfill(467,496,WHITE);
            floodfill(513,496,WHITE);
            rectangle(465,510,515,513);
            floodfill(467,511,WHITE);
            floodfill(513,511,WHITE);
            rectangle(465,525,515,528);
            floodfill(467,526,WHITE);
            floodfill(513,526,WHITE);
            rectangle(465,540,515,543);
            floodfill(467,541,WHITE);
            floodfill(513,541,WHITE);
            rectangle(465,555,515,558);
            floodfill(467,556,WHITE);
            floodfill(513,556,WHITE);
            rectangle(465,570,515,573);
            floodfill(467,571,WHITE);
            floodfill(513,571,WHITE);
            rectangle(465,585,515,588);
            floodfill(467,586,WHITE);
            floodfill(513,586,WHITE);
            rectangle(465,597,515,600);
            floodfill(467,598,WHITE);
            floodfill(513,598,WHITE);
            setcolor(WHITE);
            rectangle(550,350,990,400);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(551,360,WHITE);
            setcolor(1);
            rectangle(550,375,990,376);
            setfillstyle(SOLID_FILL,1);
            floodfill(770,375.5,1);

            setcolor(1);
            rectangle(550,350,990,373);
            rectangle(550,376,990,400);
            rectangle(550,376,650,400);
            setcolor(1);
            rectangle(890,376,990,400);
            setfillstyle(SOLID_FILL,1);
            floodfill(850,380,1);
            setcolor(1);
            rectangle(570,400,970,600);
            setfillstyle(INTERLEAVE_FILL,1);
            floodfill(770,500,1);
            setcolor(WHITE);
            rectangle(570,400,970,600);

            rectangle(570,440,970,442);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(770,441,WHITE);

            rectangle(570,480,970,482);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(770,481,WHITE);

            rectangle(570,520,970,522);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(770,521,WHITE);


            rectangle(570,560,970,562);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(770,561,WHITE);



            rectangle(570,598,970,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(770,599,WHITE);
            //TOWER LIFT
            setcolor(YELLOW);

            if(i>0&&i<1750)
            {
                circle(ss+91,pp+125+((i+100)/8),25);
                circle(ss+650,pp+125+((i+100)/8),25);
                circle(ss+650,pp+125+((i+100)/8),23);
                circle(ss+91,pp+125+((i+100)/8),23);
                circle(ss+650,pp+125+((i+100)/8),22);
                circle(ss+91,pp+125+((i+100)/8),22);
                goto start;
            }
            else

            {
start:
                circle(ss+650,575-((i+100)/8),26);
                circle(ss+650,575-((i+100)/8),23);
                circle(ss+91,575-((i+100)/8),26);
                circle(ss+91,575-((i+100)/8),23);
                circle(ss+91,575-((i+100)/8),22);
                circle(ss+650,575-((i+100)/8),22);
            }


            setcolor(WHITE);

            rectangle(570,400,572,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(571,500,WHITE);
            floodfill(571,540,WHITE);
            floodfill(571,580,WHITE);
            floodfill(571,600,WHITE);
            floodfill(571,460,WHITE);
            floodfill(571,420,WHITE);

            rectangle(610,400,612,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(611,500,WHITE);
            floodfill(611,540,WHITE);
            floodfill(611,580,WHITE);
            floodfill(611,600,WHITE);
            floodfill(611,460,WHITE);
            floodfill(611,420,WHITE);

            rectangle(650,400,652,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(651,500,WHITE);
            floodfill(651,540,WHITE);
            floodfill(651,580,WHITE);
            floodfill(651,600,WHITE);
            floodfill(651,460,WHITE);
            floodfill(651,420,WHITE);

            rectangle(690,400,692,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(691,500,WHITE);
            floodfill(691,540,WHITE);
            floodfill(691,580,WHITE);
            floodfill(691,600,WHITE);
            floodfill(691,460,WHITE);
            floodfill(691,420,WHITE);


            rectangle(730,400,732,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(731,500,WHITE);
            floodfill(731,540,WHITE);
            floodfill(731,580,WHITE);
            floodfill(731,600,WHITE);
            floodfill(731,460,WHITE);
            floodfill(731,420,WHITE);

            rectangle(770,400,772,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(771,500,WHITE);
            floodfill(771,540,WHITE);
            floodfill(771,580,WHITE);
            floodfill(771,600,WHITE);
            floodfill(771,460,WHITE);
            floodfill(771,420,WHITE);

            rectangle(810,400,812,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(811,500,WHITE);
            floodfill(811,540,WHITE);
            floodfill(811,580,WHITE);
            floodfill(811,600,WHITE);
            floodfill(811,460,WHITE);
            floodfill(811,420,WHITE);

            rectangle(850,400,852,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(851,500,WHITE);
            floodfill(851,540,WHITE);
            floodfill(851,580,WHITE);
            floodfill(851,600,WHITE);
            floodfill(851,460,WHITE);
            floodfill(851,420,WHITE);

            rectangle(890,400,892,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(891,500,WHITE);
            floodfill(891,540,WHITE);
            floodfill(891,580,WHITE);
            floodfill(891,600,WHITE);
            floodfill(891,460,WHITE);
            floodfill(891,420,WHITE);

            rectangle(930,400,932,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(931,500,WHITE);
            floodfill(931,540,WHITE);
            floodfill(931,580,WHITE);
            floodfill(931,600,WHITE);
            floodfill(931,460,WHITE);
            floodfill(931,420,WHITE);

            rectangle(970,400,972,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(971,500,WHITE);
            floodfill(971,540,WHITE);
            floodfill(971,580,WHITE);
            floodfill(971,600,WHITE);
            floodfill(971,460,WHITE);
            floodfill(971,420,WHITE);

            /*rectangle(1030,400,1032,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1031,500,WHITE);
            floodfill(1031,540,WHITE);
            floodfill(1031,580,WHITE);
            floodfill(1031,600,WHITE);
            floodfill(1031,460,WHITE);
            floodfill(1031,420,WHITE);

            /*rectangle(1070,400,1072,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1071,500,WHITE);
            floodfill(1071,540,WHITE);
            floodfill(1071,580,WHITE);
            floodfill(1071,600,WHITE);
            floodfill(1071,460,WHITE);
            floodfill(1071,420,WHITE);

            /*rectangle(1110,400,1112,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1111,500,WHITE);
            floodfill(1111,540,WHITE);
            floodfill(1111,580,WHITE);
            floodfill(1111,600,WHITE);
            floodfill(1111,460,WHITE);
            floodfill(1111,420,WHITE);

            /*rectangle(1148,400,1150,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(1149,500,WHITE);
            floodfill(1149,540,WHITE);
            floodfill(1149,580,WHITE);
            floodfill(1149,600,WHITE);
            floodfill(1149,460,WHITE);
            floodfill(1149,420,WHITE);*/

            setcolor(1);
            rectangle(710,490,830,600);
            setfillstyle(SLASH_FILL,1);
            floodfill(770,545,1);

            setcolor(WHITE);
            rectangle(710,490,715,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(712,545,WHITE);

            setcolor(WHITE);
            rectangle(827,490,832,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(829,545,WHITE);

            setcolor(WHITE);
            rectangle(710,488,832,493);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(720,490,WHITE);

            setcolor(WHITE);
            rectangle(768,490,773,600);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(770,494,WHITE);

            setcolor(7);
            rectangle(550,385,590,600);
            setfillstyle(LTBKSLASH_FILL,7);
            floodfill(560,494,7);

            setcolor(7);
            rectangle(950,385,990,600);
            setfillstyle(LTBKSLASH_FILL,7);
            floodfill(960,494,7);





            //Terminal Text
            setcolor(10);
            outtextxy(730,380,"TERMINAL-1");
            setcolor(12);
            outtextxy(630,355,"Hazrat Shahjalal International Airport,Dhaka");
            //floodfill(630,355,RED);

           //Light coddde
        /*setcolor(LIGHTCYAN);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        circle(810,454,8);
        floodfill(810,454,LIGHTCYAN);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        ellipse(810,494,0,180,10,5);
        line(800,494,820,494);
        floodfill(808,492,BLACK);
        bar(808,494,812,460);
        bar(804,460,816,464);*/

            //Plane Drawing

            //Plane Lighting
           setcolor(WHITE);
            circle(30+h,545+G,10);
            circle(50+h,547+G,5);
            circle(10+h,547+G,7);
            if(rr==8)
            {
                setfillstyle(SOLID_FILL,LIGHTRED);
                floodfill(31+h,546+G,WHITE);
                floodfill(50+h,547+G,WHITE);
                floodfill(10+h,547+G,WHITE);
                rr=rr/2;
            }
            else
            {

                setfillstyle(SOLID_FILL,MAGENTA);
                floodfill(31+h,546+G,WHITE);
                floodfill(50+h,547+G,WHITE);
                floodfill(10+h,547+G,WHITE);
                rr=rr*2;

            }



            setcolor(14);
            int a[10]= {h,550+G,h+50,550+G,h+120,630+G,h+20,630+G,h,550+G};
            setfillstyle(SOLID_FILL,6);
            fillpoly(5,a);

            setcolor(14);
            int b[10]= {h+120,630+G,h+200,670+G,h+30,670+G,h+20,630+G,h+120,630+G};
            setfillstyle(SOLID_FILL,YELLOW);
            fillpoly(5,b);

            setcolor(YELLOW);
            int c[16]= {h+200,670+G,h+380,670+G,h+580,690+G,h+380,710+G,h+200,710+G,h+39,710+G,h+30,670+G,h+200,670+G};
            setfillstyle(SOLID_FILL,YELLOW);
            fillpoly(8,c);

            line(h,680+G,h+30,680+G);
            line(h,680+G,h+2,710+G);
            line(h+2,710+G,h+130,745+G);
            line(h+130,745+G,h+390,745+G);
            line(h+390,745+G,h+390,700+G);
            setcolor(YELLOW);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(h+390,745+G,YELLOW);

            setcolor(YELLOW);
            rectangle(h+130,700+G,h+390,745+G);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(h+260,722+G,YELLOW);

            setcolor(YELLOW);
            int d[12]= {h+30,680+G,h,680+G,h+2,710+G,h+130,745+G,h+390,700+G,h+30,680+G};
            setfillstyle(SOLID_FILL,YELLOW);
            fillpoly(6,d);
            setcolor(YELLOW);
            line(h+390,745+G,h+470,740+G);
            line(h+470,740+G,h+550,720+G);
            line(h+550,720+G,h+580,700+G);
            line(h+580,700+G,h+585,695+G);
            line(h+585,695+G,h+585,690+G);
            line(h+585,690+G,h+555,685+G);
            line(h+555,685+G,h+540,675+G);
            line(h+540,675+G,h+520,673+G);
            line(h+520,673+G,h+500,670+G);
            line(h+500,670+G,h+480,669+G);
            line(h+480,670+G,h+380,668+G);
            line(h+380,668+G,h+390,745+G);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(h+580,690+G,YELLOW);
            floodfill(h+430,670+G,YELLOW);
            setcolor(6);
            rectangle(h+90,670+G,h+110,715+G);
            setfillstyle(SOLID_FILL,6);
            rectangle(h+160,695+G,h+170,710+G);
            setfillstyle(SOLID_FILL,6);
            floodfill(h+160+5,700+G,6);

            rectangle(h+185,695+G,h+195,710+G);
            setfillstyle(SOLID_FILL,6);
            floodfill(h+190,700+G,6);
            rectangle(h+205,695+G,215+h,710+G);
            floodfill(210+h,700+G,6);
            rectangle(225+h,695+G,215+h+20,710+G);
            floodfill(210+20+h,700+G,6);
            rectangle(225+20+h,695+G,215+20+20+h,710+G);
            floodfill(210+20+20+h,700+G,6);
            rectangle(225+20+20+h,695+G,215+20+20+20+h,710+G);
            floodfill(210+20+20+20+h,700+G,6);
            rectangle(225+20+20+20+h,695+G,215+20+20+20+20+h,710+G);
            floodfill(210+20+20+20+20+h,700+G,6);
            rectangle(225+20+20+20+h-5,695-10+G,215+20+20+20+20+h+5,710+10+G);
            //floodfill(210+20+20+20+20+20+20,700,6);
            rectangle(225+20+20+20+20+h,695+G,215+20+20+20+20+20+h,710+G);
            floodfill(210+20+20+20+20+20+h,700+G,6);
            rectangle(225+20+20+20+20+20+h,695+G,215+20+20+20+20+20+20+h,710+G);
            floodfill(210+20+20+20+20+20+20+h,700+G,6);
            rectangle(225+20+20+20+20+20+20+h,695+G,215+20+20+20+20+20+20+20+h,710+G);
            floodfill(210+20+20+20+20+20+20+20+h,700+G,6);
            rectangle(225+20+20+20+20+20+20+20+h,695+G,215+20+20+20+20+20+20+20+20+h,710+G);
            floodfill(210+20+20+20+20+20+20+20+20+h,700+G,6);
            rectangle(225+20+20+20+20+20+20+20+20+h+40,695+G,215+20+20+20+20+20+20+20+20+20+h+40,710+G);
            floodfill(210+20+20+20+20+20+20+20+20+20+h+40,700+G,6);
            //floodfill(210+20+20+20+20+20+20+20+20+20+20,700,6);
            rectangle(225+20+20+20+20+20+20+20+20+20+40+h,695+G,215+20+20+20+20+20+20+20+20+20+20+40+h,710+G);
            floodfill(210+20+20+20+20+20+20+20+20+20+20+40+h,700+G,6);

            rectangle(225+20+20+20+20+20+20+20+20+20+40+20+h,695+G,215+20+20+20+20+20+20+20+20+20+20+40+20+h,710+G);

            floodfill(210+20+20+20+20+20+20+20+20+20+20+40+20+h,700+G,6);
            setcolor(6);
            rectangle(225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5,695-10-5+G,215+20+20+20+20+20+20+h+20+20+20+40+20+20+20+5+6,710+10-2+G);
            setcolor(8);
            circle(225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10+1,695-10-5+15+G,7);
            setfillstyle(SOLID_FILL,8);
            floodfill(225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+1,695-10-5+15+G,8);
            line(225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+3,695-10-5+15+12+G,215+h+20+20+20+20+20+20+20+20+20+40+20+20+20+5+3,695-10-5+15+12+G);



            //
            setcolor(6);
            line(h+128,745+G,h+135,748+G);
            line(h+135,748+G,h+138,750+G);
            line(h+138,750+G,h+145,751+G);
            line(h+145,751+G,h+160,753+G);
            line(h+160,753+G,h+180,755+G);
            line(h+180,754+G,h+220,757+G);
            line(h+220,757+G,h+250,758+G);
            line(h+250,758+G,h+360,758+G);
            line(h+360,758+G,h+380,757+G);
            line(h+380,757+G,h+400,755+G);
            line(h+400,755+G,h+430,753+G);
            line(h+430,753+G,h+460,750+G);
            line(h+460,750+G,h+540,725+G);
            line(h+540,725+G,h+430,744+G);

            line(h+430,745+G,h+400,744+G);
            line(h+400,744+G,h+128,744+G);
            setfillstyle(SOLID_FILL,6);
            floodfill(h+432,748+G,6);


            //Tire of Biman
            setcolor(BLACK);
            circle(225+h+20+20+20+20+20+20+20+20+40+20+20+20-5+5+10-13,695-10-5+15+65+7+G,9);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(225+h+20+20+20+20+20+20+20+20+40+20+20+20-5+5+10-13,695-10-5+15+65+7+G,BLACK);

            setcolor(WHITE);
            circle(225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10-13,695-10-5+15+65+7+G,5);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10-13,695-10-5+15+65+7+G,WHITE);


            setcolor(1);
            rectangle(225+20+20+20+20+20+h+20+20+20+40+20+20+20-5+5+10-15,695-10-5+15+65+0+G,225+h+20+20+20+20+20+20+20+20+40+20+20+20-5+5+10-12,695-10-5+15+65-20+G);
            setfillstyle(SOLID_FILL,1);
            floodfill(225+20+20+20+20+20+20+20+h+20+40+20+20+20-5+5+10-13,695-10-5+15+65-1+G,1);

            line(225+20+20+20+20+20+20+h+20+20+40+20+20+20-5+5+10-13-9,695-10-5+15+65+15-3+G,225+h+20+20+20+20+20+20+20+20+40+20+20+20-5+5+10-2,695-10-5+15+65+15-35+G);

            setcolor(BLACK);
            circle(225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10+5-280,695-10-5+15+65+15+G,9);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10+5-280,695-10-5+15+65+15+G,BLACK);

            setcolor(WHITE);
            circle(225+20+20+20+20+20+20+20+20+h+40+20+20+20-5+5+10+5-280,695-10-5+15+65+15+G,5);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(225+20+20+20+20+20+20+20+h+20+40+20+20+20-5+5+10+5-280,695-10-5+15+65+15+G,WHITE);

            setcolor(BLACK);
            circle(225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+5-260,695-10-5+15+65+15+G,9);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(225+20+20+20+20+20+20+20+h+20+40+20+20+20-5+5+10+5-260,695-10-5+15+65+15+G,BLACK);

            setcolor(WHITE);
            circle(225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+5-260,695-10-5+15+65+15+G,5);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10+5-260,695-10-5+15+65+15+G,WHITE);

            setcolor(BLACK);
            circle(225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+5-300,695-10-5+15+65+15+G,9);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10+5-300,695-10-5+15+65+15+G,BLACK);

            setcolor(WHITE);
            circle(225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10+5-300,695-10-5+15+65+15+G,5);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10+5-300,695-10-5+15+65+15+G,WHITE);


            setcolor(1);
            rectangle(225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+5-260,695-10-5+15+65+15-8+G,225+20+20+20+20+h+20+20+20+20+40+20+20+20-5+5+10+5-300,695-10-5+15+65+15-10+G);
            setfillstyle(SOLID_FILL,1);
            floodfill(225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10+5-280,695-10-5+15+65+15-8-1+G,1);


            setcolor(1);
            rectangle(225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+5-278,695-10-5+15+65+15-6+G,225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+5-282,695-10-5+15+65+15-20+G);
            setfillstyle(SOLID_FILL,1);
            floodfill(225+20+20+20+20+20+20+20+h+20+40+20+20+20-5+5+10+5-280,695-10-5+15+65+15-11+G,1);


            line(225+20+20+20+20+20+20+20+20+h+40+20+20+20-5+5+10+5-262,695-10-5+15+65+15-8+G,225+20+20+20+20+20+20+20+h+20+40+20+20+20-5+5+10+5-275,695-10-5+15+65+15-20+G);
            line(225+20+20+20+20+20+20+20+20+h+40+20+20+20-5+5+10+5-298,695-10-5+15+65+15-8+G,225+20+20+20+20+20+20+20+h+20+40+20+20+20-5+5+10+5-285,695-10-5+15+65+15-20+G);
            line(225+20+20+20+20+20+20+20+20+h+40+20+20+20-5+5+10+5-278,695-10-5+15+65+15-6+G,225+20+20+20+20+20+20+20+h+20+40+20+20+20-5+5+10+5-278-15,695-10-5+15+65+15-20+G);
            line(225+20+20+20+20+20+20+20+20+h+40+20+20+20-5+5+10+5-282,695-10-5+15+65+15-6+G,225+20+20+20+20+20+20+20+h+20+40+20+20+20-5+5+10+5-278+15,695-10-5+15+65+15-20+G);


            //Samner Dana of biman
            setcolor(WHITE);
            rectangle(225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10+5-260,695-10-5+15+65+15-10+G,225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+5-200,695-10-5+15+65+15-40+G);
            line(225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+5-260,695-10-5+15+65+15-40+G,225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+5-200,695-10-5+15+65+15-10+G);

            setfillstyle(SOLID_FILL,9);
            floodfill(h+270,752+G,WHITE);
            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(h+270,748+G,WHITE);
            setcolor(8);
            rectangle(225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+5-199,695-10-5+15+65+15-11+G,225+20+20+20+20+h+20+20+20+20+40+20+20+20-5+5+10+5-195,695-10-5+15+65+15-39+G);
            setfillstyle(SOLID_FILL,8);
            floodfill(h+302.5,760+G,8);
            floodfill(h+302.5,740+G,8);
            setcolor(BLACK);
            rectangle(225+20+20+h+20+20+20+20+20+20+40+20+20+20-5+5+10+5-260,695-10-5+15+65+15-12+G,225+20+20+20+20+20+20+20+h+20+40+20+20+20-5+5+10+5-267,695-10-5+15+65+15-36+G);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+5-263,695-10-5+15+65+15-32+G,BLACK);


            setcolor(BLACK);
            rectangle(225+h+20+20+20+20+20+20+20+20+40+20+20+20-5+5+10+5-267,695-10-5+15+65+15-14+G,225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10+5-274,695-10-5+15+65+15-34+G);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(225+20+20+20+20+20+h+20+20+20+40+20+20+20-5+5+10+5-272,695-10-5+15+65+15-31+G,BLACK);

            setcolor(BLACK);
            rectangle(225+20+h+20+20+20+20+20+20+20+40+20+20+20-5+5+10+5-274,695-10-5+15+65+15-16+G,225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10+5-283,695-10-5+15+65+15-31+G);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(225+20+20+20+20+20+20+20+20+20+40+20+h+20-5+5+10+5-281,695-10-5+15+65+15-29+G,BLACK);


            setcolor(BLACK);
            rectangle(225+20+20+20+20+20+20+20+h+20+40+20+20+20-5+5+10+5-283,695-10-5+15+65+15-18+G,225+20+20+20+20+20+20+20+20+h+40+20+20+20-5+5+10+5-292,695-10-5+15+65+15-27+G);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(225+20+20+20+20+20+20+20+20+20+40+h+20+20-5+5+10+5-290,695-10-5+15+65+15-25+G,BLACK);

            setcolor(9);
            int hh[10]= {h+255,735+G,h+180,720+G,h+185,726+G,h+235,739+G,h+255,735+G};
            setfillstyle(SOLID_FILL,9);
            fillpoly(5,hh);






            setcolor(1);
            int j[10]= {h+235,739+G,h+185,726+G,h+145,726+G,h+185,740+G,h+235,739+G};
            setfillstyle(SOLID_FILL,1);
            fillpoly(5,j);

            setcolor(WHITE);
            int k[10]= {h+210,747+G,h+185,747+G,h+170,730+G,h+185,740+G,h+235,739+G};
            setfillstyle(SOLID_FILL,WHITE);
            fillpoly(5,k);

            setcolor(BLACK);
            int l[10]= {h+180,720+G,h+185,725+G,h+145,726+G,h+150,726+G,h+180,720+G};
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(5,l);

            //Pisoner Dana of Biman
            setcolor(1);
            int m[10]= {h+15,695+G,h-15,670+G,h,670+G,h+70,695+G,h+15,695+G};
            setfillstyle(SOLID_FILL,1);
            fillpoly(5,m);

            setcolor(9);
            int n[10]= {h+70,695+G,h+83,693+G,h+5,665+G,h,669+G,h+70,695+G};
            setfillstyle(SOLID_FILL,9);
            fillpoly(5,n);

            setcolor(WHITE);
            int o[10]= {h+5,665+G,h-10,668+G,h-18,668+G,h,669+G,h+20,665+G};
            setfillstyle(SOLID_FILL,WHITE);
            fillpoly(5,o);

            //Looking glass of plane
            setcolor(WHITE);
            int p[10]= {h+540,695+G,h+555,692+G,h+550,684+G,h+535,684+G,h+540,695+G};
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(5,p);

            setcolor(WHITE);
            int q[10]= {h+555,692+G,h+572,687+G,h+565,682+G,h+550,684+G,h+555,692+G};
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(5,q);

            // TX Airlines
            //setcolor(GREEN);
            //outtextxy(h+30,640+G,"TX AIRLINES");

            //2nd time plane


            setcolor(LIGHTRED);

            //cleardevice();





            //circle(ss+650,575-(i/8),23);
            //delay(1000);
//pp+125//



            //circle(ss+30,pp+20,30);
            if(G+800>600)
                {
                    //setbkcolor(WHITE);
                outtextxy(270,410,"On the Runway");
                outtextxy(1200,410,"On the Runway");
                }
                else{
                        outtextxy(270,410,"On the Air.....");
                        outtextxy(1200,410,"On the Air.....");

                }


            if(GetAsyncKeyState(VK_RIGHT))
            {
                if(G+800>600)
                {
                outtextxy(270,410,"On the Runway");
                outtextxy(1200,410,"On the Runway");
                }
                else{
                        outtextxy(270,410,"On the Air.....");
                        outtextxy(1200,410,"On the Air.....");

                }



                h=h+1;




            }
            else if(GetAsyncKeyState(VK_DOWN))
            {
                outtextxy(270,410," Landing from Air.....");
                outtextxy(1200,410,"Landing from air.....");
                h=h+1;
                G=G+1;


            }
            else if(GetAsyncKeyState(VK_LEFT))
            {
                h-=1;
                if(G+800>600)
                {
                outtextxy(270,410,"On the Runway");
                outtextxy(1200,410,"On the Runway");
                }
                else{
                        outtextxy(270,410,"On the Air.....");
                        outtextxy(1200,410,"On the Air.....");

                }
            }
            else if(GetAsyncKeyState(VK_UP))
            {
                outtextxy(270,410,"Lifting in air.....");
                outtextxy(1200,410,"Lifting in air.....");
                h=h+1;
                G=G-1;




            }
            else if(GetAsyncKeyState(0x4C))
            {


            }
            if(i>1200&&i<=1300)
            {
                setcolor(LIGHTRED);
                outtextxy(188,300,"Night");
                outtextxy(181,320,"coming");
            }

            else if(i>1300)
            {
                setcolor(LIGHTRED);
                outtextxy(189,300,"Night");
                outtextxy(191,320,"8:30");
            }
            else
            {
                setcolor(LIGHTRED);
                outtextxy(191,307,"Day");
                //outtextxy(191,320,"8:30");
            }






            page=1-page;


        }
    }

    getch();

    return 0;
}
