#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<mouse.h>
#include<graphics.h>
int gd,gm,centrex,centrey,button,x,y;
int a[3][3]={3,3,3,3,3,3,3,3,3};

void drawcross(int x,int y)
{
int centrex;
 int centrey;
centrex=x;
centrey=y;
line (centrex-5,centrey+5,centrex+5,centrey-5);
line (centrex+5,centrey+5,centrex-5,centrey-5);
}


void drawcircle(int x,int y)
{
  int centrex;
 int centrey;
centrex = x;
 centrey = y;
fillellipse (centrex,centrey, 10,10);
}






void box()
{
while(!kbhit())
{getmousepos(&button,&x,&y);
if(((button&1)==1)&&(x>=245&&x<=295)&&(y>=165&&y<=215))
{
a[0][0]=1;
hidemouseptr();
drawcross(270,190);
showmouseptr();
checkforwin();
}
else if(((button&2)==2)&&(x>=245&&x<=295)&&(y>=165&&y<=215))
{
a[0][0]=2;
hidemouseptr();
drawcircle(270,190);
showmouseptr();
checkforwin();
}
else{
}

 if(((button&1)==1)&&(x>=245&&x<=295)&&(y>=215&&y<=265))
{
a[1][0]=1;
hidemouseptr();
drawcross(270,240);
showmouseptr();
checkforwin();
}
else if(((button&2)==2)&&(x>=245&&x<=295)&&(y>=215&&y<=265))
{
a[1][0]=2;
hidemouseptr();
drawcircle(270,240);
showmouseptr();
checkforwin();
}


else{}

if(((button&1)==1)&&(x>=245&&x<=295)&&(y>=265&&y<=315))
{
a[2][0]=1;
hidemouseptr();
drawcross(270,290);
showmouseptr();
checkforwin();
}
else if(((button&2)==2)&&(x>=245&&x<=295)&&(y>=265&&y<=315))
{
a[2][0]=2;
hidemouseptr();
drawcircle(270,290);
showmouseptr();
checkforwin();
}


else {}

if(((button&1)==1)&&(x>=295&&x<=345)&&(y>=165&&y<=215))
{
a[0][1]=1;
hidemouseptr();
drawcross(320,190);
showmouseptr();
checkforwin();
}
else if(((button&2)==2)&&(x>=295&&x<=345)&&(y>=165&&y<=215))
{
a[0][1]=2;
hidemouseptr();
drawcircle(320,190);
showmouseptr();
checkforwin();
}
else{}

 if(((button&1)==1)&&(x>=295&&x<=345)&&(y>=215&&y<=265))
{
a[1][1]=1;
hidemouseptr();
drawcross(320,240);
showmouseptr();
checkforwin();
}
else if(((button&2)==2)&&(x>=295&&x<=345)&&(y>=215&&y<=265))
{
a[1][1]=2;
hidemouseptr();
drawcircle(320,240);
showmouseptr();
checkforwin();
}

else{}


 if(((button&1)==1)&&(x>=295&&x<=345)&&(y>=265&&y<=315))
{
a[2][1]=1;
hidemouseptr();
drawcross(320,290);
showmouseptr();
checkforwin();
}
else if(((button&2)==2)&&(x>=295&&x<=345)&&(y>=265&&y<=315))
{
a[2][1]=2;
hidemouseptr();
drawcircle(320,290);
showmouseptr();
checkforwin();
}

else{}

if(((button&1)==1)&&(x>=345&&x<=395)&&(y>=165&&y<=215))
{
a[0][2]=1;
hidemouseptr();
drawcross(370,190);
showmouseptr();
checkforwin();
}

else if(((button&2)==2)&&(x>=345&&x<=395)&&(y>=165&&y<=215))
{
a[0][2]=2;
hidemouseptr();
drawcircle(370,190);
showmouseptr();
checkforwin();
}

else{}


if(((button&1)==1)&&(x>=345&&x<=395)&&(y>=215&&y<=265))
{
a[1][2]=1;
hidemouseptr();
drawcross(370,240);
showmouseptr();
checkforwin();
}

else if(((button&2)==2)&&(x>=345&&x<=395)&&(y>=215&&y<=265))
{
a[1][2]=2;
hidemouseptr();
drawcircle(370,240);
showmouseptr();
checkforwin();
}
else{}

 if(((button&1)==1)&&(x>=345&&x<=395)&&(y>=265&&y<=315))
{
a[2][2]=1;
hidemouseptr();
drawcross(370,290);
showmouseptr();
checkforwin();
}

else if(((button&2)==2)&&(x>=345&&x<=395)&&(y>=265&&y<=315))
{
a[2][2]=2;
hidemouseptr();
drawcircle(370,290);
showmouseptr();
checkforwin();
}

else {}




}
}


