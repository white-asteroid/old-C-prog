#include <iostream>
#include<math.h>
using namespace std;
int ar[12];

int findn(int n)
  {
      int i;
      for(i=0;i<12;i++)
      {
          if(ar[i]==n)
            return(i);
          else if(ar[i]>n)
            return(--i);
      }
  }

int main()
{
    int i;
    for(i=0;i<=11;i++)
        {ar[i]= pow(2,i);cout<<ar[i]<<endl;}

    int t ,n,p;
    cin>>t;
    while(t--)
    {
        cin>>n;

        p=findn(n);
        cout<<p;
    }


    return 0;
}
