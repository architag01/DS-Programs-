Write a menu driven program of a linear linked list with functions: insertion at the
beginning, deletion at the end, insertion between two nodes, deletion of first node, deletion
of last node, deletion of a node whose position is given, deletion of any node and
display[without taking global variables].
#include<stdio.h>
#include<conio.h>
#include<stdlib.h> struct
node
{ int data; struct
node *next;
}*start=NULL,*q,*t;
void insert_beg();
void insert_end();
int insert_pos();
void display();
void delete_beg();
void delete_end();
int delete_pos();
int main() { int
ch;
while(1)
{
83
printf("1.Insert 2.Display 3.Delete 4.Exit ");
printf(" Enter your choice(1-4):"); scanf("%d",&ch);
switch(ch)
{ case
1:
printf("\n---- Insert Menu ----"); printf("\n1.Insert at beginning\n2.Insert
atend\n3.Insert at specified position\n4.Exit"); printf("\nEnter your choice(1-4):");
scanf("%d",&ch); switch(ch)
{
case 1: insert_beg(); break; case
2: insert_end(); break; case 3:
insert_pos(); break; case 4:
exit(0); default: printf("Wrong
Choice!!");
}
break; case 2: display(); break; case 3:
printf("\n---- Delete Menu ----");
printf("\n1.Delete from beginning\n2.Delete fromend\n3.Delete from specified
position\n4.Exit"); printf("\nEnter your choice(1-4):"); scanf("%d",&ch);
switch(ch)
{
case 1: delete_beg(); break; case
2: delete_end(); break; case 3:
delete_pos(); break; case 4:
exit(0); default: printf("Wrong
Choice!!");
84
}
break; case 4: exit(0); default:
printf("Wrong Choice!!");
} } return 0; } void insert_beg() { int
num; t=(struct node*)malloc(sizeof(struct
node)); printf("Enter data:");
scanf("%d",&num); t-
>data=num; if(start==NULL)
{
t->next=NULL;
start=t;
} else
{
t->next=start; start=t; } } void
insert_end() { int num; t=(struct
node*)malloc(sizeof(struct node));
printf("Enter data:");
scanf("%d",&num); t-
>data=num; t->next=NULL;
if(start==NULL)
{
start=t;
} else
{
q=start;
85
while(q->next!=NULL)
q=q->next; q->next=t;
} } int
insert_pos() {
int pos,i,num;
if(start==NULL)
{ printf("List is
empty!!"); return 0; }
t=(struct node*)malloc(sizeof(struct node));
printf("Enter data:");
scanf("%d",&num);
printf("Enter position to insert:");
scanf("%d",&pos); t-
>data=num;
q=start; for(i=1;i<pos1;i++)
{
if(q->next==NULL)
{
printf("There are less elements!!");
return 0;
}
q=q->next; }
t->next=q->next;
86
q->next=t;
return 0; }
void display()
{
if(start==NULL)
{ printf("List is empty!!");
} else { q=start;
printf("The linked list is:\n");
while(q!=NULL)
{
printf("%d ",q->data); q=q-
>next;
}
} } void
delete_beg() {
if(start==NULL)
{
printf("The list is empty!!");
} else
{ q=start; start=start->next;
printf("Deleted element is %d",q->data);
free(q); } } void
delete_end() {
if(start==NULL)
87
{ printf("The list is
empty!!");
} else
{
q=start;
while(q->next->next!=NULL)
q=q->next; t=q->next;
q->next=NULL;
printf("Deleted element is %d",t->data);
free(t); } } int
delete_pos() {
int pos,i;
if(start==NUL
L)
{ printf("List is empty!!"); return
0; } printf("Enter position to
delete:");
scanf("%d",&pos);
q=start; for(i=1;i<pos1;i++)
{
if(q->next==NULL)
{
printf("There are less elements!!");
return 0;
88
}
q=q->next;
}
t=q->next; q->next=t->next;
printf("Deleted element is %d",t->data);
free(t);
return 0; }
