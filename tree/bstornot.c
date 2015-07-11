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
   for(i=1;i<=10;i++)
   root=insert(root,i);
   inorder(root);
   value=isbst(root);
   if(value)
   printf("It is a bst");
   else
   printf("It is not a bst");
   return 0;
}
      

 



  
  

