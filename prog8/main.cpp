#include <iostream>

using namespace std;

class stud
   {
       private :
           int a , b;

       public :
            stud()   // default constructor
              {
                  cout <<"\n hey you are in default constructor \n";
                  a=5;
                  b=6;
                  cout<<a << " and " << b <<" are val of a and b \n";
              }
            stud(int f) // parameterized constructor
            {
                cout<<"\n \n\they you r in parameterized constructor ";
                cout <<"\n enter a and b \n ";
                  cin >>a >> b;
                  cout<<a << " and " << b+f <<" are val of a and b \n";
            }

             stud(const stud &temp)  // copy constructor
            {
                cout<<endl << "\n \n \t you are in copy constructor ";
                a=temp.a;
                b=temp.b;
                cout<<a << " and " << b <<" are val of and b \n";

            }

   };

int main()
{
    cout << "Hello world!" << endl;
    stud s1,s2(5);
    stud s3(s2);
    return 0;
}
