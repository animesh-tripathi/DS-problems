include<stdio.h>
void main()
{
    int a[5],b[5],c[30],i,j,k=0,p,q,l;
    printf("My Name is Ananya Singh\n");
    printf("Enter the number of element of set A\n");
    scanf("%d",&p);
    printf("Enter the elements of set A\n");
    for(i=0;i<p;i++)
    scanf("%d",&a[i]);
    printf("Enter the number of element of set B\n");
    scanf("%d",&q);
    printf("Enter the element of set B \n");
    for(i=0;i<q;i++)
    scanf("%d",&b[i]);
    printf("{");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
             if(b[j]==a[i])
             break;
        }
        if(j==q)
        {
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }
        }
    for(i=0;i<k;i++)
    printf("%d,",c[i]);
    printf("}");
     printf("\n");

}
