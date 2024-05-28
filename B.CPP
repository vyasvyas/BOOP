#include<iostream.h>
#include<conio.h>
// using namespace std;
class vehical
{
    public:
    vehical()
    {
       cout<<"This is a vehical:";
    }
};
class car:public vehical
{
   public:
    car()
    {
       cout<<"This is a car";
    }
};
class racing()
{
   cout<<"This is for racing car";
}
class ferrari:public car(),public racing()
{
public:
ferrari()
{
cout<<"ferrari is racing car";
}
};
int main()
{
   int ferrari;
   ferrari f;
   return 0;
}