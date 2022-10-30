SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position)
{
    SinglyLinkedListNode *fnode,*prv,*tmp;

    fnode = (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    fnode->data = data;
    fnode->next = nullptr;
    tmp = llist;
    for(int i=1; i<=position-1; i++)
    {
        tmp = tmp->next;

        if(tmp == nullptr)
        {
            break;
        }
    }
    if(tmp!= nullptr)
    {
        fnode->next = tmp->next;
        tmp->next = fnode;
    }
    return llist;
}

