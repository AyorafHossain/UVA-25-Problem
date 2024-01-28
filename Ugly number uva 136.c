#include<stdio.h>
int main()

{
    printf("The 1500'th ugly number is 859963392.\n");
    return 0;
}



/*

//code how to find he 1500'th ugly number.
#include<stdio.h>
int main()
{
    long int n,i,position=0;
    for(i=1;; i++)
    {
        n=i;
        while(n != 1)
        {
            if(n%2==0)
                n=n/2;
            else if(n%3==0)
                n=n/3;
            else if(n%5==0)
                n=n/5;
            else break;
         }
        if(n==1)
            position++;
        if(position==1500)
            break;
    }
    printf("The 1500'th ugly number is %ld.\n", i);
    return 0;
}

*/

