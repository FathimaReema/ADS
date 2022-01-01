#include<stdio.h>
void main()
{
int a[100],pos,i,n;
printf("Enter limit:");
scanf("%d",&n);
printf("Enter %d elements \n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter position to delete\n");
scanf("%d",&pos);
if(pos>=n+1)
printf("Deletion is not possible");
else
{
for(i=pos-1;i<n-1;i++)
a[i]=a[i+1];
printf("Resultant array: \t\n ");
for(i=0;i<n-1;i++)
printf(" %d\t\n",a[i]);
}
}
