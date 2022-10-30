void display(SinglyLinkedListNode *llist)
{
    SinglyLinkedListNode *tmp;
    tmp = llist;
    while (tmp!=nullptr)
    {
        cout<< tmp->data<< endl;
        tmp = tmp->next;
    }
}

void reversePrint(SinglyLinkedListNode* llist)
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
    display(llist);
}
