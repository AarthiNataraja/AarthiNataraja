#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {5, 10}; // in C++ struct keyword is not mandatory
    
    r.length = 20;
    r.breadth = 40;
    
    cout << r.length << endl << r.breadth << endl;
    
    struct Rectangle *p = &r;
    
    p->length = 60;
    p->breadth = 120;
    
    cout << p->length << endl << p->breadth << endl;
    
    return 0;
}
