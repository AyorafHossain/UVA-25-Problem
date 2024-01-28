#include<stdio.h>
int main()
{
    char characters;
    int count=0;
    while (scanf("%c", &characters) != EOF)
    {
        if(characters=='"')
        {
            count++;
            if(count%2!=0)
            {
                printf("``");
            }
            else if(count%2==0)
            {
                printf("''");
            }
        }
        else
        {
            printf("%c",characters);
        }
    }
    getch( );
}
