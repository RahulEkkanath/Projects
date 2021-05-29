# include<iostream.h>
# include<fstream.h>
# include<process.h>
# include<stdio.h>
# include<string.h>
# include<conio.h>
# include<dos.h>
# include<graphics.h>

class train{

private:
  int trainno;
  char trainname[60], startingpoint[60], destination[60], odate[12], adate[10];

protected:
  int nofafseats, nofasseats, noffseates, nofacseats, nofssseates;
  long otime,atime;

public:
train()
{
  trainno=0;
  strcpy(odate,"00/00/0000");
  otime=0;
  strcpy(adate,"00/00/0000");
  atime=0;
  nofafseats=0;
  nofasseats=0;
  noffseates=0;
  nofacseats=0;
  nofssseates=0;
  strcpy(trainname,"NULL");
  strcpy(startingpoint,"NULL");
  strcpy(destination,"NULL");
}
  void input();
  void display();
  int returntr();
  int returnaf();
  int returnas();
  int returnfs();
  int returnac();
  int returnss();
}tr;

int train::returntr()
{
return trainno;
}

int train::returnaf()
{
return nofafseats;
}

int train::returnas()
{
return nofasseats;
}

int train::returnfs()
{
return noffsseats;
}

int train::returnac()
{
return nofacseats;
}

int train::returnss()
{
return nofssseats;
}

void train::input()
{
int gdriver=DETECT, gmode=DETECT, midx, midy;
initgraph(&gdriver, &gmode, "c://turboc3/bgi");
rectangle(-20,25,650,450);

cout<<endl<<endl<<"Enter the train number:"<<endl;
cin>>trainno;
cout<<"Enter the number of A/C First Class seats:"<<endl;
cin>>nofafseats;
cout<<"Enter the number of A/C Second Class seats:"<<endl;
cin>>nofasseats;
cout<<"Enter the number of A/C Chair Car seats:"<<endl;
cin>>nofacseats;
cout<<"Enter the number of A/C First Class Sleeper seats:"<<endl;
cin>>noffsseats;
cout<<"Enter the number of A/C Second Class Sleeper seats:"<<endl;
cin>>nofssseats;

cout<<"Enter the train name:"<<endl;
gets(trainname);
cout<<"Enter the origin:"<<endl;
gets(startingpoint);
cout<<"Date & Time of departure (dd/mm/yy)"<<endl;
gets(odate);
cin>>otime;
cout<<"Enter the destination:"<<endl;
gets(destination);
cout<<"Date & Time of arrival (dd/mm/yy)"<<endl;
gets(adate);
cin>>atime;
closegraph();
}

void train::display()
{
  int gdriver=DETECT, gmode=DETECT, midx, midy;
  initgraph(&gdriver, &gmode, "c://turboc3/bgi");
  rectangle(-20,25,650,450);

  cout<<endl<<endl<<"Train number:"<<endl;
  cout<<trainno<<endl;
  cout<<"Train name"<<endl;
  puts(trainname);
  cout<<"Number of A/C First Class seats:"<<endl;
  cout<<nofafseats<<endl;
  cout<<"Enter the number of Second Class seats:"<<endl;
  cout<<nofasseats<<endl;
  cout<<"Enter the number of A/C Chair Car seats:"<<endl;
  cout<<nofacseats<<endl;
  cout<<"Enter the number of A/C First Class Sleeper seats:"<<endl;
  cout<<noffsseats<<endl;
  cout<<"Enter the number of A/C Second Class Sleeper seats:"<<endl;
  cout<<nofssseats<<endl;

  cout<<"Origin:"<<endl;
  puts(startingpoint);
  cout<<"Date & Time of departure (dd/mm/yy)"<<endl;
  puts(odate);
  cout<<otime<<endl;
  cout<<"Destination:"<<endl;
  puts(destination);
  cout<<"Date & Time of arrival (dd/mm/yy)"<<endl;
  puts(adate);
  cout<<atime<<endl;
  cout<<"Press any key to continue..."<<endl;
  getch();
  closegraph();
}

class tickets
{
private:
  int toaf, nofaf, toas, nofas, tofs, noffs, toac, nofac, toss, nofss, age;
  long resno;
  char status[40], name[40];

public:
  tickets();
  void reservation();
  void cancellation();
  int ret();
  void display();
}tick;

