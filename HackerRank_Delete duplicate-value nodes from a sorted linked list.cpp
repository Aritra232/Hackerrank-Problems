SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist)
{
    SinglyLinkedListNode *tmp;
    if(llist == nullptr)
    {
        return llist;
    }
    else
    {
        tmp = llist;

        while(tmp->next!=nullptr)
        {

            if(tmp->data == tmp->next->data)
            {
                tmp->next = tmp->next->next;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        return llist;
    }
}

