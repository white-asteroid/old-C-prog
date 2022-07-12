#include <iostream>
#include <cmath>
#include<stdio.h>

using namespace std;

int main()
{
    float x ,y ;
    cin>>x>>y;
    if(fmod(x,5)==0&&x<=(y-0.5))
    {
        printf("%f",y-x-0.5);
    }
    else
        printf("%f",y);

    return 0;
}
