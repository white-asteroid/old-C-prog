#include <iostream>
#include<math.h>
using namespace std;
int ar[12];

int findn(int n)
  {
      int i;
      if (n>=2048)
            return (11);
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
        {ar[i]= pow(2,i);}

    int t ,n,p,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        while(n)
        {
            p=findn(n);
            n=n-ar[p];
            c++;
        }

        cout<<c<<endl;
    }


    return 0;
}
