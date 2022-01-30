#include<stdio.h>
#include<stdlib.h>
#define n 10
void push();
void pop();
void display();
int stack[n],top=-1;
void main()
{
int ch;
do
{
printf("..........MENU.......\n1.push\n2.pop\n3.display\n4.exit\n");
printf("Enter ur choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
default:
printf("invalid choice");
}
}
while(ch!=0);
}
void push()
{
int x;
printf("Enter element to insert:");
scanf("%d",&x);
if(top==n-1)
{
printf("Stack overflow");
}
else
{
top++;
stack[top]=x;
}
}
void pop()
{
int item;
if(top==-1)
{
printf("Stack underflow");
}
else
{
item=stack[top];
top--;
}
}
void display()
{
int i;
printf("Stack element are:");
if(top!=-1)
{
for(i=top;i>=0;i--)
printf("%d",stack[i]);
}
else
{
printf("Stack empty");
}
}


