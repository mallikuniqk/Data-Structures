Node* MergeLists(Node *headA, Node* headB)
{
       Node *merge=new Node();
       merge->next=new Node();
       Node *temp=merge;
  
       while(headA!=NULL && headB!=NULL)
           {
               
               
            
               if(headA->data <= headB->data)
                {
                    merge->data=headA->data;
                    headA=headA->next;
                    
               }
             else
                 {
                 merge->data=headB->data;
                 headB=headB->next;
             }
                 merge->next=new Node();
                 merge=merge->next;
                 
       }
    
    if(headA==NULL)
      {
         while(1)
    
                {
                
                merge->data=headB->data;
                headB=headB->next;
                if(headB==NULL)
                     {
                            merge->next=NULL;
                            break;
                }
                merge->next=new Node();
                merge=merge->next;
                
         }
       
         
             
    }
                 
    else
        if(headB==NULL)
        {
           while(1)
    
                {
                
                merge->data=headA->data;
                headA=headA->next;
               if(headA==NULL)
                   {
                      merge->next=NULL;
                      break;
               }
                merge->next=new Node();
                merge=merge->next;
                
         }
        
         
        
    }
    return temp;
