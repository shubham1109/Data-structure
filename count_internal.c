#include<stdio.h>

intt count_internal(struct node *p)
{
    if(p->left==NULL && p->right==NULL)
    {
        return(0);
    }
    else
    {
        return(1 + count_internal(p->left)+ count_internal(p->right));
    }
}
