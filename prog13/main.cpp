#include <iostream>

using namespace std;

class a
  {
      public:
          int z,x;
      a()
      {
          cout<<"constructor of class A\n Enter value of z and x \n";
          cin>>z>>x;
          cout << endl;


      }
  };

  class b
  {
      public:
          int v;
      b()
      {
          cout<<"constructor of class B\n Enter value of v \ns";
          cin>>v;
          cout<<endl;

      }
  };
    class c :public a , public b
  {
      public:
          int sum;
      c()
      {
          cout<<"constructor of class C\n";
          sum = z+x+v;
      }
  };
    class d :public c
  {
      public:
      d()
      {
          cout<<"constructor of class D\n";
          cout<<"\n total sum is "<<sum<<endl;
      }
  };

   class e :public c
  {
      public:
      e()
      {
          cout<<"constructor of class e\n";
          cout<<"evg is "<<sum/3;
      }
  };

int main()
{
    e a1;
    cout <<endl;
    d b1;
    return 0;
}
