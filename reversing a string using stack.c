#define max 20
int top=-1;
char stack[max];
push( char item)
{
    if(top==max-1)
    {
        printf("overflow");

    }
    else{

        stack[++top]=item;
    }
}
char pop()
{
  if(top==-1)
    {
        printf("underflow");

    }
    else{

        return stack[top--];
    }
}




void main()
{
char c[22];
int i;
 gets(c);
puts(c);
for(i=0; i<strlen(c);i++)
    push(c[i]);
for(i=0; i<strlen(c);i++)
    c[i]=pop();
    puts(c);


}
