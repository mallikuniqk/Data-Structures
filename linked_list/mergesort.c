#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*plink;
void create(struct node *plink);
void insert(struct node *plink);
void delete(struct node *plink);
void display(struct node *plink);
void mergesort(struct node **plink);
void splitlist(struct node *source,struct node **frontref,struct node **backref);
struct node *mergelist(struct node *a,struct node *b);
main()
{
int choice;
struct node *head;
head=(struct node*)malloc(sizeof(struct node));
do
{
printf("\n Linked list implementation");
printf("\n 1.Create 2.Insert 3.Delete 4.Display 5.Exit 6.MergeSort");
printf("\n Enter choice");
scanf("%d",&choice);
switch(choice)
{
case 1:create(head);
break;
case 2:
insert(head);
break;
case 3:
delete(head);
break;
case 4:
display(head);
break;
case 5:printf("\n Exit");
break;
case 6:printf("\n Merge sort");
mergesort(&head);
break;
default:
printf("\n Invalid option");
}
}while(choice!=5);
}
void create(struct node *plink)
{
int num,flag;
char ch;

printf("\n Enter data");
scanf("%d",&num);
plink->data=num;
printf("Do you want to continue?(0/1)");
scanf("%d",&flag);
if(flag==0)
{
   plink->next=NULL;
}
else
{
 
plink->next=(struct node*)malloc(sizeof(struct node));
create(plink->next);
}
}
struct node *mergelist(struct node *a,struct node *b)
{
   struct node *result;
   if(a==NULL)
   return b;
   if(b==NULL)
   return a;
   if(a->data<=b->data)  
   {
      result=a;
      result->next=mergelist(a->next,b);
  }
else
  {
    
     result=b;
     result->next=mergelist(a,b->next);
}
return result;
}
   
void insert(struct node *plink)
{
struct node *temp;
int after,n;
printf("\n After which node");
scanf("%d",&after);
while(plink->data!=after)
{
plink=plink->next;
}

temp=plink->next;
plink->next=(struct node*)malloc(sizeof(struct node));
printf("\n Enter node no.");
scanf("%d",&n);
plink=plink->next;
plink->data=n;
plink->next=temp;
}
void splitlist(struct node *source,struct node **frontref,struct node **backref)
{
    struct node *slow,*fast;
    if(source==NULL || source->next==NULL)
    return;
    slow=source;
    fast=source->next;
    while(fast!=NULL)
    {
         fast=fast->next;
         if(fast!=NULL)
         {
                slow=slow->next;
                fast=fast->next;
        }
}
*frontref=source;
*backref=slow->next;
slow->next=NULL;
}
    

void delete(struct node *plink)
{
struct node *temp;
int n;
printf("\n Delete which node");
scanf("%d",&n);
while(plink->data!=n)
{
 temp=plink;
 plink=plink->next;
 }
 if(plink->next!=NULL)
 {
 temp->next=plink->next;
 free(plink);
 }
 else
 {
temp->next=NULL;
free(plink);
 }
 }
void display(struct node *plink)
{
while(plink!=NULL)
{
printf(" %d->",plink->data);
plink=plink->next;
}
}
void mergesort(struct node **headref)
{
   struct node *a,*b;
   struct node *head=*headref;
   if(head==NULL || head->next==NULL)
   return;
   splitlist(head,&a,&b);
   mergesort(&a);
   mergesort(&b);
  *headref=mergelist(a,b);
}

