// 07. Print Prime Number

#include <stdio.h>

int main()
{
    int num, count, n;
    printf("Enter maximum range value : ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Please! enter any positive number : ");
    }
    else
    {
        for(num =1; num<=n; num++)
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
    }

    return 0;
}
