#include<stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *start=NULL;
void insertbeg(int element)
{
    struct node *p , *temp;
    p=(struct node *)malloc(sizeof(struct node));
    if(start==NULL)
    {
        p->data=element;
        p->left=NULL;
        p->right=NULL;
        start=p;
    }
    else
    {
        temp=start;
        p->data= element;
        p->left=NULL;
        p->right=temp;
        temp->left=p;
        start=p;
    }

}
void insertend(int element)
{
    struct node *p , *temp;
    p=(struct node *)malloc(sizeof(struct node));
    if(start==NULL)
    {
        p->data=element;
        p->left=NULL;
        p->right=NULL;
        start=p;
    }
    else
    {
        temp=start;
        while(temp->right!=NULL)
        {
            temp= temp->right;
        }
        p->data= element;
        p->left=temp;
        p->right=NULL;
        temp->right=p;

    }
}

void main()
{
    int element, ch;

    while(1)
    {
        printf("enter your choice1 for insert 2 for display");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("enter the element");
            scanf("%d", &element);
            insertbeg( element);
            break;
             case 2:
            printf("enter the element");
            scanf("%d", &element);
            insertend( element);
            break;
        case 3:
            display();
            break;
        case 4:
            printf("enter the element");
            scanf("%d", &element);
            insertspecific( element);
            break;

        default:
            exit(0);
        }
    }
}

void display()
{
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->right;
    }
}

void insertspecific(int element)
{
    struct node * temp, *prev, *p;
     p=(struct node *)malloc(sizeof(struct node));
     p->data=element;
    int pos;
    int count=1;
    printf("enter the position");
    scanf("%d",&pos);
    temp=start;
    while (pos!=count && temp!=NULL)
    {
        prev=temp;
        temp=temp->right;
        count ++;
    }
    prev->right=p;
     p->left=prev;
     p->right=temp;
     temp->left=p;
}

















