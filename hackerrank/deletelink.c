Node* Delete(Node *head, int position)
{
     Node *temp=head,*prev=NULL;
     if(position==0)
         {
             head=head->next;
             free(temp);
             return head;
     }
     
     
     prev=new Node();
     int i;
     for(i=1;i<=position;i++)
         {
         prev=temp;
         temp=temp->next;     
  // Complete this method
}
    prev->next=temp->next;
    free(temp);
    return head;
}

