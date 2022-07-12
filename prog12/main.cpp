#include <iostream>
#include<stdio.h>
using namespace std;

class showroom
  {
  public :
    int sno,cno, ono ,n;
    long long int price ;
    char model[20];
    showroom()
    {
        sno=556;

    }
  };

  class cars :public showroom
  {
  public :
      void getdata()
       {
           cout<<"enter car model no : ";
           gets(model);
           cout << "enter order no " ;
           cin >> ono;
           cout<<"enter price ";
           cin>>price;
           cout <<"enter no of cars available";
           cin>>n;

       }


  };


 class cus : public cars
   {
       public :

       cus()
       {
           getdata();
           if (n>0)
         {
           cout <<"\ncar is available \n";
           cout<<"\n model no : "<<model;
           cout<<"\n order no "<<ono;
           cout<<"\n price " << price;
           cout<<endl;
         }
       else
        cout <<"\n sorry car is not available \n";
       }
   };

int main()
{
    cus s;
    return 0;
}
