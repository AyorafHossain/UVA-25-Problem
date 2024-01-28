#include <stdio.h>
int main()
{
    int n, m, i, j, x = 0;

    while (scanf("%d %d", &n, &m) == 2)
    {
        x++;

        if (n == 0 && m == 0)
            break;

        if (x > 1)
            printf("\n");

        char a[n][m];

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
                scanf(" %c", &a[i][j]);
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (a[i][j] == '.')
                    a[i][j] = '0';
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (a[i][j] == '*')
                {
                    if ((j + 1) < m && a[i][j + 1] != '*')
                        a[i][j + 1]++;
                    if ((i + 1) < n && (j + 1) < m && a[i + 1][j + 1] != '*')
                        a[i + 1][j + 1]++;
                    if ((i + 1) < n && a[i + 1][j] != '*')
                        a[i + 1][j]++;
                    if ((i + 1) < n && (j - 1) >= 0 && a[i + 1][j - 1] != '*')
                        a[i + 1][j - 1]++;
                    if ((j - 1) >= 0 && a[i][j - 1] != '*')
                        a[i][j - 1]++;
                    if ((i - 1) >= 0 && (j - 1) >= 0 && a[i - 1][j - 1] != '*')
                        a[i - 1][j - 1]++;
                    if ((i - 1) >= 0 && a[i - 1][j] != '*')
                        a[i - 1][j]++;
                    if ((i - 1) >= 0 && (j + 1) < m && a[i - 1][j + 1] != '*')
                        a[i - 1][j + 1]++;
                }
            }
        }

        printf("Field #%d:\n", x);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
                printf("%c", a[i][j]);
            printf("\n");
        }
    }

    return 0;
}
