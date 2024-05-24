//06. Print Sum of Natural Numbers

#include<stdio.h>

int main()
{
    int n, sum=0;

    printf("Enter a positive integer number: ");
    scanf("%d", &n);

    if(n <=0)
    {
        printf("Please enter a positive integer number and without Zero.\n");
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            sum = sum + i;
        }
        printf("Sum of Natural Numbers is : %d\n", sum);
    }

    return 0;
}
