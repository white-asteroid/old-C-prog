#include <iostream>
#include<stdio.h>

using namespace std;

class stud
   {
      char name[20];
      int cl , r , ano;

  public :

      void getdata()
        {
            cout<<"enter name of student \n ";

            gets(name);
            cout <<"enter class , roll no and admission number " ;
            cin>>cl >>r >>ano;

        }
        void showdata()
        {
            cout<<"\nname    : "<<name ;
            cout<<"\nclass   : "<<cl;
            cout<<"\nroll no : "<<r;
            cout<<"\nadm. no : "<<ano<<endl;

        }

   };

int main()
{
    stud s1;
    s1.getdata();    // function to take data from user
    s1.showdata();  // function to display data

    return 0;
}
