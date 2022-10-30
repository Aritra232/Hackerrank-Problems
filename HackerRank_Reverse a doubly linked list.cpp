DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist)
{
    DoublyLinkedListNode *prev, *cur, *next,*tmp;
    cur = llist;
    tmp = nullptr;
    next = nullptr;

    while(cur != nullptr)
    {
        next = cur->next;
        cur->next = tmp;
        cur->prev = next;
        tmp = cur;
        cur = next;
    }
    llist = tmp;
    return llist;
}

