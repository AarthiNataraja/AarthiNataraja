#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Manipulation
{
    int arr[5];
    int n;
};

void fun(struct Rectangle r1) // separate object is created - call by value
{
    cout << "length: " << r1.length << endl;
    cout << "breadth: " << r1.breadth << endl;
    
    r1.length = 16;
    
    cout << "length after change: " << r1.length << endl;
    cout << "breadth after change: " << r1.breadth << endl;
}

void fun1(struct Rectangle *r2)
{
    cout << "length: " << r2->length << endl;
    cout << "breadth: " << r2->breadth << endl;
    
    r2->length = 16;
    
    cout << "length after change: " << r2->length << endl;
    cout << "breadth after change: " << r2->breadth << endl;
}

struct Rectangle * fun2()
{
    struct Rectangle *r3;
    r3 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    //or
    //r3 = new Rectangle;
    
    r3->length = 30;
    r3->breadth = 50;
    
    return r3;
}

void fun3(struct Manipulation m, int n)
{
    m.arr[0] = 30;
    for(int i = 0; i < n; i++)
    {
        cout << m.arr[i] << endl;
    }
}

struct Manipulation * fun4(int n)
{
    struct Manipulation *m = new Manipulation;
    
    for(int i = 0; i < n; i++)
    {
        m->arr[i] = i+1;
        cout << m->arr[i] << endl;
    }
    m->arr[0] = 30;
    
    return m;
}

int main()
{
    Rectangle r = {10, 5};
    Rectangle *p;
    
    Manipulation A={{1,2,3,4,5}, 5};
    Manipulation *B;
    
    cout << "length in main: " << r.length << endl;
    cout << "breadth in main: " << r.breadth << endl;
    
    fun(r); //call by value
    
    cout << "length in main: " << r.length << endl;
    cout << "breadth in main: " << r.breadth << endl;
    
    fun1(&r); //call by address
    
    cout << "length in main: " << r.length << endl;
    cout << "breadth in main: " << r.breadth << endl;
    
    p = fun2(); // Dynamic Allocation
    
    cout << "length in main: " << p->length << endl;
    cout << "breadth in main: " << p->breadth << endl;
    
    free(p);
    
    fun3(A, 5); // call by value
    
    for(int x:A.arr)
    {
        cout << "In main: " << x << endl;
    }
    
    B = fun4(5);
    
    for(int x:B->arr)
    {
        cout << "In main: " << x << endl;
    }
    
    return 0;
}
