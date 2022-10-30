SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist)
{
    SinglyLinkedListNode *prev, *cur, *next;

    cur = llist;
    prev = nullptr;
    next = nullptr;

    while(cur != nullptr)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    llist = prev;
    return llist;
}

