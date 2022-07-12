#include <iostream>

using namespace std;

class a
  {
      public:
       int a1 =5 ,b=6;

       a()
       {
           cout<<"const of a ";
       }

      void func()
      {
          cout<<"\ncall by virtual class\n";
          cout<<"sum is "<<a1+b;
      }
  };

  class b : public virtual a
  {
      public:
          b()
          {

              cout<<"\nconst of class b\n";

          }



  };
    class c :public virtual a
  {
        public:
        c()
        {
            cout<<"\nconst of class c\n";
        }
  };
    class d :public c,public b
  {
      public:
          d()
          {
              cout<<"\nconst off class d \n";
          }

  };


int main()
{
    d s;
    s.func();
    return 0;
}
