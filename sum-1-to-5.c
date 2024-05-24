//04. Print Sum of Numbers from 1 to 5

#include<stdio.h>

int main()
{
    int sum=0;
    for(int i=1; i<=5; i++)
    {
        sum = sum + i;
    }
    printf("Sum is : %d\n", sum);

    return 0;
}
