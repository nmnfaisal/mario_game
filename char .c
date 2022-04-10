#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<winbgim.h>
#include <sstream>

main()
{
	int gd=DETECT,gm;

	initgraph(&gd,&gm,"C:\\TC\\BGI");


		 // setbkcolor(18);
	       // cleardevice();

		line (0,380,639,380);

		int x=getmaxx()/2;
		int y=getmaxy()/2;



		int i;

	      //	for(i=0;i<50;i++)
	      //	{
	       //	cleardevice();
	       //	delay(100);


		line (x,y,x+50,y);
		line (x,y+10,x+50,y+10);
		line (x,y,x,y+9);
		line (x+50,y,x+50,y+9);

		line (x,y,x+40,y);
		line (x,y+10,x+40,y+10);
		line (x,y,x,y+9);
		line (x+40,y,x+40,y+9);


		line (x,y,x+30,y);
		line (x,y+10,x+30,y+10);
		line (x,y,x,y+9);
		line (x+30,y,x+30,y+9);


		line (x,y,x+20,y);
		line (x,y+10,x+20,y+10);
		line (x,y,x,y+9);
		line (x+20,y,x+20,y+9);


		line (x,y,x+10,y);
		line (x,y+10,x+10,y+10);
		line (x,y,x,y+9);
		line (x+10,y,x+10,y+9);



	     // }

		//SECOND BRICK
		x=x-100;
		y=y+50;


		line (x,y,x+50,y);
		line (x,y+10,x+50,y+10);
		line (x,y,x,y+9);
		line (x+50,y,x+50,y+9);

		line (x,y,x+40,y);
		line (x,y+10,x+40,y+10);
		line (x,y,x,y+9);
		line (x+40,y,x+40,y+9);


		line (x,y,x+30,y);
		line (x,y+10,x+30,y+10);
		line (x,y,x,y+9);
		line (x+30,y,x+30,y+9);


		line (x,y,x+20,y);
		line (x,y+10,x+20,y+10);
		line (x,y,x,y+9);
		line (x+20,y,x+20,y+9);

		line (x,y,x+10,y);
		line (x,y+10,x+10,y+10);
		line (x,y,x,y+9);
		line (x+10,y,x+10,y+9);


		//THIRD BRICK


		x=x+200;
		y=y;

		line (x,y,x+50,y);
		line (x,y+10,x+50,y+10);
		line (x,y,x,y+9);
		line (x+50,y,x+50,y+9);

		line (x,y,x+40,y);
		line (x,y+10,x+40,y+10);
		line (x,y,x,y+9);
		line (x+40,y,x+40,y+9);


		line (x,y,x+30,y);
		line (x,y+10,x+30,y+10);
		line (x,y,x,y+9);
		line (x+30,y,x+30,y+9);


		line (x,y,x+20,y);
		line (x,y+10,x+20,y+10);
		line (x,y,x,y+9);
		line (x+20,y,x+20,y+9);

		line (x,y,x+10,y);
		line (x,y+10,x+10,y+10);
		line (x,y,x,y+9);
		line (x+10,y,x+10,y+9);

	      //CLOUD LEFT MOST

		arc(x-360,y-185,270,90,15); //right part
		arc(x-375,y-200,0,180,15);  //upper part
		arc(x-390,y-185,90,270,15); //left part

	       //CENTER CLOUD

		arc(x-109,y-180,270,90,15);  //right part
		arc(x-125,y-195,0,180,15);   //upper part
		arc(x-140,y-180,90,270,15);  //left part


	      //CLOUD RIGHT MOST
		arc(x+160,y-190,270,90,15);  //right part
		arc(x+145,y-205,0,180,15);   //upper part
		arc(x+130,y-190,90,270,15);  //left part



	      // enemy right air check
		arc(x,y-150,270,90,10);
		arc(x+4,y-165,0,180,10);
		arc(x+9,y-150,90,270,10);

	      // enemy left air check
		arc(x-255,y-150,270,90,10);
		arc(x-250,y-165,0,180,10);
		arc(x-245,y-150,90,270,10);


		//ground enemy one

		 arc(getmaxx()/2,getmaxy()/2+128,90,215,16);
		 arc(getmaxx()/2,getmaxy()/2+128,-25,90,16);
		 circle(getmaxx()/2-5,getmaxy()/2+121,2);
		 circle(getmaxx()/2+6,getmaxy()/2+121,2);


		 //ground enemy two

		 arc(getmaxx()/2-150,getmaxy()/2+128,90,215,16);
		 arc(getmaxx()/2-150,getmaxy()/2+128,-25,90,16);
		 circle(getmaxx()/2-145,getmaxy()/2+121,2);
		 circle(getmaxx()/2-155,getmaxy()/2+121,2);

		 //trunk

		 line(540,380,540,310);
		 line(590,380,590,310);
		 line(590,310,540,310);
		  //arc(565,310,180,360,20);


	getch();

	closegraph();

      }
