SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position)
{
    SinglyLinkedListNode *prenode, *dltnode, *en;
    prenode = head;
    en = head;
    if(position == 0)
    {
        prenode = head;
        head = prenode->next;
        prenode->next = nullptr;
        delete(prenode);
        return head;
    }
    if(position == 1)
    {
        en = prenode->next;
        prenode->next = en->next;
        en->next = nullptr;
        delete(en);
        return head;
    }
    else
    {
        dltnode = head;

        for(int i=1; i<=position; i++)
        {
            prenode = dltnode;
            dltnode = dltnode->next;

            if(dltnode == NULL)
            {
                break;
            }
        }
        if(dltnode != NULL)
        {
            if(dltnode == head)
            {
                head = head->next;
            }
            else
            {
                prenode->next = dltnode->next;
                dltnode->next = nullptr;
                delete(dltnode);
            }
        }
        return head;
    }
}
