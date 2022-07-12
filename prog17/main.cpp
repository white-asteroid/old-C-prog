#include <iostream>

using namespace std;

class abc
  {

  public:

      int real , img;
    abc operator+(abc t2)
    {
        abc temp;
        temp.real = real + t2.real;
        temp.img = img + t2.img;
        return(temp);
    }
  };

int main()
{
    abc t1 ,t2 ,t3;
    t1.real = 3;t1.img=6;;
    t2.real=5;t2.img=10;
    t3 = t1 + t2;
    cout << "\ngiven equations are \n"<<t1.real <<"+"<<t1.img <<"i"<<endl<<t2.real <<"+"<<t2.img <<"i";
      // we are adding two object of same class
    cout <<endl<<"\nadded values are : "<<t3.real <<"+" <<t3.img<<" i" <<endl;
    return 0;
}
