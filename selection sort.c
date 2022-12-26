#include <stdio.h>
void main()
{
int n,i,j,temp,min;
printf("enter the size of an array\n");
scanf("%d",&n);
int arr[n];
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(arr[j]<arr[min])
min=j;
}
temp=arr[min];
arr[min]=arr[i];
arr[i]=temp;
}
printf("sorted array is\n");
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
}

