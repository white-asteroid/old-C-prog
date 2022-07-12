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

    friend void swap(cba);

 };

 void swap(cba s)
   {
       cout <<"values \n a "<< s.a <<"\n b "<<s.b<<endl;
       s.a=s.a+s.b;
       s.b=s.a-s.b;
       s.a=s.a-s.b;
       cout<<"\n \t======swapped===============\n";
       cout <<"values \n a "<< s.a <<"\n b "<<s.b<<endl;

   }
int main()
{
    cba d;
    swap(d);
    return 0;
}
