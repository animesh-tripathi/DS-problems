#include<stdio.h>
main()
{
    int i,n,a[10];
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter the array\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
printf("entered array\n");
     for(i=0;i<n;i++)
     {
         printf("%d\n",a[i]);
     }


}
