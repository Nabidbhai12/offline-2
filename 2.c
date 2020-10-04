#include<stdio.h>
int f1(int num)
{
    int sum=0;
    for(int a=2;a*a<=num;a++)
    {
        if(num%a==0)
          {

            sum+=a;
        if(num/a!=a)
            sum+=(num/a);
          }
    }
    return (sum+1)==num;
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int a=2;a<=n;a++)
    {
        if(f1(a))
            sum+=a;
    }
    printf("%d\n",sum);

}
