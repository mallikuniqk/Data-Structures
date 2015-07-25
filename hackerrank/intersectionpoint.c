/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
       
       struct Node *temp1=headA,*temp2=headB;
       int count1=0,count2=0,d;
     
       while(temp1!=NULL)
           {
                count1++;
                temp1=temp1->next;
       }
    while(temp2!=NULL)
           {
                count2++;
                temp2=temp2->next;
       }
     if(count1>count2)
         {
          d=count1-count2;
          while(d--)
              headA=headA->next;
     }
    if(count1<count2)
    {
        d=count2-count1;
         while(d--)
             headB=headB->next;
    }
    while(headA!=NULL)
        {
            if(headA->data==headB->data)
                break;
        headA=headA->next;
        headB=headB->next;
    }
       
     return headA->data;
    
    // Complete this function
    // Do not write the main method. 
}

