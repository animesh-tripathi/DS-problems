#include<stdio.h>
main()
{
    int i,n,a[10],e,p;
    printf("enter n");
    scanf("%d",&n);
    printf("enter the array");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position (index) and element to be inserted");
    scanf("%d %d",&p,&e);



    for(i=n;i>p;i--)
    {
        a[i]=a[i-1];


    }
     a[p]=e;
    printf("resultant array is");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }

}

