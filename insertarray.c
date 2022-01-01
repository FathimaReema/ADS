#include<stdio.h>
int main()
{
int s[40],pos,i,n,value;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter %d elements :\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
printf("Enter position to insert:");
scanf("%d",&pos);
printf("Enter value to insert:");
scanf("%d",&value);
for(i=n-1;i>=pos;i--)
s[i+1]=s[i];
s[pos-1]=value;
printf("Final Array.\n");
for(i=0;i<=n;i++)
printf("%d\n",s[i]);
return 0;
}
