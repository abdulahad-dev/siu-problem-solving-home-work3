#include<stdio.h>

int main()
{
    for(int i= 0; i<=20; i++)
    {
        if(i%2 != 0)
        {
            if(i==13)
            {
                continue;
            }
            printf("%d\n", i);
        }

    }
    return 0;
}


