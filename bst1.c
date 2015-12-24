#include<stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *root=NULL;
void display(struct node *root)
{
    struct node *temp;
      temp=root;
      if(temp!=NULL)
          {

        display (temp->left);
        printf("%d",temp->data);
        display(temp->right);
    }}





void insert(int element)
{
    struct node *temp, *temp1,*p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=element;
    printf("%d",element);
    p->right=NULL;
    p->left=NULL;
    if(root==NULL)
    {
        root=p;
    }
    else
    {
        temp=root;
        while (temp!=NULL)
        {
            temp1=root;
            if(element<root)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }

        }
        if(temp1->data<element)
        {
            temp1->left=p;
        }
        else
        {
            temp1->right=p;
        }


    }}
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
                 insert( element);
                break;
            case 2:
                 display(root);
                break;
                default: exit(0);
            }
        }
    }
