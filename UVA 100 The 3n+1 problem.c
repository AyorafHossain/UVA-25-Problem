#include <stdio.h>
int main ()
{
    long i, j, n, count, temp, max, a, x, y;

    while (scanf("%ld %ld", &i, &j) != EOF)
    {
        max = 0;
        x= i;
        y = j;

        if (i > j)
        {
            temp = i;
            i = j;
            j = temp;
        }
        for (a = i; a <= j; a++)
        {
            n = a;
            count = 1;
            while (n != 1)
            {
                if (n % 2 == 1)
                {
                    n = 3*n+ 1;
                }
                else
                {
                    n /= 2;
                }
                count++;
            }
            if (count > max)
                max = count;
        }
        printf("%ld %ld %ld\n", x, y, max);
    }
    return 0;
}
