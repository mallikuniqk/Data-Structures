/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
     struct Node *fast=head->next,*slow=head;
    if(head==NULL || head->next==NULL)
        return 0;
     while(fast!=NULL)
         {
            fast=fast->next;
            if(fast!=NULL)
                {
                    slow=slow->next;
                    fast=fast->next;
            }
             if(fast==slow)
                 return 1;
     }
    return 0;
   // Complete this function
   // Do not write the main method
}
