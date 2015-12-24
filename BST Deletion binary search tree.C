void deletion(struct node *tree, int key)
{
    struct node *p,*rp,*f,*s;
    q = NULL;
    p = tree;

    while( p != NULL && p->data != key)
    {
        q = p;
        if(key < p->data)
        {
            p = p->left;
        }
        else
        {
            p = p->right;
        }
    }
    if (p == NULL)
    {
        printf("The key does't exist");
        return;
    }

    if(p -> left == NULL)
    {
        rp=p->right;
    }
    else if(p->right == NULL)
    {
        rp=p->left;
    }

    else
    {
        f=p;
        rp=right(p);
        s=left(rp);

        while(s!=NULL)
        {
            f=rp;
            rp=s;
            s=s->left;
        }
        if(f!=p)
        {
            f->left=rp->right;

            rp->right=p->right;
        }
        rp->left=p->left;
    }

    if(q==NULL) //p is root
    {
        tree = rp;
    }
    else
    {
        if(p==q->left)
            q->left=rp;
        else
            q->right=rp;      
    }
    free(p);
}
