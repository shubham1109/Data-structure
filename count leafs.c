#include<stdio.h>

intt count_leafs(struct node *p)
{
    if(p->left==NULL && p->right==NULL)
    {
        return(1);
    }
    else
    {
        return(count_leafs(p->left)+ count_leafs(p->right));
    }
}