tickets::tickets()
{
  resno=0;
  toaf=0;
  nofaf=0;
  toas=0;
  nofas=0;
  tofs=0;
  noffs=0;
  toac=0;
  nofac=0;
  toss=0;
  nofss=0;
  age=0;
  strcpy(status,"NULL");
  strcpy(name,"NULL");
}

int tickets::ret()
{
  return resno;
}

void tickets::display()
{
  clrscr();
  int gdriver=DETECT, gmode=DETECT, midx, midy;
  initgraph(&gdriver, &gmode, "c://turboc3/bgi");
  rectangle(-20,25,650,450);
  int f=0;
  ifstream f1;
  f1.open("Ticket1.dat",ios::out);
  f1.seekg(0);
  if(!f1)
  {
    cout<<"Error in the file";
  }
  X:
  initgraph(&gdriver, &gmode, "c://turboc3/bgi");
  rectangle(-20,25,650,450);
  cout<<endl<<endl<<"Enter the Reservation Number:"<<endl;
  int n;
  cin>>n;
  while(!f1.eof())
  {
    f1.read((char*)&tick,sizeof(tick));
    if(n==tick.resno)
    {
      f=1;
      cout<<endl<<endl<<"Name of traveller:"<<endl;
      cout<<name<<endl;
      cout<<endl<<endl<<"Age of traveller:"<<endl;
      cout<<age<<endl;
      cout<<endl<<endl<<"Present Status:"<<endl;
      cout<<status<<endl;
      cout<<endl<<endl<<"Reservation Number:"<<endl;
      cout<<resno<<endl;
      cout<<endl<<endl<<"Your seat number is:"<<endl;
      cout<<resno%100<<endl;
      int k=(resno%1000)/100;
      if(k==1)
      {
        cout<<"The seat type is:"<<endl<<"A/C First Class"<<endl;
      }
      else
      if(k==2)
      {
        cout<<"The seat type is:"<<endl<<"A/C Second Class"<<endl;
      }
      else
      if(k==3)
      {
        cout<<"The seat type is:"<<endl<<"First Class Sleeper"<<endl;
      }
      else
      if(k==4)
      {
        cout<<"The seat type is:"<<endl<<"A/C Chair Car"<<endl;
      }
      else
      if(k==5)
      {
        cout<<"The seat type is:"<<endl<<"Second Class Sleeper"<<endl;
      }
      cout<<"Press any key to continue";
      getch();
      break;
    }
  }
  if(f==0)
  {
    cout<<"Invalid reservation number. Do you want to retry? (Y/N)"<<endl;
    char a;
    cin>>a;
    if(a=='y'||a='Y')
    {
      clrscr();
      goto X;
    }
    else
    getch();
  }
  f1.close();
  closegraph();
}

