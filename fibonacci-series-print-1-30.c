// 09. Print the Fibonacci Series from 1-30

#include<stdio.h>

int main()
{
    int first =0, second=1, count, fibo, n=30;
    printf("Fibonacci Series from 1-30 is : \n\n");

    while(count <n)
    {
        if(count <=1)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ", fibo);
        count++;
    }

    return 0;
}



