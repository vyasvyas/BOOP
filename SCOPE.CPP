#include<iostream.h>
#include<conio.h>
int a=10; //global a
int main()
{
   clrscr();
   int a=20;//local a
   cout<<"the global a is"<<::a;
   cout<<"\n the local a is"<<a;
   getch();
   return 0;
}