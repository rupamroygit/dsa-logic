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

//pattern no 7
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

//pattern no 7 differn apporach
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

//pattern no 8
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

//pattern no 9
void pattern_9(int num)
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

//patern no 10
void pattern_10(int num)
{
    for(i=1;i<=2*num-1;i++)
    {
        if(i<=num)
        {
            for(j=1;j<=i;j++)
            {
                printf("* ");
            }
        
        }
        else
        {
            for(j=1;j<=2*num-i;j++)
            {
                printf("* ");   
            }
        }
        printf("\n");
    }
}

//patern no 10
void pattern_diff_10(int num)
{
    for(i=1;i<=2*num-1;i++)
    {
        int stars=i;
        if(i>=num) stars=2*num-i;
        for(j=1;j<=stars;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// pattern no 11
void pattern_11(int num)
{
     for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            if((i+j)%2==0){
              //  printf("Even:%i",j);
                printf("1 ");
            }else{
               // printf("Odd:%i",j);
                printf("0 ");
            }
        }
        printf("\n");
    }
}

//pattern no 12
void pattern_diff_11(int num)
{   
    int start=1;
    for(i=0;i<num;i++)
    {
        if(i%2==0) start=1;
        else start=0;
        for(j=0;j<=i;j++)
        {
            printf("%d ",start);
            start=1-start;
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

    //pattern no 9
    printf("\n");
    printf("9.No pattern:\n");
    printf("\n");
    pattern_9(num);

    //pattern no 10
    printf("\n");
    printf("10.No pattern:\n");
    printf("\n");
    pattern_10(num);

    //pattern no 10 differnt apporach
    printf("\n");
    printf("10.No pattern differnt apporach:\n");
    printf("\n");
    pattern_diff_10(num);

    //pattern no 11
    printf("\n");
    printf("11.No pattern:\n");
    printf("\n");
    pattern_11(num);

    //pattern no 11 differnt apporach
    printf("\n");
    printf("11.No pattern differnt apporach:\n");
    printf("\n");
    pattern_diff_11(num);

}