int height(Node *root)
{
    if(root == nullptr)
    {
        return -1;
    }
    else
    {
        int a;
        int b;
        a = height(root->left);
        b = height(root->right);
        if(a > b)
        {
            return a + 1;
        }
        else
        {
            return b + 1;
        }

    }
}

void LevelPrint(Node* root, int level)
{
    if (root == nullptr)
    {
        return ;
    }

    if (level == 0)
    {
        cout << root->data << " ";
    }

    LevelPrint(root->left, level - 1);
    LevelPrint(root->right, level - 1);

}

void levelOrder(Node * root)
{
    int c,d;
    d = height(root);
    c = 0;

    for(int i=0; i<=d; i++)
    {
        LevelPrint(root,i);
    }

}

