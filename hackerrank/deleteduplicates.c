/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    
     if(head==NULL)
         return NULL;
      if(head->next==NULL)
          return head;
     struct Node *current=head,*temp;
     while(current->next!=NULL)
         {
            if(current->data==current->next->data)
                {
                   temp=current->next->next;
                   current->next=temp;
            }
         else
             {
               current=current->next;
         }
     }
    return head;
     
    
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}

