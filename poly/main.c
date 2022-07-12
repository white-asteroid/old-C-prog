#include <stdio.h>
#include <stdlib.h>

int main()
{
//    As per other replies, this is fine:

char c = '5',e1[10],e2[10],e[20];
int x = c -'0',n1=4,n2=3,i=0,s=1;
printf("enter first eq \n ");
while(i<n1)
{
    scanf("%c",e1[i++]);

}
printf("enter second eq \n");
i=0;
while(i<n1)
{
    scanf("%c",e2[i++]);

}
i=0;
printf("eq1 \n");
while(i<n1)
{
    if(s==2)
    {
    printf("%c ",e1[i++]);
    s--;
    }
    else if (s==1)
    {
        x=e1[i++] - '0';
        printf("%d ",x);
        s++;
    }
    if(e1[i]=='+'||e1[i]=='-')
        s=1;
}
s=1;
i=0;
while(i<n2)
{
    if(s==2)
    {
    printf("%c",e2[i++]);
    s--;
    }
    else if (s==1)
    {
        x=e2[i++] - '0';
        printf("%d ",x);
        s++;
    }
    if(e2[i]=='+'||e2[i]=='-')
        s=1;
}



//Also, for error checking, you may wish to check isdigit(c) is true first. Note that you cannot completely portably do the same for letters, for example:

    return 0;
}
