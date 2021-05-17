#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int key)
{
    Node *t = new Node;
    if(t == NULL)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        t->data = key;
        t->next = NULL;
        if(front==NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;
    Node *t = new Node;
    if(front == NULL)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        delete t;
    }
    return x;
}

void display()
{
    struct Node *p = front;
    while(p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
   
    enqueue(3);
    enqueue(5);
    enqueue(7);
    enqueue(9);
    display();
    dequeue();
    cout << endl;
    display();
    dequeue();
    cout << endl;
    display();
    return 0;
}
