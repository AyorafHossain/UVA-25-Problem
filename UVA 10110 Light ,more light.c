#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int n;
    unsigned int a;

    while(1)
    {
        scanf("%u",&n);
        if(n==0)
            break;

        a=sqrt(n);

        if(n==a*a)
            printf("yes\n");
        else
         printf("no\n");
    }

    return 0;
}

