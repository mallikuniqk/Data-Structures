Node* InsertNth(Node *head, int data, int position)
{ 
 
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    Node *temp = head;
    if(position == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        for(int i = 1; i < position; i++)
            temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}
