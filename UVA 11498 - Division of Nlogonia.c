#include<stdio.h>
int main()
{
    int x,y,m,n,T;
    while(scanf("%d", &T) !=  EOF)
    {
        scanf("%d %d", &x, &y);
        while(T--)
        {
            scanf("%d %d", &m, &n);
            if(m==x || n==y)
            {
                printf("divisa\n");
            }
            else if((m-x)>0 && (n-y)>0)
            {
                printf("NE\n");
            }
            else if((m-x)<0 && (n-y)>0)
            {
                printf("NO\n");
            }
            else if((m-x)<0 && (n-y)<0)
            {
                printf("SO\n");
            }
            else if((m-x)>0 && (n-y)<0)
            {
                printf("SE\n");
            }
        }
    }
    return 0;
}
