#include<stdio.h>

int find_height(struct node *p)
{
    if(p==NULL)
    {
        return(0);
    }
    else
    {
        if(find_height(p->left)<=find_height(p->right))
            return(1+find_height(p->right));
        else
             return(1+find_height(p->left));
    }
}
