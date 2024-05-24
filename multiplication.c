//05. Print Multiplication Table of 3

#include<stdio.h>

int main()
{
    int number=3;
    printf("Multiplication Table of 3 : \n\n");

    for(int i=1; i<=10; i++)
    {
        int sum= i * number;
        printf("%d X %d = %d\n", number, i, sum);
    }

    return 0;
}





