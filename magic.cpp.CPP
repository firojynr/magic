#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int i,x,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,a[21]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
for(i=0; i<21; i++)
{
cout<<a[i]<<"\t";
if(i==2)
{ cout<<endl;
}
if(i==5)
{ cout<<endl;
}
if(i==8)
{ cout<<endl;
}
if(i==11)
{ cout<<endl;
}
if(i==14)
{ cout<<endl;
}
if(i==17)
{ cout<<endl;
}
}
cout<<endl<<endl;
cout<<"Enter column no in which your no lies: ";
cin>>x;
if(x==1)
{
for(i=1; i<=7; i=i+3)
{
cout<<a[i]<<"\t";
}
cout<<endl;
for(i=10; i<=17; i=i+3)
{
cout<<a[i]<<"\t";
}
cout<<endl;
cout<<a[19];
cout<<"\t";
for(i=0; i<=3; i=i+3)
{
cout<<a[i]<<"\t";
}
cout<<endl;
for(i=6; i<=12; i=i+3)
{
 cout<<a[i]<<"\t";
}
cout<<endl;
for(i=15; i<=18; i=i+3)
{
 cout<<a[i]<<"\t";
}
cout<<a[2]<<endl;
for(i=5; i<=11; i=i+3)
{
  cout<<a[i]<<"\t";
}
cout<<endl;
for(i=14; i<=20; i=i+3)
{
 cout<<a[i]<<"\t";
}


cout<<endl;
cout<<"Again Enter Column No In Which Your No Lies: : ";
cin>>x2;

if(x2==1)
{
 cout<<a[4]<<"\t"<<a[13]<<"\t"<<a[0]<<endl;
 cout<<a[9]<<"\t"<<a[18]<<"\t"<<a[8]<<endl<<a[17];

 cout<<"\t"<<a[1]<<"\t"<<a[10]<<endl;
 cout<<a[19]<<"\t"<<a[6]<<"\t"<<a[15]<<endl;

 cout<<a[5]<<"\t"<<a[14]<<"\t"<<a[7]<<endl;
 cout<<a[16]<<"\t"<<a[3]<<"\t"<<a[12]<<endl;
 cout<<a[2]<<"\t"<<a[11]<<"\t"<<a[20]<<endl;

   cout<<endl;
 cout<<"Again Enter Column No In Which Your No Lies: ";
 cin>>x11;

 if(x11==1)
 {    cout<<endl;
  cout<<"No is: "<<a[19];
 }
  if(x11==2)
 {    cout<<endl;
  cout<<"No is: "<<a[6];
 }

  if(x11==3)
 {    cout<<endl;
  cout<<"No is: "<<a[15];
 }


}
if(x2==2)
{
 cout<<a[1]<<"\t"<<a[10]<<"\t"<<a[19]<<endl;
 cout<<a[6]<<"\t"<<a[15]<<"\t"<<a[5]<<endl;
 cout<<a[14]<<"\t"<<a[4]<<"\t"<<a[13]<<endl;
 cout<<a[0]<<"\t"<<a[9]<<"\t"<<a[18]<<endl;
 cout<<a[8]<<"\t"<<a[17]<<"\t"<<a[7]<<endl;
 cout<<a[16]<<"\t"<<a[3]<<"\t"<<a[12]<<endl;
 cout<<a[2]<<"\t"<<a[11]<<"\t"<<a[20]<<endl;

  cout<<endl;
 cout<<"Again Enter Column No In Which Your No Lies: ";
 cin>>x12;

 if(x12==1)
 {    cout<<endl;
  cout<<"No is: "<<a[0];
 }
  if(x12==2)
 {    cout<<endl;
  cout<<"No is: "<<a[9];
 }

  if(x12==3)
 {    cout<<endl;
  cout<<"No is: "<<a[18];
 }


}
if(x2==3)
{
 cout<<a[1]<<"\t"<<a[10]<<"\t"<<a[19]<<endl;
 cout<<a[6]<<"\t"<<a[15]<<"\t"<<a[5]<<endl;
 cout<<a[14]<<"\t"<<a[7]<<"\t"<<a[16]<<endl;
 cout<<a[3]<<"\t"<<a[12]<<"\t"<<a[2]<<endl;
 cout<<a[11]<<"\t"<<a[20]<<"\t"<<a[4]<<endl;
 cout<<a[13]<<"\t"<<a[0]<<"\t"<<a[9]<<endl;
 cout<<a[18]<<"\t"<<a[8]<<"\t"<<a[17]<<endl;

   cout<<endl;
 cout<<"Again Enter Column No In Which Your No Lies: ";
 cin>>x13;

 if(x13==1)
 {    cout<<endl;
  cout<<"No is: "<<a[3];
 }
  if(x13==2)
 {    cout<<endl;
  cout<<"No is: "<<a[12];
 }

  if(x13==3)
 {    cout<<endl;
  cout<<"No is: "<<a[2];
 }


}



}


