bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{
    SinglyLinkedListNode *tmp1, *tmp2;

    tmp1 = head1;
    tmp2 = head2;

    while (tmp1!=nullptr || tmp2!=nullptr)
    {

        if(tmp1 == nullptr && tmp2 == nullptr)
        {
            return true;
        }
        else if(tmp1 == nullptr || tmp2 == nullptr)
        {
            return false;
        }

        else if(tmp1->data != tmp2->data )
        {
            return false;
        }
        else if(tmp1->data == tmp2->data )
        {
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }

    }
    return true;
}
