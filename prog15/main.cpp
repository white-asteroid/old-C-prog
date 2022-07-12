#include <iostream>

using namespace std;

class abc
 {
 public :
    int a=5;

 };
 class cba : public abc
 {
     int b =6;
 public:

    friend void showd(cba);

 };

 void showd(cba s)
   {
       cout <<"\n\t\tYou are in friend function and it can access private members\n\t\tof the class  \n\n";
       cout <<"\n value of a is " <<s.a;
       cout<<"\n value of b is :"<<s.b;


   }
int main()
{
    cba d;
    showd(d);
    return 0;
}
