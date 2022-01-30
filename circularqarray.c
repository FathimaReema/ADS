#include<stdio.h>
#define max 6
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int element)
{
if((front==-1)&&(rear==-1))
{
front=rear=0;
queue[rear]=element;
}
else if((rear+1)%max==front)
{
printf("Queue is overflow..");
}
else
{
rear=(rear+1)%max;
queue[rear]=element;
}
}
int dequeue()
{
if((front==-1)&&(rear==-1))
{
printf("\nUnderflow");
}
else if(front==rear)
{
printf("\nThe dequeue element is %d\n\t",queue[front]);
front=-1;
rear=-1;
}
else
{
printf("\n The dequeued element is %d\n\t",queue[front]);
front=(front+1)%max;
}
}
void Display()
{
int i,front;
if((front==-1)&&(rear==-1))
{
printf("Queue is empty ");
}
else
{
printf("\nElements in a queue are:\n\t");
while(i<=rear)
{
printf("%d \n",queue[i]);
i=(i+1)%max;
}
}
}
int main()
{
int choice=1,x;
while(choice<4&&choice!=0)
{
printf("\n1.Insert an Array\n2.Delete an element\n3.Display the Array\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the element which is to be inserted:");
scanf("%d",&x);
enqueue(x);
break;
case 2:
dequeue();
break;
case 3:
Display();
}
}
return 0;
}
