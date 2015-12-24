
int count_nodes(struct node *p)
{
    if(p==NULL)
    {
        return(0);
    }
    else
    {
        return(1+count_nodes(p->left)+count_nodes(p->right));
    }
}
