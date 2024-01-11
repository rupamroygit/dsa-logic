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

void pattern_7(int num)
{
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        for(j=1;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pattern_7dif(int num)
{
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pattern_8(int num)
{
    for(i=1;i<=num;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("  ");
        }
        for(j=2*num-1;j>=i*2-1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void main()
{
    int num=5;
    // @pattern 4 no
    printf("\n");
    printf("4.No pattern:\n");
    printf("\n");
    pattern_4(num);

    //patern 5 no
    printf("\n");
    printf("5.No pattern:\n");
    printf("\n");
    pattern_5(num);

    //pattern 6 no
    printf("\n");
    printf("6.No pattern:\n");
    printf("\n");
    pattern_6(num);

    //pattern no 7no
    printf("\n");
    printf("7.No pattern:\n");
    printf("\n");
    pattern_7(num);

    //pattern mo 7 differn approach
    printf("\n");
    printf("7.No pattern:\n");
    printf("\n");
    pattern_7dif(num);

    //pattern No 8
    printf("\n");
    printf("8.No pattern:\n");
    printf("\n");
    pattern_8(num);
}