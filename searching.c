#include<stdio.h>
void main()
{
int i,search,a[200],n,found;
printf("Enter size of array:");
scanf("%d",&n);
printf("Array elements are:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter elements to search:");
scanf("%d",&search);
found=0;
for(i=0;i<n;i++)
{
if(a[i]==search)
{
found=1;
break;
}
}
if(found==1)
{
printf("Element %d found at position %d",search,i+1);
}
else
{
printf("Element not found");
}
}
