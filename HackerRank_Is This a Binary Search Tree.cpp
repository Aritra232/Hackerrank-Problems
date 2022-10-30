Node *tmp = nullptr;
bool checkBST(Node* root)
{
    if(root == nullptr)
    {
        return true;
    }
    if(checkBST(root->left)==false)
    {
        return false;
    }
    if(tmp != nullptr && root->data <= tmp->data)
    {
        return false;
    }

    tmp  = root;

    if(checkBST(root->right)==false)
    {
        return false;
    }
    return true;
}
