#include <iostream>

using namespace std;

class a
 {
 public:
     float a ,b ,c,d;
     void gdata()
     {
         cout<<" \n enter data a , b ,c ,d \n";
         cin>>a >> b >> c >>d;
         cout <<endl;
     }

 };

 class abc : public a
  {
      public :

      void calc()
      {

          cout <<"\n average of entered value is : "<<(a+b+c+d)/4;
          cout <<"\n sum of entered value is : "<<a+b+c+d;

      }
  };

int main()
{
   abc s;
   s.gdata();
   s.calc();
    return 0;
}
