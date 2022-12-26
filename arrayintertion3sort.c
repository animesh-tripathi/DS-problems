#include<stdio.h>
main()
{
    int i,n,a[10],e,p,t;
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
    printf(" after insertion random arranged array is");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
    for (i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            t=a[i+1];
            a[i+1]=a[i];
            a[i]=t;
        }
    }
    printf(" after insertion sorted array is");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }


}

