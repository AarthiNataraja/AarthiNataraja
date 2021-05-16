#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    char *s;
}*Top=NULL;

void create(struct Stack *st)
{
    cout << "Enter the size of the stack: " << endl;
    cin >> st->size;
    
    st->s = new char;
    //st->s = (int *)malloc(st->size*sizeof(int));
    
    st->top = -1;
}

void display(struct Stack st)
{
    if(st.top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        for(int i=st.top; i >= 0; i--)
        {
            cout << st.s[i] << " ";
        }
    }
    cout << endl;
}

void push(Stack *st, char key)
{
    if(st->top == st->size-1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        st->top++;
        st->s[st->top] = key;
    }
}

char pop(Stack *st)
{
    char x = -1;
    if(st->top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

char peek(Stack st, int pos)
{
    char x = -1;
    if(st.top - pos < 0)
    {
        cout << "Invalid Index" << endl;
    }
    else
    {
        x = st.s[st.top - pos + 1];
    }
    return x;
}

char StackTop(struct Stack st)
{
    char x = -1;
    if(st.top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        x = st.s[st.top];
    }
    return x;
}

int isEmpty(Stack st)
{
    if(st.top == 1)
        return 1;
    else
        return 0;
}

int isFull(Stack st)
{
    if(st.top == st.size - 1)
        return 1;
    else
        return 0;
}

int isBalanced(char *exp)
{
    Top = new Stack;
    Top->top = -1;
    Top->size = strlen(exp);
    Top->s = new char[Top->size];
    
        for(int i=0; exp[i]!='\0'; i++)
        {
            if(exp[i] == '(')
                push(Top, exp[i]);
            else if(exp[i] == ')')
            {
                if(Top == NULL)
                {
                    pop(Top);
                }
            }
        }
        if(Top == NULL)
            return true;
        else
            return false;
}

int main(int argc, const char * argv[]) {
//    Stack st;
//    create(&st);
//
//    push(&st, 5);
//    push(&st, 10);
//    push(&st, 15);
//    push(&st, 20);
//    push(&st, 25);
//
//    display(st);
//
//    cout << "Deleted element is: " << pop(&st) << endl;
//    cout << "peeked element is: " << peek(st, 2) << endl;
//    cout << "Stack's top element is: " << StackTop(st) << endl;
//    cout << "Is Stack Empty: " << isEmpty(st) << endl;
//    cout << "Is Stack Full: " << isFull(st) << endl;
    
    
    char *exp = "((a+b)*(c-d)))";
    cout << isBalanced(exp) << endl;
    return 0;
}
