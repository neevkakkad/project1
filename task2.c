//ODD AND EVEN..
#include<stdio.h>

void xyz()
{
    int m,n=1,i;
    printf("Enrter a number:");
    scanf("%d",&m);
    printf("==========ODD EVEN===========\n");
    if(m%2==0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
    printf("=======Factorial=========");
    for(i=1;i<=m;i++)
    {
        n=i*n;
    }
    printf("\nFactorial of %d is %d",m,n);
}

int main()
{
    xyz();
    return 0;
}