#include <iostream>

using namespace std;


int mul (int a, int b)

{

 cout << "multiplying two number here : "<<a*b;

}

int mul(int a, int b, int c)

{

 cout <<endl<< "multiplying three number here : "<<a*b*c<<endl;

}


int main()
{
     mul(5,10);
     mul(5,2,13);
    return 0;
}
