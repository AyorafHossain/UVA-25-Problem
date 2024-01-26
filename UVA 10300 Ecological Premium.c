/*t=test case
    f=number of farmer
    a=the size of the farmyard
    b=the number of animals
    c=farmers environment-friendliness.
    */
#include<stdio.h>
int main()
{
long long  t,f,a,b,c,i,j,sum;
while(scanf("%lld",&t)!=EOF)
    {
    for(i=0;i<t;i++)
        {
        sum=0;
        scanf("%lld",&f);
        for(j=0;j<f;j++)
            {
            scanf("%lld %lld %lld",&a,&b,&c);
            sum+=a*c;
            }
        printf("%lld\n",sum);
        }
    }
return 0;
}
