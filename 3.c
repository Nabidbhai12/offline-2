#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int a=0;a<n;a++)
        scanf("%d",&arr[a]);
    int max=arr[0];
    for(int a=0;a<n;a++)
    {
        if(arr[a]>max)
            max=arr[a];

    }
    for(int l=0;l<max;l++)
    {

        for(int j=0;j<n;j++)
        {
            if(max-l<=arr[j])
                printf("**");
                else
                    printf("  ");
            printf(" ");
        }
        printf("\n");
    }

}
