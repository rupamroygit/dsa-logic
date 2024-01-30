#include<stdio.h>
#include<stdlib.h>

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

//pattern no 11 different apporach
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

//pattern no 12
void pattern_12(int num)
{
    for(i=0;i<num;i++)
    {
        //number
        for(j=0;j<=i;j++)
        {
            int nu=j;
            nu++;
            printf("%d ",nu);
        }

        //space
        for(j=0;j<2*(num-i-1);j++)
        {
            printf("  ");
        }

        //number
        for(j=i;j>=0;j--)
        {   
            int nu=j;
            nu++;
            printf("%d ",nu);
        }
        printf("\n");
    }
}
//pattern no 12 different apporach
void pattern_diff_12(int num)
{
    int space=2*(num-1);

    for(i=1;i<=num;i++)
    {
        //number
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }

        //space
        for(j=1;j<=space;j++)
        {
            printf("  ");
        }

        //number
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }

        //next line
        printf("\n");

        space-=2;
    }
}
//pattern no 13
void pattern_13(int num)
{
    int var=1;
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%i ",var);
            var++;
        }
        printf("\n");
    }
}
//pattern no 14
void pattern_14(int num)
{
    for(i=0;i<num;i++)
    {
        int var=65;
        for(j=0;j<=i;j++)
        {
            printf("%c ",var);
            var++;
        }   
        printf("\n");
    }
}
//pattern no 15
void pattern_15(int num)
{
    for(i=0;i<num;i++)
    {
        int var=65;
        for(j=num;j>i;j--)
        {
            printf("%c ",var);
            var++;
        }
        printf("\n");
    }
}
//pattern no 16
void pattern_16(int num)
{
    int var=65;
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",var);
        }
        var++;
        printf("\n");
    }
}
//pattern no 17
void pattern_17(int num)
{
    for(i=0;i<num;i++)
    {
        //space
        for(j=0;j<=num-i-1;j++)
        {
            printf("  ");
        }
        //char
        char var='A';
        int breakpoint=(2*i+1)/2;
        for(j=0;j<2*i+1;j++)
        {
            printf("%c ",var);
            if(j<breakpoint)var++;
            else var--;
        }
        printf("\n");
    }
}
//patten no 18
void pattern_18(int num)
{    
    for(i=0;i<num;i++)
    {
        //here decelare character
        char var='A';
        /*here uppear char and 
        each time decrease the value util the value
        is equale to var*/
        char upper=(var+num-1)-i;
        for(j=0;j<=i;j++)
        {
            printf("%c ",upper);
            upper++;
        }
        printf("\n");
    }
}
//pattern no 19
void pattern_19(int num)
{
    //upper
    for(i=0;i<num;i++)
    {
        //stare
        for(j=0;j<num-i;j++)
        {
            printf("* ");
        }
        //space
        for(j=0;j<2*i;j++)
        {
            printf("  ");
        }
        //stare
        for(j=0;j<num-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    //lower
    for(i=0;i<num;i++)
    {
        //stare
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        //space
        for(j=0;j<2*(num-1-i);j++)
        {
            printf("  ");
        }
        //stare
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
//pattern no 20
void pattern_20(int num)
{
    //upper part
    for(i=0;i<num;i++)
    {
        //stare
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        //space
        for(j=0;j<2*(num-1-i);j++)
        {
            printf("  ");
        }
        //stare
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    //lower part
    for(i=0;i<num-1;i++)
    {
        //stare
        for(j=0;j<num-i-1;j++)
        {
            printf("* ");
        }
        //space
        for(j=0;j<2*i+2;j++)
        {
            printf("  ");
        }
        //stare
        for(j=0;j<num-i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void chose(int num,int input)
{
    switch (num)
    {
        case 0:
        exit(0);
        break;
        case 4:
        // @pattern 4 no
        printf("\n");
        printf("4.No pattern:\n");
        printf("\n");
        pattern_4(input);
        break;
        
        case 5:
        //patern 5 no
        printf("\n");
        printf("5.No pattern:\n");
        printf("\n");
        pattern_5(input);
        break;
        
        case 6:
        //pattern 6 no
        printf("\n");
        printf("6.No pattern:\n");
        printf("\n");
        pattern_6(input);
        break;


        case 7:
        //pattern no 7no
        printf("\n");
        printf("7.No pattern:\n");
        printf("\n");
        pattern_7(input);

        //pattern mo 7 differn approach
        printf("\n");
        printf("7.No pattern:\n");
        printf("\n");
        pattern_7dif(input);
        break;

        case 8:
        //pattern No 8
        printf("\n");
        printf("8.No pattern:\n");
        printf("\n");
        pattern_8(input);
        break;

        case 9:
        //pattern no 9
        printf("\n");
        printf("9.No pattern:\n");
        printf("\n");
        pattern_9(input);
        break;

        case 10:
        //pattern no 10
        printf("\n");
        printf("10.No pattern:\n");
        printf("\n");
        pattern_10(input);

        //pattern no 10 differnt apporach
        printf("\n");
        printf("10.No pattern differnt apporach:\n");
        printf("\n");
        pattern_diff_10(input);
        break;

        case 11:
        //pattern no 11
        printf("\n");
        printf("11.No pattern:\n");
        printf("\n");
        pattern_11(input);

        //pattern no 11 differnt apporach
        printf("\n");
        printf("11.No pattern differnt apporach:\n");
        printf("\n");
        pattern_diff_11(input);
        break;

        case 12:
        //pattern no 12
        printf("\n");
        printf("12.No pattern:\n");
        printf("\n");
        pattern_12(input);

        //pattern no 12 different apporach
        printf("\n");
        printf("12.No pattern different apporach:\n");
        printf("\n");
        pattern_diff_12(input);
        break;

        case 13:
        //pattern no 13
        printf("\n");
        printf("13.No pattern:\n");
        printf("\n");
        pattern_13(input);
        break;

        case 14:
        //pattern no 14
        printf("\n");
        printf("14.No pattern:\n");
        printf("\n");
        pattern_14(input);
        break;

        case 15:
        //pattern no 15
        printf("\n");
        printf("15.No pattern:\n");
        printf("\n");
        pattern_15(input);
        break;

        case 16:
        //pattern no 16
        printf("\n");
        printf("16.No pattern:\n");
        printf("\n");
        pattern_16(input);
        break;

        case 17:
        //pattern no 17
        printf("\n");
        printf("17.No pattern:\n");
        printf("\n");
        pattern_17(input);
        break;

        case 18:
        //pattern no 18
        printf("\n");
        printf("18.No pattern:\n");
        printf("\n");
        pattern_18(input);
        break;

        case 19:
        //pattern no 19
        printf("\n");
        printf("19.No pattern:\n");
        printf("\n");
        pattern_19(input);
        break;

        case 20:
        //pattern no 20
        printf("\n");
        printf("20.No pattern:\n");
        printf("\n");
        pattern_20(input);
        break;

        default:
        printf("*Invalid Input*\n");
        break;
    }
}

void print()
{

    printf("\n**---**--**\n");
    printf("For print pattern 4 press 4\n");
    printf("For print pattern 5 press 5\n");
    printf("For print pattern 6 press 6\n");
    printf("For print pattern 7 press 7\n");
    printf("For print pattern 8 press 8\n");
    printf("For print pattern 9 press 9\n");
    printf("For print pattern 10 press 10\n");
    printf("For print pattern 11 press 11\n");
    printf("For print pattern 12 press 12\n");
    printf("For print pattern 13 press 13\n");
    printf("For print pattern 14 press 14\n");
    printf("For print pattern 15 press 15\n");
    printf("For print pattern 16 press 16\n");
    printf("For print pattern 17 press 17\n");
    printf("For print pattern 18 press 18\n");
    printf("For print pattern 19 press 19\n");
    printf("For print pattern 20 press 20\n");
    // printf("For print pattern 21 press 21\n");
    // printf("For print pattern 22 press 22\n");
    printf("EXIT Enter: 0\n");
    printf("**---**--**\n");
    printf(": ");
}

void main()
{
    int num;
    while(1)
    {
        print();
        scanf("%d",&num);
        chose(num,5);
    }
    
}