SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{

    SinglyLinkedListNode *head, *tmp;
    if(head1==nullptr)
    {
        return head2;
    }
    if(head1==nullptr)
    {
        return head1;
    }

    head = (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    head->data = head2->data;
    head->next = head2->next;

    tmp = nullptr;
    if(head1->data < head2->data)
    {
        head->data = head1->data;
        head1 = head1->next;
    }
    else
    {
        head2 = head2->next;
    }

    tmp = head;
    while(head1!=nullptr && head2!=nullptr )
    {
        if(head1->data > head2->data)
        {
            tmp->next = head2;

            head2 = head2->next;
            tmp = tmp->next;
        }
        else
        {
            tmp->next = head1;

            head1 = head1->next;
            tmp = tmp->next;
        }

    }
    if(head2==nullptr)
    {
        tmp->next = head1;
    }
    else if(head1==nullptr)
    {
        tmp->next = head2;
    }
    return head;
}

