#include<stdio.h>
int main()
{
    long long int hashmot,oponent;
    while(scanf("%lld %lld",&hashmot,&oponent)!=EOF)
    {
        if(hashmot>oponent)
            printf("%lld\n",hashmot-oponent);
        else
            printf("%lld\n",oponent-hashmot);
    }
    return 0;
}
