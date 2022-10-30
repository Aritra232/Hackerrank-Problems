SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data)
{

    SinglyLinkedListNode *tmp, *fnode;
    fnode = (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));

    fnode->data = data;
    fnode->next = nullptr;

    tmp = head;
    if(tmp==nullptr)
    {
        return fnode;
    }
    while(tmp->next != nullptr)
    {
        tmp = tmp->next;
    }
    tmp->next = fnode;
    return head;
}

