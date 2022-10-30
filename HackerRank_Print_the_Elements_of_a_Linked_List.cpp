void printLinkedList(SinglyLinkedListNode* head)
{
    SinglyLinkedListNode *tmp;
    tmp = head;
    while (tmp!=nullptr)
    {
        cout<< tmp->data<<endl ;

        tmp = tmp->next;
    }

}
