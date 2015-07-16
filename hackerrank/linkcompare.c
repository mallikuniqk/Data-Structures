int CompareLists(Node *headA, Node* headB)
{
       int counta=0,countb=0;
       if(headA==NULL && headB==NULL)
          return 1;
     while(headA!=NULL && headB!=NULL)
         {
             if(headA->data!=headB->data)
                return 0;
             headA=headA->next;
             headB=headB->next;
             if(headA!=NULL)
             counta++;
             if(headB!=NULL)
             countb++;
     }
    if(counta==countb)
    return 1;
    return 0;
         
  // This is a "method-only" submission. 
  // You only need to complete this method 
}

