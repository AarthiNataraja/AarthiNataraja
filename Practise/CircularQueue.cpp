#include <iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

void create(struct Queue *q, int sz)
{
    q->size=sz;
    q->front = 0;
    q->rear = 0;
    q->arr = new int[q->size];
}

void enqueue(struct Queue *q, int key)
{
    if((q->rear+1) % q->size == q->front)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->arr[q->rear] = key;
    }
}

int dequeue(struct Queue *q)
{
    int x = -1;
    if(q->front == q->rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        q->front = (q->front+1) % q->size;
        x = q->arr[q->front];
    }
    return x;
}

void display(struct Queue *q)
{
    for(int i=q->front+1; i<=q->rear; i++)
    {
        cout << q->arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    struct Queue *Q=new Queue;
    create(Q, 5);
    enqueue(Q, 3);
    enqueue(Q, 5);
    enqueue(Q, 7);
    enqueue(Q, 9);
    display(Q);
    dequeue(Q);
    cout << endl;
    display(Q);
    
    return 0;
}
