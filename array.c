#include<stdio.h>
void main()
{
int a[0],n,i,k,f;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elements to be searched\n");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("elements is present at position %d\n",i);
break;
}
}
if(i==n)
{
printf("elements is not present\n");
}
}
