#include <iostream>
#include <stdio.h>

using namespace std;
class stud
   {
       public :
       int r;
       float marks[5];
       char name[20];
   };
int main()
{
    stud s1;
    cout << "Enter name of the student \n";
    gets(s1.name);

    cout << "\n Enter the roll no of the student \n";
    cin>>s1.r;


    for(int i =0 ;i<5;i++)
    {
        cout <<"enter marks of subject "<<i+1 <<endl;
        cin>>s1.marks[i];

    }
    cout <<"\n Total marks is : " << s1.marks[0]+s1.marks[1]+s1.marks[2]+s1.marks[3]+s1.marks[4];
    cout<<"\n percentage scored is : "<<(s1.marks[0]+s1.marks[1]+s1.marks[2]+s1.marks[3]+s1.marks[4])/5<<"%";
    return 0;
}
