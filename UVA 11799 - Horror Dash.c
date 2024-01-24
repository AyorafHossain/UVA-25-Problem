#include <stdio.h>

int main()
{
    int T, i, j, n, max;
   // Input the number of test cases
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        // Input the size of the array
        scanf("%d", &n);
        int a[n];
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        // Find the maximum element in the array
        max = a[0];
        for (j = 1; j < n; j++)
        {
            if (a[j] > max)
                max = a[j];
        }

        printf("Case %d: %d\n", i, max);

    }

    return 0;
}
