#include<stdio.h>

void pattern(int z)
{
    int i,j;
    for(i=1;i<=z;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

int main()
{
    int rows;

    printf("Enter No of rows:");
    scanf("%d",&rows);
    pattern(rows);
    return 0;
}