checkforwin(){

if((a[0][0]==1&&a[0][1]==1&&a[0][2]==1)||(a[0][0]==1&&a[1][0]==1&&a[2][0]==1)||(a[0][1]==1&&a[1][1]==1&&a[2][1]==1)||(a[0][2]==1&&a[1][2]==1&&a[2][2]==1)||(a[0][0]==1&&a[1][1]==1&&a[2][2]==1)||a[0][2]==1&&(a[1][1]==1&&a[2][0]==1)||(a[1][0]==1&&a[1][1]==1&&a[1][2]==1)||(a[2][0]==1&&a[2][1]==1&&a[2][2]==1))
outtextxy(150,150,"user 1 wins");


else if((a[0][0]==2&&a[0][1]==2&&a[0][2]==2)||(a[0][0]==2&&a[1][0]==2&&a[2][0]==2)||(a[0][1]==2&&a[1][1]==2&&a[2][1]==2)||(a[0][2]==2&&a[1][2]==2&&a[2][2]==2)||(a[0][0]==2&&a[1][1]==2&&a[2][2]==2)||a[0][2]==2&&(a[1][1]==2&&a[2][0]==2)||(a[1][0]==2&&a[1][1]==2&&a[1][2]==2)||(a[2][0]==2&&a[2][1]==2&&a[2][2]==2))
outtextxy(150,150,"user 2 wins");


else if((a[0][0]!=3&&a[1][0]!=3&&a[2][0]!=3&&a[0][1]!=3&&a[1][1]!=3&&a[2][1]!=3&&a[0][2]!=3&&a[1][2]!=3&&a[2][2]!=3)&&(a[0][0]!=a[0][1]!=a[0][2])&&(a[1][0]!=a[1][1]!=a[1][2])&&(a[2][0]!=a[2][1]!=a[2][2])&&(a[0][0]!=a[1][0]!=a[2][0])&&(a[0][1]!=a[1][1]!=a[2][1])&&(a[0][2]!=a[1][2]!=a[2][2])&&(a[0][0]!=a[1][1]!=a[2][2])&&(a[0][2]!=a[1][1]!=a[2][0]))
outtextxy(150,150,"game draw");

else{}
}


int main()
{

detectgraph(&gd,&gm);
initgraph(&gd,&gm,"");
initmouse(); //initialising mouse in the program
showmouseptr();  //showing the mouse pointer



setcolor(15);
rectangle(240,145,365,160);
outtextxy(440,280,"By:");
outtextxy(450,290,"Santhosh Raj(ECM:2/4)");
outtextxy(450,300,"Nawaz(ECM:1/4);");
outtextxy(450,310,"Srinivas(ECM:2/4)");

outtextxy(250,150,"TICTACTOE");


setbkcolor(0);
while(!kbhit())
{
getmousepos(&button,&x,&y);
if((button&1==1)&&(x>240&&x<=365)&&(y>=145&&y<160))
{
setcolor(0);
rectangle(240,145,365,160);
outtextxy(440,280,"By:");
outtextxy(450,290,"Santhosh Raj(ECM:2/4)");
outtextxy(450,300,"Nawaz(EEE:1/4)");
outtextxy(450,310,"Srinivas(ECM:2/4)");
//outtextxy(450,320,"Nishikanth(ECM:2/4)");
outtextxy(250,150,"TICTACTOE");
setcolor(14);

rectangle(245,165,395,315);
line(295,165,295,315);
line(345,165,345,315);
line(245,215,395,215);
line(245,265,395,265);
outtextxy(70,10,"TIC TAC TOE GAME");
outtextxy(130,60,"user1:left click the mouse");
outtextxy(130,80,"user2:right click the mouse");


box();
getch();
return 0;
}
}
}


