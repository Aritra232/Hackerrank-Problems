int getNode(SinglyLinkedListNode* llist, int positionFromTail)
{
    SinglyLinkedListNode *tmp1, *tmp2;
    int a = 0;
    tmp1 = llist;
    tmp2 = llist;

    while(tmp2->next!=nullptr)
    {
        tmp2 = tmp2->next;
        if(a < positionFromTail)
        {
            a++;
        }
        else if(positionFromTail <= a)
        {
            tmp1 = tmp1->next;
        }
    }
    return tmp1->data;
}