void tickets::reservation()
{
  clrscr();
  randomize();
  int gdriver=DETECT, gmode=DETECT, midx, midy;
  initgraph(&gdriver, &gmode, "c://turboc3/bgi");
  rectangle(-20,25,650,450);
  settextstyle(2,HORIZ_DIR,9);
  midx=getmaxx()*1/4;
  midy=50;
  outtextxy(midx,midy,"Reservation");
  cout<<"\n\n\n\n\n\nEnter the train number:"<<endl;
  int tno,f=0;
  cin>>tno;
  ofstream file;
  ifstream fin;
  fin.open("Train1.dat",ios::out);
  if(!fin)
  {
    cout<<"Error in file";
  }
  while(!fin.eof())
  {
    fin.read((char*)&tr,sizeof(tr));
    int z;
    z=tr.returntr();
    if(tno==z)
    {
      f=1;
      nofaf=tr.returnaf();
      nofas=tr.returnas();
      noffs=tr.returnfs();
      nofac=tr.returnac();
      nofss=tr.returnss();
    }
  }
  if(f==1)
  {
    S:
    file.open("Ticket1.dat",ios::app);
    cout<<"Name of the traveller:"<<endl;
    gets(name);
    cout<<"Age of the traveller:"<<endl;
    cin>>age;
    cout<<"Select the class which you wish to travel:"<<endl;
    cout<<"1. A/C First Class"<<endl;
    cout<<"2. A/C Second Class"<<endl;
    cout<<"3. First Class Sleeper"<<endl;
    cout<<"4. A/C Chair Car"<<endl;
    cout<<"5. Second Class Sleeper"<<endl;
    cout<<"Enter your choice:"<<endl;
    int c;
    cin>>c;
    long u=tno*10;
    switch(c)
    {
      case 1:
      cout<<"The last 2 digits of the reservation number is your seat number:"<<endl;
      toaf++;
      resno=u+random(nofaf)+1;
      resno+=100;
      if((nofaf-tofaf)>0)
      {
        strcpy(status,"Confirmed");
        cout<<"Status"<<endl;
        cout<<status;
        cout<<"Reservation Number:"<<endl;
        cout<<resno<<endl;
        getch();
        file.write((char*)&tick,sizeof(tick));
        break;
      }
      else
      {
        strcpy(status,"No seat available in this class");
        cout<<"Status"<<endl;
        cout<<status;
        cout<<"Reservation Number:"<<endl;
        cout<<resno<<endl;
        getch();
        file.write((char*)&tick,sizeof(tick));
        break;
      }
      case 2:
      cout<<"The last 2 digits of the reservation number is your seat number:"<<endl;
      toas++;
      resno=u+random(nofas)+1;
      resno+=200;
      if((nofas-tofas)>0)
      {
        strcpy(status,"Confirmed");
        cout<<"Status"<<endl;
        cout<<status;
        cout<<"Reservation Number:"<<endl;
        cout<<resno<<endl;
        getch();
        file.write((char*)&tick,sizeof(tick));
        break;
      }
      else
      {
        strcpy(status,"No seat available in this class");
        cout<<"Status"<<endl;
        cout<<status;
        cout<<"Reservation Number:"<<endl;
        cout<<resno<<endl;
        getch();
        file.write((char*)&tick,sizeof(tick));
        break;
      }
      case 3:
      cout<<"The last 2 digits of the reservation number is your seat number:"<<endl;
      tofs++;
      resno=u+random(noffs)+1;
      resno+=300;
      if((noffs-toffs)>0)
      {
        strcpy(status,"Confirmed");
        cout<<"Status"<<endl;
        cout<<status;
        cout<<"Reservation Number:"<<endl;
        cout<<resno<<endl;
        getch();
        file.write((char*)&tick,sizeof(tick));
        break;
      }
      else
      {
        strcpy(status,"No seat available in this class");
        cout<<"Status"<<endl;
        cout<<status;
        cout<<"Reservation Number:"<<endl;
        cout<<resno<<endl;
        getch();
        file.write((char*)&tick,sizeof(tick));
        break;
      }
      case 4:
      cout<<"The last 2 digits of the reservation number is your seat number:"<<endl;
      toac++;
      resno=u+random(nofac)+1;
      resno+=400;
      if((nofac-toac)>0)
      {
        strcpy(status,"Confirmed");
        cout<<"Status"<<endl;
        cout<<status;
        cout<<"Reservation Number:"<<endl;
        cout<<resno<<endl;
        getch();
        file.write((char*)&tick,sizeof(tick));
        break;
      }
      else
      {
        strcpy(status,"No seat available in this class");
        cout<<"Status"<<endl;
        cout<<status;
        cout<<"Reservation Number:"<<endl;
        cout<<resno<<endl;
        getch();
        file.write((char*)&tick,sizeof(tick));
        break;
      }
      case 5:
      cout<<"The last 2 digits of the reservation number is your seat number:"<<endl;
      toss++;
      resno=u+random(nofss)+1;
      resno+=500;
      if((nofss-toss)>0)
      {
        strcpy(status,"Confirmed");
        cout<<"Status"<<endl;
        cout<<status;
        cout<<"Reservation Number:"<<endl;
        cout<<resno<<endl;
        getch();
        file.write((char*)&tick,sizeof(tick));
        break;
      }
      else
      {
        strcpy(status,"No seat available in this class");
        cout<<"Status"<<endl;
        cout<<status;
        cout<<"Reservation Number:"<<endl;
        cout<<resno<<endl;
        getch();
        file.write((char*)&tick,sizeof(tick));
        break;
      }
    }
    cout<<endl;
    cout<<"Do you wish to continue booking tickets (Y/N)? :"<<endl;
    char n;
    cin>>n;
    if(n=='Y'||n=='y')
    {
      clrscr();
      goto S;
    }
  }
  if(f==0)
  {
    clrscr();
    initgraph(&gdriver,&gmode,"c://turboc3/bgi");
    cout<<"Error in the train number entered";
    getch();
  }
  file.close();
  closegraph();
}

