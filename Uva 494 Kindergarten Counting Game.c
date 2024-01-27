#include<stdio.h>
int main()
{
    char ch, str[1000];
    while (gets(str))
    {
        int i = 0, word = 0;


        while ((ch = str[i]) != '\0')
        {
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            {

                if (i == 0 || !((str[i - 1] >= 'A' && str[i - 1] <= 'Z') || (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
                {
                    word++;
                }
            }
            i++;
        }

        printf("%d\n", word);
    }
    return 0;
}
