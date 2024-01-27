#include <stdio.h>
int main ()
{
    long long n;
    int sum,rem;

    while(scanf("%lld", &n))
    {
        if (n == 0)
            break;

        while (n/10!=0)
        {
            sum = 0;
            while (n!= 0)
            {
                rem =n%10;
                sum = sum + rem;
                n /= 10;
            }
            n = sum;
        }
    printf("%lld\n", n);
    }
    return 0;
}
