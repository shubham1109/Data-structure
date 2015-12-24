#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} *top=NULL;
struct node *p;
void push(int element)
{

    struct node *temp;
    p=(struct node*)malloc(sizeof(struct node));
    p->data= element;
    if(top== NULL)
    {
        p->next=NULL;
        top=p;
    }
    else
    {
        p->next=top;
        top=p;
    }
}
void pop()
{
    struct node *temp;
    temp=top;
    if (top==NULL)
    {
        printf("Linked List is empty");
    }
    else
    {
        top=top->next;
        free(temp);
        temp=NULL;
    }

}
void display()
{
    struct node *temp;

    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }

    }
}
void main()
{
    int ch, element;
    while (1)
    {
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the element");
            scanf("%d",&element);
            push(element);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            reverse();
            break;
        default:
            exit(0);
        }
    }
}

void reverse()   // extra part to reverse the nodes in linked list
{
    struct node *p=top;
    struct node *q;
    struct node *r=NULL;
    while(p!=NULL)
    {
        q=p->next;
        p->next=r;
        r=p;
        p=q;
    }

    top=r;
}









