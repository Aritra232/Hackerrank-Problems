Node *insert(Node * root, int data)
{
    Node *tmp;
    tmp = root;
    int a = data;

    if(root == nullptr)
    {
        root = new Node(a);
        return root;
    }
    if(tmp->data < a)
    {
        if(root->right == nullptr)
        {
            root->right = new Node(a);
        }
        insert(root->right, a);
    }

    if(tmp->data > a)
    {
        if(root->left == nullptr)
        {
            root->left = new Node(a);
        }
        insert(root->left, a);
    }

    return root;
}

