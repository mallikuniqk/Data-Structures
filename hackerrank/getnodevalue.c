int GetNode(Node *head,int positionFromTail)
{
      int count=0;
      Node *temp=head,*temp1=head;
      while(temp!=NULL)
          {
              count++;
              temp=temp->next;
            
      }
    int p=count-positionFromTail;
     while(p!=1)
         {
            temp1=temp1->next;
            p--;
           
           
     }
    return temp1->data;
    
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}

