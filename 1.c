#include<stdio.h>
int f1(int arr[],int len)
{
    int max=arr[0],idx=0;
    for(int a=0;a<=len;a++)
    {
        if(max<arr[a])
        {
            max=arr[a];
            idx=a;
        }
     }
        if(idx>10000)
        printf("MOST FREQUENT NUM IS = %d\n",(-idx+10000));
        else
        printf("MOST FREQUENT NUM IS = %d\n",idx);


    for(int a=0;a<=len;a++)
    {
        if(max==arr[a] && idx!=a){
                if(a>10000)
                printf("MOST FREQUENT NUM IS = %d\n",(10000-a));
                else
                printf("MOST FREQUENT NUM IS = %d\n",a);
                                }
    }
}
int main()
{
    int n,num;
        int arr[21000]={0};

    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        scanf("%d",&num);
        if(num<0)
            arr[-num+10000]=arr[-num+10000]+1;
        arr[num]+=1;
        f1(arr,21000);
    }
}
