#include <stdio.h>
int main ()
{
    int i;
    char a[2000], n;

    while(scanf("%s", a) != EOF)
    {
        scanf("%c", &n);
        for (i=0; a[i] != 0; i++)
            a[i] -= 7;

        printf("%s\n", a);
    }
    return 0;
}
