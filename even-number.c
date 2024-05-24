//03. Print Even Numbers from 1 to 20

#include<stdio.h>

int main()
{
    for(int i= 0; i<=20; i++)
    {
        if(i%2 == 0 && i!=0)
        {
            printf("%d\n", i);
        }

    }
    return 0;
}

