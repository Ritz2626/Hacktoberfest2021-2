#include<stdio.h>
int a[20];
void main()
{

    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int x=0;x<n-1;x++)
    {
        for(int y=0;y<n-x-1;y++)
        {
            if(a[y]>a[y+1])
            {
                int t=a[y];
                a[y]=a[y+1];
                a[y+1]=t;
            }
        }
    }
    printf("The sorted array is-\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ba[i]);
    }

}
