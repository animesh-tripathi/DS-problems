#include <stdio.h>
int main()
{
int a[50], pos, i, n, value;
printf("Enter size of array");
scanf("%d", &n);
printf("Enter array elements", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
printf("Please enter the location where you want to insert an new element\n");
scanf("%d", &pos);
printf("Please enter the value\n");
scanf("%d", &value);
for (i = n - 1; i>= pos - 1; i--)
a[i+1] = a[i];
a[pos-1] = value;
printf("Resultant array is\n");
for (i = 0; i <= n; i++)
printf("%d\n", a[i]);
return 0;
}

