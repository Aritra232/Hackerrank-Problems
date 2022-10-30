int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{
    SinglyLinkedListNode *tmp1, *tmp2;

    tmp1 = head1;
    tmp2 = head2;

    while(tmp1 != tmp2)
    {
        if(tmp1 != nullptr)
        {
            tmp1 = tmp1->next;
        }
        if(tmp2 != nullptr)
        {
            tmp2 = tmp2->next;
        }

        if (tmp1 == nullptr)
        {
            tmp1 = head1;
        }

        if (tmp2 == nullptr)
        {
            tmp2 = head2;
        }
    }
    return tmp2->data;
}
