#include <stdio.h>
void main()
{
int a[10],i,n,p,s,t;
printf(" enter array size");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(p=0;p<n-1;p++)
{
for(s=0;s<n-p-1;s++)
if(a[s]>a[s+1])
{
t=a[s];
a[s]=a[s+1];
a[s+1]=t;
}
}
printf("sorted array \n");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
