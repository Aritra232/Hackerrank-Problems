int height(Node* root)
{
    if(root == NULL)
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
