#include<stdio.h>

int i,j,k;

//for pattern 4cl
void pattern_4(int num)
{
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
//patern no 5
void pattern_5(int num)
{
    for(i=1;i<=num;i++)
    {
        for(j=num;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//pattern no 6

void pattern_6(int num)
{
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=(num+1)-i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
void main()
{
    int num=5;
    //@pattern 4 no
    printf("\n");
    printf("4.No pattern:\n");
    printf("\n");
    pattern_4(num);

    //patern 5 no
    printf("\n");
    printf("5.No pattern:\n");
    printf("\n");
    pattern_5(num);

    printf("\n");
    printf("6.No pattern:\n");
    printf("\n");
    pattern_6(num);
}