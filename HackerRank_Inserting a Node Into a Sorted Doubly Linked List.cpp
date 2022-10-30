DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data)
{
    DoublyLinkedListNode *tmp, *prv, *fnode;
    tmp = llist;
    fnode = (struct DoublyLinkedListNode*)malloc(sizeof(struct DoublyLinkedListNode));
    if(llist->data > data)
    {
        fnode->data = data;
        fnode->next = tmp;
        llist->prev = fnode;
        fnode->prev = nullptr;
        llist = fnode;
        return llist;
    }
    while (tmp!=nullptr)
    {
        if(tmp->data >= data)
        {
            fnode->data = data;
            fnode->next = tmp;
            tmp->prev->next = fnode;
            fnode->prev =  tmp->prev;
            tmp->prev = fnode;
            return llist;
        }

        if(tmp->next==nullptr)
        {
            fnode->data = data;
            tmp->next = fnode;
            fnode->prev = tmp;
            fnode->next = nullptr;
            return llist;
        }
        tmp = tmp->next;
    }
    return llist;
}