if(x==2)
{
for(i=0; i<=6; i=i+3)
{
cout<<a[i]<<"\t";
}
cout<<endl;
for(i=9; i<=15; i=i+3)
{
cout<<a[i]<<"\t";
}
cout<<endl;
cout<<a[18];
cout<<"\t";
for(i=1; i<=4; i=i+3)
{
cout<<a[i]<<"\t";
}
cout<<endl;
for(i=7; i<=13; i=i+3)
{
 cout<<a[i]<<"\t";
}
cout<<endl;
for(i=16; i<=19; i=i+3)
{
 cout<<a[i]<<"\t";
}
cout<<a[2]<<endl;
for(i=5; i<=11; i=i+3)
{
  cout<<a[i]<<"\t";
}
cout<<endl;
for(i=14; i<=20; i=i+3)
{
 cout<<a[i]<<"\t";
}


cout<<endl;
cout<<"Again Enter Column No In Which Your No Lies: ";
cin>>x3;

if(x3==1)
{
 cout<<a[3]<<"\t"<<a[12]<<"\t"<<a[1]<<endl;
 cout<<a[10]<<"\t"<<a[19]<<"\t"<<a[8]<<endl;
 cout<<a[17]<<"\t"<<a[0]<<"\t"<<a[9]<<endl;
 cout<<a[18]<<"\t"<<a[7]<<"\t"<<a[16]<<endl;
 cout<<a[5]<<"\t"<<a[14]<<"\t"<<a[6]<<endl;
 cout<<a[15]<<"\t"<<a[4]<<"\t"<<a[13]<<endl;
 cout<<a[2]<<"\t"<<a[11]<<"\t"<<a[20]<<endl;

  cout<<endl;
 cout<<"Again Enter Column No In Which Your No Lies: ";
 cin>>x10;

 if(x10==1)
 {    cout<<endl;
  cout<<"No is: "<<a[18];
 }
  if(x10==2)
 {    cout<<endl;
  cout<<"No is: "<<a[7];
 }

  if(x10==3)
 {    cout<<endl;
  cout<<"No is: "<<a[16];
 }


}
if(x3==2)
{
 cout<<a[0]<<"\t"<<a[9]<<"\t"<<a[18]<<endl;
 cout<<a[7]<<"\t"<<a[16]<<"\t"<<a[5]<<endl;
 cout<<a[14]<<"\t"<<a[3]<<"\t"<<a[12]<<endl;
 cout<<a[1]<<"\t"<<a[10]<<"\t"<<a[19]<<endl;
 cout<<a[8]<<"\t"<<a[17]<<"\t"<<a[6]<<endl;
 cout<<a[15]<<"\t"<<a[4]<<"\t"<<a[13]<<endl;
 cout<<a[2]<<"\t"<<a[11]<<"\t"<<a[20]<<endl;

   cout<<endl;
 cout<<"Again Enter Column No In Which Your No Lies: ";
 cin>>x9;

 if(x9==1)
 {    cout<<endl;
  cout<<"No is: "<<a[1];
 }
  if(x9==2)
 {    cout<<endl;
  cout<<"No is: "<<a[10];
 }

  if(x9==3)
 {    cout<<endl;
  cout<<"No is: "<<a[19];
 }


}
if(x3==3)
{
 cout<<a[0]<<"\t"<<a[9]<<"\t"<<a[18]<<endl;
 cout<<a[7]<<"\t"<<a[16]<<"\t"<<a[5]<<endl;
 cout<<a[14]<<"\t"<<a[6]<<"\t"<<a[15]<<endl;
 cout<<a[4]<<"\t"<<a[13]<<"\t"<<a[2]<<endl;
 cout<<a[11]<<"\t"<<a[20]<<"\t"<<a[3]<<endl;
 cout<<a[12]<<"\t"<<a[1]<<"\t"<<a[10]<<endl;
 cout<<a[19]<<"\t"<<a[8]<<"\t"<<a[17]<<endl;

   cout<<endl;
 cout<<"Enter Column: ";
 cin>>x8;

 if(x8==1)
 {    cout<<endl;
  cout<<"No is: "<<a[4];
 }
  if(x8==2)
 {    cout<<endl;
  cout<<"No is: "<<a[13];
 }

  if(x8==3)
 {    cout<<endl;
  cout<<"No is: "<<a[2];
 }

}




}
if(x==3)
{
for(i=0; i<=6; i=i+3)
{
cout<<a[i]<<"\t";
}
cout<<endl;
for(i=9; i<=15; i=i+3)
{
cout<<a[i]<<"\t";
}
cout<<endl;
cout<<a[18];
cout<<"\t";
for(i=2; i<=5; i=i+3)
{
cout<<a[i]<<"\t";
}
cout<<endl;
for(i=8; i<=14; i=i+3)
{
 cout<<a[i]<<"\t";
}
cout<<endl;
for(i=17; i<=20; i=i+3)
{
 cout<<a[i]<<"\t";
}
cout<<a[1]<<endl;
for(i=4; i<=10; i=i+3)
{
  cout<<a[i]<<"\t";
}
cout<<endl;
for(i=13; i<=19; i=i+3)
{
 cout<<a[i]<<"\t";
}



cout<<endl;
cout<<"Enter Column: ";
cin>>x4;

if(x4==1)
{
 cout<<a[3]<<"\t"<<a[12]<<"\t"<<a[2]<<endl;
 cout<<a[11]<<"\t"<<a[20]<<"\t"<<a[7]<<endl;
 cout<<a[16]<<"\t"<<a[0]<<"\t"<<a[9]<<endl;
 cout<<a[18]<<"\t"<<a[8]<<"\t"<<a[17]<<endl;
 cout<<a[4]<<"\t"<<a[13]<<"\t"<<a[6]<<endl;
 cout<<a[15]<<"\t"<<a[5]<<"\t"<<a[14]<<endl;
 cout<<a[1]<<"\t"<<a[10]<<"\t"<<a[19]<<endl;
  cout<<endl;
 cout<<"Enter Column: ";
 cin>>x7;

 if(x7==1)
 {    cout<<endl;
  cout<<"No is: "<<a[18];
 }
  if(x7==2)
 {    cout<<endl;
  cout<<"No is: "<<a[8];
 }

  if(x7==3)
 {    cout<<endl;
  cout<<"No is: "<<a[17];
 }

}
if(x4==2)
{
 cout<<a[0]<<"\t"<<a[9]<<"\t"<<a[18]<<endl;
 cout<<a[8]<<"\t"<<a[17]<<"\t"<<a[4]<<endl;
 cout<<a[13]<<"\t"<<a[3]<<"\t"<<a[12]<<endl;
 cout<<a[2]<<"\t"<<a[11]<<"\t"<<a[20]<<endl;
 cout<<a[7]<<"\t"<<a[16]<<"\t"<<a[6]<<endl;
 cout<<a[15]<<"\t"<<a[5]<<"\t"<<a[14]<<endl;
 cout<<a[1]<<"\t"<<a[10]<<"\t"<<a[19]<<endl;

  cout<<endl;
 cout<<"Enter Column: ";
 cin>>x6;

 if(x6==1)
 {    cout<<endl;
  cout<<"No is: "<<a[2];
 }
  if(x6==2)
 {    cout<<endl;
  cout<<"No is: "<<a[11];
 }

  if(x6==3)
 {    cout<<endl;
  cout<<"No is: "<<a[20];
 }
}
if(x4==3)
{
 cout<<a[0]<<"\t"<<a[9]<<"\t"<<a[18]<<endl;
 cout<<a[8]<<"\t"<<a[17]<<"\t"<<a[4]<<endl;
 cout<<a[13]<<"\t"<<a[6]<<"\t"<<a[15]<<endl;
 cout<<a[5]<<"\t"<<a[14]<<"\t"<<a[1]<<endl;
 cout<<a[10]<<"\t"<<a[19]<<"\t"<<a[3]<<endl;
 cout<<a[12]<<"\t"<<a[2]<<"\t"<<a[11]<<endl;
 cout<<a[20]<<"\t"<<a[7]<<"\t"<<a[16]<<endl;


 cout<<endl;
 cout<<"Enter Column: ";
 cin>>x5;

 if(x5==1)
 {    cout<<endl;
  cout<<"No is: "<<a[5];
 }
  if(x5==2)
 {    cout<<endl;
  cout<<"No is: "<<a[14];
 }

  if(x5==3)
{ cout<<endl;
  cout<<"No is: "<<a[1];
}
}
}
getch();
}


