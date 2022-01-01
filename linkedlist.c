#include<stdio.h>
#include<stdlib.h>
struct link_list
{
int data;
struct link_list *next;
};
typedef struct link_list node;
void insert(node *p)
{
node *temp=(node*)malloc(sizeof(node));
if(temp)
{
printf("\nEnter the data:");
scanf("%d",&temp->data);
temp->next=NULL;
if(p->data!=-999)
{
while(p->next)
p=p->next;
p->next=temp;
}
else
p->data=temp->data;
}
else
printf("\nMemory overflow");
}
void Display(node *p)
{
if(p->data!=-999)
{
printf("\nThe list elements are:");
while(p)
{
printf("%d",p->data);
p=p->next;
}
printf("\n");
}
else
printf("\n List is empty\n");
}
node *Delete(node *start)
{
int ele;
node *p,*q;
if(start->data!=-999)
{
printf("\nEnter the element to be deleted:");
scanf("%d",&ele);
if(start->data==ele)
{
p=start;
printf("\nThe element %d is deleted from the list \n",p->data);
if(start->next==NULL)
{
q=(node*)malloc(sizeof(node));
q->data=-999;
q->next=NULL;
free(p);
return q;
}
start=start->next;
free(p);
return start;
}
else
{
p=start;
while(p->next)
{
q=p->next;
if(q->data==ele)
{
p->next=q->next;
printf("\nThe element %d is deleted from the list \n",q->data);
free(q);
return start;
}
p=p->next;
}
printf("\nThe element %d is not present in the list \n",ele);
return start;
}
}
else
printf("\nMemory underflow");
return start;
}
int main()
{
node *start=(node *)malloc(sizeof(node));
start->data=-999;
start->next=NULL;
int ele=1,ch;
while(ele)
{
printf("\n.........MENU.......\n");
printf("\n\t1.Insert\n\t2.Display\n\t3.Delete\n\t4.Exit\n");
printf("\n........\n");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert(start);
break;
case 2:
Display(start);
break;
case 3:
start=Delete(start);
break;
case 4:
ele=0;
break;
default:printf("\nInvalid choice\n");
}
ch=getchar();
}
return 0;
}
