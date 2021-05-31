# include<iostream.h>
# include<stdio.h>
# include<conio.h>
# include<dos.h>
# include<process.h>
# include<string.h>
# include<graphics.h>

int a=1;

struct morse
{
  char name[20];
  char task[30];
}m1;

void convert(char m[10]);

int main()
{
  clrscr();
  int gdriver=DETECT, gmode=DETECT, midx, midy;
  initgraph(&gdriver,&gmode,"c://turboc3//bgi");
  settextstyle(3, HORIZ_DIR,2);
  midx=(getmaxx()*7/16)-160;
  midy=getmaxy()/2;
  outtextxy(midx,midy," Welcome to the morse code program");
  midx=(getmaxx()*3/8)-50;
  midy=(getmaxy()/2)+30;
  outtextxy(midx,midy,"PRESS ANY KEY TO CONTINUE");
  getch();
  closegraph();
  clrscr();
  main:
  initgraph(&gdriver,&gmode,"c://turboc3/bgi");
  rectangle(0,5,635,475);
  settextstyle(2,HORIZ_DIR,0);
  midx=getmaxx()*3/8;
  midy=10;
  outtextxy(midx,midy,"Main Menu");
  cout<<endl;
  midx=getmaxx()/2*3/8;
  midy=(getmaxx()/2)-120;
  outtextxy(midx,midy,"1. Instructions");
  midx=getmaxx()/2*3/8;
  midy=(getmaxx()/2)-80;
  outtextxy(midx,midy,"2. Convert to morse code");
  midx=getmaxx()/2*3/8;
  midy=(getmaxx()/2)-50;
  outtextxy(midx,midy,"3. Record List");
  midx=getmaxx()/2*3/8;
  midy=(getmaxx()/2)-10;
  outtextxy(midx,midy,"4. Exit");
  cout<<endl;
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tEnter your choice";
  rectangle(0,5,635,475);
  cin>>n;
  rectangle(0,5,635,475);
  switch(n)
  {
      case 1:
      {
        closegraph();
        clrscr();
        initgraph(&gdriver,&gmode,"c://turboc3/bgi");
        rectangle(0,5,635,475);
        cout<<"\n\n\n Instructions"<<endl;
        cout<<"The user must follow the steps in order to use this program"<<endl;
        cout<<"Please not that a record will be made when you use this,"<<endl;
        cout<<"1. Enter a word/sentence"<<endl;
        cout<<"2. You will be played a sequence of sounds"<<endl;
        cout<<"This is the morse code representation."<<endl;
        cout<<"The small beep stands for a small dot and the long beep stands for a dash."<<endl;
        cout<<"The dots and dashes together form words/senteces."<<endl;
        cout<<"For Reference:"<<endl;
        cout<<"\n A = ._"<<" "<<"F = .._."<<" "<<"K = _._"<<"P = .__. "<<"U = .._"<<endl;
        cout<<"\n B = _..."<<" "<<"G = __."<<" "<<"L = _._"<<"Q = __._ "<<"V = ..._"<<endl;
        cout<<"\n C = _._."<<" "<<"H = ...."<<" "<<"M = __"<<"R = ._. "<<"W = .__ "<<"Z = __.. "<<endl;
        cout<<"\n D = __."<<" "<<"I = .."<<" "<<"N = _."<<"S = ... "<<"X = _..__ "<<endl;
        cout<<"\n E = ."<<" "<<"J = .___"<<" "<<"O = ___"<<"T = _ "<<"Y = _.__ "<<endl;
        rectangle(0,5,635,475);
        getch();
        closegraph();
        clrscr();
        goto main;
        break;
      }

      case 2:
      {
        closegraph();
        clrscr();
        initgraph(&gdriver,&gmode,"C://turboc3/bgi");
        rectangle(0,5,635,475);
        char morse[30];
        rectangle(0,5,635,475);
        cout<<"\t\n\tEnter a sentence: ";
        rectangle(0,5,635,475);
        cout<<" ";
        gets(morse);
        convert(morse);
        strcpy(morse,m1.task);
        closegraph();
        clrscr();
        goto main;
        break;
      }

      case 3:
      {
        closegraph();
        clrscr();
        initgraph(&gdriver,&gmode,"C://turboc3/bgi");
        rectangle(0,5,635,475);
        char p1[]={"1234"};
        char p[15];
        cout<<endl<<"\n\tEnter your name: ";
        rectangle(0,5,635,475);
        cout<<" ";
        cin>>m1.name;
        cout<<"\n\tEnter the message you would like to convert: ";
        rectangle(0,5,635,475);
        cout<<" ";
        gets(m1.task);
        cout<<"\n\tEnter the authentication code: "<<endl;
        rectangle(0,5,635,475);
        cout<<" ";
        gets(p);
        cout<<"\n\tAuthenticating..."<<endl;
        delay(1000);
        if(strcmp(p,p1)==0||strcmp(p,p2)==0||strcmp(p,p3)==0)
        {
          cout<<endl<<"\n\tAccess Granted"<<endl;
          cout<<endl<<"\n\t"<<endl;
          cout<<endl<<"\tName "<<"Task";
          cout<<endl<<"\t"<<m1.name<<" "<<m1.task;
          rectangle(0,5,635,475);
          getch();
          clrscr();
          goto main;
        }
        else
        {
          rectangle(0,5,635,475);
          cout<<"Wrong password"<<endl;
          rectangle(0,5,635,475);
          delay(2000);
          return 0;
        }
      }

      case 4:
      return 0;
      break;

      default:
      rectangle(0,5,635,475);
      break;
  }
}

void convert(char m[10])
{
  int c,a;
  for(int i=0;m[i]!='\0';i++)
  {
    rectangle(0,5,635,475);
    c=m[i];

    if(c=='A'||c=='a')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='B'||c=='b')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='C'||c=='c')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='D'||c=='d')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='E'||c=='e')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='F'||c=='f')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='G'||c=='g')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='H'||c=='h')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='I'||c=='i')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='J'||c=='j')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='K'||c=='k')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='L'||c=='l')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='M'||c=='m')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='N'||c=='n')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='O'||c=='o')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='P'||c=='p')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='Q'||c=='q')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='R'||c=='r')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='S'||c=='s')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='T'||c=='t')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='U'||c=='u')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='V'||c=='v')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='W'||c=='w')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='X'||c=='x')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='Y'||c=='y')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }

    if(c=='Z'||c=='z')
    {
      cout<<"\t"<<::a;
      rectangle(0,5,635,475);
      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(1000);

      sound(::a*100);
      delay(1500);
      nosound();
      sound(0);
      delay(2000);
      nosound();
      rectangle(5,5,625,450);
    }
  }
}
