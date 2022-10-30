SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data)
{
    SinglyLinkedListNode *fnode ;

    fnode = (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    fnode->data = data;
    fnode->next = llist;
    llist= fnode;
    return llist;
}
