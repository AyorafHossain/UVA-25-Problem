#include <stdio.h>
int main()
{
    long long n, rev,rem, temp, count, t;
    while(scanf("%lld", &t) !=EOF)
    {
        while(t--)
        {
            count=0;
            scanf("%lld", &n);
            while(1)
            {
                temp=n;
                rev=0;
                while(n!=0)
                {
                    rem=n%10;
                    rev=rev*10+rem;
                    n=n/10;
                }
                if(rev==temp)
                {
                    printf("%lld %lld\n", count, rev);
                    break;
                }
                else
                    n=temp+rev;
                count++;
            }
        }
    }
    return 0;
}

