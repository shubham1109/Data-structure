struct node
{

    int data;
    struct node *right;
    struct node *left;
    int rthread;
};

void inorder(struct node *tree)
{
    struct node *p,*q;

    p=tree;

    do
    {
        q=NULL;

        while(p!=NULL)
        {
            q=p;
            p=p->left;
        }
        if(q!=NULL)
        {
            printf("%d\n",q->data);
            p=q->right;
            while(q->rthread && p!=NULL)
            {
                printf("%d \n",p->data);
                q=p;
                p=p->right;
            }
        }
    }while(q!=NULL);
}
