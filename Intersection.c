#include<stdio.h>
int main()
{
    int a[5],b[6],c[30],p,q,r=0,i,j;
    printf("My Name is Apurva Srivastava\n");
    printf("Enter number of element of set A\n");
    scanf("%d",&p);
    printf("Enter elements of set A\n");
    for(i=0;i<p;i++)
    scanf("%d",&a[i]);
    printf("Enter number of element of set B\n");
    scanf("%d",&q);
    printf("Enter elements of set B\n");
    for( i=0;i<q;i++)
    scanf("%d",&b[i]);
    for( i=0;i<p;i++){
         for(j=0;j<q;j++){
            if(a[i]==b[j]){
                c[r]=a[i];
                r++;
            }
         }
    }
    printf("intersection of set A and set B is:-\n");
    for(i=0;i<r;i++)
    printf("%d ",c[i]);
    return 0;
}
}
