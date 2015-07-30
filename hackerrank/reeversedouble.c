Node* Reverse(Node* head)
{
     if(head== NULL)
         return NULL;
     Node *temp,*current=head;
     while (current->next !=  NULL)
     {
       temp = current->next;
       current->next = current->prev;
       current->prev = temp;              
       current = current->prev;
     }  
    current->next=current->prev;
    current->prev=NULL;
    return current;
    
    
    // Complete this function
    // Do not write the main method. 
}
