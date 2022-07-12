#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[9],i,d,s,t,temp,si;
    printf("enter size of array \n");
    scanf("%d",&si);
    printf("\n");
    printf("enter array \n");
    for(i = 0;i<si;i++)
        scanf("%d",&arr[i]);
    for(i = 0;i<si;i++)
        printf("%d\t",arr[i]);
    printf("\n");
    //do
    //{


    printf("enter the the number by which you want to reverse array \n");
    scanf("%d",&d);
    //11 s=sizeof(arr)-d;
    //}while(d>(sizeof(arr)/2)  */
    for(i = 0;i<si-d  ;i++)
     {
         //if(i==s+1)
          //d=d/2;

         temp=arr[i];
         arr[i]=arr[i+d];
         arr[i+d]=temp;
         //if(i==s)
           // d=2;
     }
     for(i=0;i<si;i++)
        printf("%d\t",arr[i]);
        printf("\n");

     t=d/2;
     printf("value of t and si -t is %d and %d\n",t,si - t );
     printf("value of d and si-d is %d and %d\n",d,si-d);
     for (i=si-d;i<=6666
     si-t;i++)
     {
         printf("program %d\n",i);
         temp=arr[i];
         arr[i]=arr[i+t];
         arr[i+t]=temp;

     }
    for(i=0;i<si;i++)
        printf("%d\t",arr[i]);
        printf("\n");

    return 0;
}
