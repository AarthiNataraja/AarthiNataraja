#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void display(Node *st)
{
    
    if(st==NULL)
        cout << "Stack is empty" << endl;
    else
    {
        Node *p = st;
        while(p)
        {
            cout << p->data << " " ;
            p = p->next;
        }
    }
    cout << endl;
}
void push(int x)
{
    struct Node *t = new Node;
    
    if(t == NULL)
        cout << "Stack is Full " << endl;
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    int x = -1;
    if(top == NULL)
    {
        cout << "Stack is Empty" << endl;
        return x;
    }
    else
    {
        Node * t = top;
        x = t->data;
        top = t->next;
        delete t;
        return x;
    }
}

int peek(int pos)
{
    if(top == NULL)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        Node *t = top;
        for(int i=0; i < pos-1 && t != NULL; i++)
        {
            t = t->next;
        }
        return t->data;
    }
}

int stackTop()
{
    if(top == NULL)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        return top->data;
    }
}

int isEmpty()
{
    return top==NULL?1:0;
}

int isFull()
{
    Node * t = new Node;
    return t==NULL?1:0;
}

int main(int argc, const char * argv[]) {
    push(5);
    push(10);
    push(15);
    push(20);
    push(25);
    
    display(top);
    
    pop();
    display(top);
    cout << endl;
    
    cout << "Element at given position: " << peek(3);
    cout << endl;
    
    cout << "Stack top is: " << stackTop() << endl;
    
    cout << "Is stack empty: " << isEmpty() << endl;
    
    cout << "Is stack full: " << isFull() << endl;
    
    return 0;
}
