#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL, *second=NULL, *third=NULL;

void create(int arr[], int n)
{
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;
    
    for(int i=1; i<n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next=t;
        last = t;
    }
}

void createB(int arr[], int n)
{
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));
    second->data = arr[0];
    second->next = NULL;
    last = second;
    
    for(int i=1; i<n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next=t;
        last = t;
    }
}

void display(struct Node *n)
{
    while(n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

void rDisplay(struct Node *n)
{
    if(n != NULL)
    {
        cout << n->data << " ";
        rDisplay(n->next);
    }
}

void rrDisplay(struct Node *n) //prints in reverse order
{
    if(n != NULL)
    {
        rrDisplay(n->next);
        cout << n->data << " ";
    }
}

int count(struct Node *n)
{
    int noOfNode = 0;
    while(n != NULL)
    {
        noOfNode++;
        n = n->next;
    }
    return noOfNode;
}

int rcount(struct Node *n)
{
    if(n != NULL)
    {
        return rcount(n->next)+1;
    }
    else
        return 0;
}

int sum(struct Node *n)
{
    int add = 0;
    while(n != NULL)
    {
        add += n->data;
        n = n->next;
    }
    return add;
}

int rsum(struct Node *n)
{
    if(n==0)
        return 0;
    else
        return rsum(n->next)+n->data;
}

int maximum(struct Node *n)
{
    int max = 0;
    while(n != NULL)
    {
        if(n->data > max)
            max = n->data;
        n = n->next;
    }
    return max;
}

Node * search_node(struct Node *n, int key)
{
    while(n != NULL)
    {
        if(n->data == key)
            return n;
        n = n->next;
    }
    return NULL;
}

Node * rsearch_node(struct Node *n, int key)
{
    if(n == NULL)
    {
        return NULL;
    }
    if(key == n->data)
        return n;
    else
    {
        return rsearch_node(n->next, key);
    }
}

Node * move_to_first(struct Node *n, int key)
{
    struct Node *q = NULL;
    while(n != NULL)
    {
        if(n->data == key)
        {
            q->next = n->next;
            n->next = first;
            first = n;
            return n;
        }
        q = n;
        n = n->next;
    }
    return NULL;
}

void insert(struct Node *p, int pos, int data)
{
    if(pos >= 0 && pos < count(p))
    {
        Node *t = new Node;
        if(pos == 0)
        {
            t->data = data;
            t->next = first;
            first = t;
        }
        else if(pos > 0)
        {
            for(int i=0; i < pos-1 && p; i++)
            {
                p = p->next;
            }
            if(p)
            {
                t->data = data;
                t->next = p->next;
                p->next = t;
            }
        }
    }
}

void insertLast(int data)
{
    Node* t= new Node;
    Node* last = new Node;
    
    t->data = data;
    t->next = NULL;
    if(first == NULL)
    {
        first = t;
        last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}

void insertInSortedList(struct Node* n, int data)
{
    Node *q = new Node;
    Node *t = new Node;
    
    n = first;
    q = NULL;
    
    while(n && n->data < data)
    {
        q = n;
        n = n->next;
    }
    if(n == NULL)
    {
        t->data = data;
        t->next = NULL;
        first = t;
    }
    else if (n == first)
    {
        t->data = data;
        t->next = n;
    }
    else
    {
        t->data = data;
        t->next = n;
        q->next = t;
    }
}

int Delete(struct Node* n, int index)
{
    int x = -1;
    Node* t = new Node;
    
    if(index < 1 || index > count(n))
    {
        return -1;
    }
    for(int i = 1; i < index; i++)
    {
        t = n;
        n = n->next;
    }
    if(n == first)
    {
        t = first;
        x = t->data;
        first = first->next;
        delete t;
        return x;
    }
    else
    {
        x = n->data;
        t->next = n->next;
        delete n;
        return x;
    }
    return -1;
}

bool isSorted(struct Node* n)
{
    int x = -1;
    while(n != NULL)
    {
        if(n->data < x)
            return false;
        x = n->data;
        n = n->next;
    }
    return true;
}

void removeDuplicate(struct Node* p)
{
    p = first;
    Node *q = first->next;
    
    while (q != NULL) {
        if(p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void reverseLLelements(struct Node* n)
{
    int i=0;
    int counts = count(n);
    int arr[counts];
    while(n != NULL)
    {
        arr[i] = n->data;
        n = n->next;
        i++;
    }
    n = first;
    i--;
    while (n != NULL) {
        n->data = arr[i--];
        n = n->next;
    }
}

void reverseLinks(struct Node *n)
{
    Node *q = new Node;
    Node *r = new Node;
    q=r=NULL;
    while(n != NULL)
    {
        r = q;
        q = n;
        n = n->next;
        q->next = r;
    }
    first = q;
}

void concat(struct Node* n, struct Node* m)
{
    while(n->next != NULL)
    {
        n = n->next;
    }
    n->next = m;
    m = NULL;
}

void merge(struct Node* n, struct Node* m)
{
    struct Node* last = NULL;
    if(n->data < m->data)
    {
        third = n;
        last = n;
        n = n->next;
        third->next = NULL;
    }
    else
    {
        third = m;
        last = m;
        m = m->next;
        third->next = NULL;
    }
    while(m && n)
    {
        if(n->data < m->data)
        {
            last->next = n;
            last = n;
            n = n->next;
            last->next = NULL;
        }
        else
        {
            last->next = m;
            last = m;
            m = m->next;
            last->next = NULL;
        }
    }
    if(m)
    {
        last->next = m;
    }
    else
    {
        last->next = n;
    }
}

bool isLoop(struct Node* n)
{
    Node* q = new Node;
    
    n = q = first;
    do{
        n = n->next;
        q = q->next;
        q = q?q->next:q;
    }while((n && q) && n!=q);
    if(n==q)
        return true;
    else
        return false;
}

int main(int argc, const char * argv[]) {
    
    int A[5] = {2, 2, 5, 9, 9};
    int B[5] = {1, 4, 7, 10, 11};
    int count1, count2, sum1, sum2, max;
    struct Node *p;
    create(A, 5);
    
    display(first);
    cout << endl;
    
    createB(B, 5);
    display(second);
    cout << endl;
    
    rDisplay(first);
    cout << endl;

//    rrDisplay(first);
//    cout << endl;

    count1 = count(first);
    cout << "Number of elements in Linked List: " << count1 << endl;

    count2 = count(first);
    cout << "Number of elements in Linked List using recursion: " << count2 << endl;

    sum1 = sum(first);
    cout << "Sum of elements in Linked List: " << sum1 << endl;

    sum2 = rsum(first);
    cout << "Sum of elements in Linked List using recursion: " << sum2 << endl;

    max = maximum(first);
    cout << "Greater value of Linked List: " << max << endl;

    p = search_node(first, 5);
    if(p)
        cout << "Data found: " << p->data << endl;
    else
        cout << "Data not found" << endl;

    p = rsearch_node(first, 12);
    if(p)
        cout << "Data found: " << p->data << endl;
    else
        cout << "Data not found" << endl;

    p = move_to_first(first, 5);
    display(p);
    cout << endl;

    insert(p, 3, 8);
    display(p);
    cout << endl;

    insert(p, 2, 3);
    display(p);
    cout << endl;

    insert(p, 2, 3);
    display(p);
    cout << endl;

    insertLast(20);
    display(p);
    cout << endl;

    insertInSortedList(p, 6);
    display(p);
    cout << endl;

    int y = Delete(p, 2);
    cout << y << endl;
    display(p);
    cout << endl;

//    y = Delete(p, 2);
//    cout << y << endl;
//    display(p);
//    cout << endl;

    bool isSort = isSorted(p);
    if(isSort)
        cout << "Linked List is sorted" << endl;
    else
        cout << "Linked List is Not sorted" << endl;

    removeDuplicate(p);
    display(p);
    cout << endl;

    reverseLLelements(p);
    display(p);
    cout << endl;

//    reverseLinks(p);
//    display(p);
//    cout << endl;
    
//    concat(p,second);
//    display(p);
//    cout << endl;
    
    merge(first, second);
    display(third);
    cout << endl;
    
    struct Node* t1, *t2;
    
    t1 = first->next->next;
    t2 = first->next->next->next->next->next;
    t2->next = t1;
    
    bool isLooping = isLoop(first);
    cout << isLooping << endl;
    
    return 0;
}
