#include<stdio.h>
void main(){
   int a[10],b[10],i,c[10],j,r=0,p,q;
   printf("My Name is Apurva Srivastava\n");
   printf("Enter number of  element of set A\n");
   scanf("%d",&p);
   printf("Enter the element of set A \n");
   for(i=0;i<p;i++)
   scanf("%d",&a[i]);
   printf("Enter number of element of set B\n");
   scanf("%d",&q);
   printf("Enter the element of set B \n");
   for(i=0;i<q;i++)
    scanf("%d",&b[i]);
   for(i=0;i<p;i++){
      for(j=0;j<r;j++){
         if(c[j]==a[i])
            break;
       }
       if(j==r){
          c[r]=a[i];
          r++;
       }
    }
   for(i=0;i<q;i++){
      for(j=0;j<r;j++){
         if(c[j]==b[i])
           break;
      }
     if(j==r) {
       c[r]=b[i];
       r++;
     }
   }
   printf("Union of set A and B is:-\n");
    for(i=0;i<r;i++)
      printf("%d ",c[i]);
}
