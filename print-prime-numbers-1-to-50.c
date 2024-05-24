// 08. Print Prime numbers from 1-50

#include <stdio.h>

int main()
{
    int num, count;
    printf("Prime numbers from 1-50 is : \n\n");

    for(num =1; num<=50; num++)
    {
        count = 0;
        for(int i=2; i<=num / 2; i++)
        {
            if(num % i ==0)
            {
                count++;
                break;
            }
        }
        if(count == 0 && num !=1)
        {
            printf("%d ", num);
        }
    }

    return 0;
}