void tickets::cancellation()
{
  clrscr();
  int gdriver=DETECT, gmode=DETECT, midx, midy;
  initgraph(&gdriver, &gmode, "c://turboc3/bgi");
  rectangle(-20,25,650,450);
  ifstream f1;
  fin.open("Ticket1.dat",ios::out);
  ofstream file;
  file.open("Temp1.dat",ios::app);
  fin.seekg(0);
  settextstyle(2,HORIZ_DIR,9);
  midx=getmaxx()*1/4;
  midy=50;
  outtextxy(midx,midy,"cancellation");
  cout<<endl<<endl<<"\n\n\n\n\n\n\nEnter the Reservation number:"<<endl;
  int r,f=0;
  cin>>r;
  if(!f1)
  {
    cout<<"Error in the file";
  }
  while(!fin.eof())
  {
    fin.read((char*)&tick,sizeof(tick));
    int z;
    z=tick.ret();
    while(z!=r)
    {
      file.write((char*)&tick,sizeof(tick));
    }
    if(z==r)
    {
      f=1;
    }
  }
  fin.close();
  file.close();
  remove("Ticket1.dat");
  rename("Temp1.dat","Ticket1.dat");
  if(f==0)
  {
    cout<<"Invalid Reservation Number"<<endl;
    cout<<"Please retry";
    getch();
  }
  else
  {
    cout<<"Reservation cancelled";
    getch();
  }
  closegraph();
}

void loadingscr()
{
  textcolor(WHITE);
  clrscr();
  gotoxy(30,12);
  cout<<"Loading...";
  int x=0;
  char a=219;
  for(int i=0;i<20;i++)
  {
    gotoxy(30+x,13);
    delay(90);
    cout<<a;
    x+=1;
    gotoxy(52,13);
    cout<<" "<<i/2<<"0%";
  }
  delay(180);
  gotoxy(55,21);
  cout<<"Press any key to continue";
}

void main()
{
  loadingscr();
  int ch;
  char n;
  clrscr();
  X:
  int gdriver=DETECT, gmode=DETECT, midx, midy;
  initgraph(&gdriver, &gmode, "c://turboc3.bgi");
  rectangle(-20,25,650,450);
  settextstyle(2,HORIZ_DIR,9);
  midx=getmaxx()*19/128;
  midy=50;
  outtextxy(midx,midy,"Railway Ticketing System");
  outtextxy(midx+110,midy+50,"Main Menu");
  gotoxy(65,25);
  midx=getmaxx()/2*1/8;
  midy=(getmaxx()/2)-70;
  settextstyle(2,HORIZ_DIR,8);
  outtextxy(midx,midy,"1. Train Details");
  midy=(getmaxx()/2)-40;
  outtextxy(midx,midy,"2. Update Train Details");
  midy=(getmaxx()/2)-10;
  outtextxy(midx,midy,"3. Reserve a Ticket");
  midy=(getmaxx()/2)+20;
  outtextxy(midx,midy,"4. Cancel a Ticket");
  midy=(getmaxx()/2)+50;
  outtextxy(midx,midy,"5. Display Ticket Details");
  midy=(getmaxx()/2)+80;
  outtextxy(midx,midy,"6. Exit");
  cout<<"Version 3.0"<<endl;
  cout<<"Enter your choice: ";
  cin>>ch;
  closegraph();
  switch(ch)
  {
    case 1:
    loadingscr();
    getch();
    ifstream fin("Train1.dat",ios::out);
    fin.seekg(0);
    clrscr();
    if(!fin)
    {
      clrscr();
      cout<<"Error in the file";
    }
    else
    {
      clrscr();
      while(!finn.eof())
      {
        fin.read((char*)&tr,sizeof(tr));
        tr.display();
      }
    }
    fin.close();
    goto X;

    case 2:
    loadingscr();
    getch();
    Y:
    clrscr();
    ofstream fout("Train1.dat",ios::app);
    tr.input();
    fout.write((char*)&tr,sizeof(tr));
    fout.close();
    cout<<"Do you wish to continue updating? (Y/N)?"<<endl;
    cin>>n;
    if(n=='y'||n=='Y')
    {
      goto Y;
    }
    else
    {
      goto X;
    }

    case 3:
    loadingscr();
    getch();
    tick.reservation();
    goto X;

    case 4:
    loadingscr();
    getch();
    tick.cancellation();
    goto X;

    case 5:
    loadingscr();
    getch();
    tick.display();
    goto X;
  }
}
