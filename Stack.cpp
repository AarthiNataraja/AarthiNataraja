#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

void create(struct Stack *st)
{
    cout << "Enter the size of the stack: " << endl;
    cin >> st->size;
    
    st->s = new int;
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

void push(Stack *st, int key)
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

int pop(Stack *st)
{
    int x = -1;
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

int peek(Stack st, int pos)
{
    int x = -1;
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

int StackTop(struct Stack st)
{
    int x = -1;
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

int main(int argc, const char * argv[]) {
    Stack st;
    create(&st);

    push(&st, 5);
    push(&st, 10);
    push(&st, 15);
    push(&st, 20);
    push(&st, 25);
    
    display(st);
    
    cout << "Deleted element is: " << pop(&st) << endl;
    cout << "peeked element is: " << peek(st, 2) << endl;
    cout << "Stack's top element is: " << StackTop(st) << endl;
    cout << "Is Stack Empty: " << isEmpty(st) << endl;
    cout << "Is Stack Full: " << isFull(st) << endl;
    
    return 0;
}
