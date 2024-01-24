 #include <stdio.h>

int main ()
{
    int i, T, a, b, sum, j;

    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        sum = 0;
        scanf("%d %d", &a, &b);
        for (j=a; j <= b; j++)
            if (j%2 == 1)
                sum += j;
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
