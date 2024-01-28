#include <stdio.h>
int main()
{
    int T,i,j,length,temp,swap=0;
    int  A[60];
    while(scanf("%d", &T) != EOF)
    {
        while(T--)
        {
            swap=0;
            scanf("%d", &length);
            for (i=0; i<length; i++)
            {
                scanf("%d", &A[i]);
            }

            for (i=0; i<length; i++)
            {
                for (j=length-1; j>0; j--)
                {
                    if (A[j]<A[j-1])
                    {
                        temp = A[j];
                        A[j] = A[j-1];
                        A[j-1] = temp;
                        swap++;
                    }
                }
            }

            printf("Optimal train swapping takes %d swaps.\n", swap);
        }
    }
    return 0;
}
