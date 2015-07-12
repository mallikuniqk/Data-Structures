#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct tree
{
   int data;
   struct tree *left,*right;
};
struct tree *insert(struct tree *root,int val)
{
 struct tree *temp;
 if(root==NULL)
 {
  temp=(struct tree *)malloc(sizeof(struct tree));
  temp->data=val;
  temp->left=NULL;
  temp->right=NULL;
  root=temp;
  }
  else
  if(val<root->data)
  root->left=insert(root->left,val);
  else if(val>root->data)
  root->right=insert(root->right,val);
  return root;
  }
void printlevel(struct tree *root,int level)
{
   if(root==NULL)
   return;
   if(level==1)
   printf("%d",root->data);
   else
   if(level>1)
   {
     printlevel(root->left,level-1);
     printlevel(root->right,level-1);
 }
}
void printlevelorder(struct tree *root)
{
    if(root==NULL)
    return;
    int h=height(root);
    int i;
    for(i=1;i<=h;i++)
    printlevel(root,i);
}

int maxim(int a,int b)
{
  return (a>b)?a:b;
}
int height(struct tree *root)
{
    if(root==NULL)
    return 1;
    int lh,rh;
    lh=height(root->left);
    rh=height(root->right);
    return  maxim(lh,rh)+1;
}
   
int isbst(struct tree *root)
{
   if(root==NULL)
   return 1;
   if(root->left!=NULL && maxelem(root->left) >root->data)
   return 0;
   if(root->right!=NULL && minelem(root->right) <root->data)
   return 0;
   if(!isbst(root->left) || !isbst(root->right))
   return 0;
   return 1;
}
int maxelem(struct tree *root)
{
    while(root->right!=NULL)
    {
       root=root->right;
    }
   return root->data;
}
int minelem(struct tree *root)
{
   while(root->left!=NULL)
   {
        root=root->left;
     }
return root->data;
}
void inorder(struct tree *root)
{
   if(root!=NULL)
    {
         inorder(root->left);
         printf("%d",root->data);
         inorder(root->right);
     }
 }
  
int main()
{
   struct tree *root=NULL;
   int i,value;
   for(i=10;i>=1;i--)
   root=insert(root,i);
   inorder(root);
   printf("\n Level order traversal");
   printlevelorder(root);
   value=isbst(root);
   if(value)
   printf("It is a bst");
   else
   printf("It is not a bst");

   return 0;
}
      

 



  
  

