#include <iostream>

using namespace std;


int add(int a, int b) //function declaration, definition, prototype - formal parameters
{
    int c;
    c = a + b;
    return(c);
}

void swap(int c, int d) //pass by value // change in formal parameters will not reflect in actual parameters
{
    int temp;
    temp = c;
    c = d;
    d = temp;
}

void swapRef(int &c, int &d) //pass by reference
{
    int temp;
    temp = c;
    c = d;
    d = temp;
}

void swapAddress(int *c, int *d) //pass by address
{
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
}

int main()
{
    int x, y, z;
    
    x=10;y=20;
    
    z = add (x, y); // function call - actual parameters

    cout << "sum is: " << z << endl;    
    
    swap(x, y);
    cout << "x: " << x << endl << "y: " << y << endl;
    
    swapRef(x, y);
    cout << "x: " << x << endl << "y: " << y << endl;
    
    swapAddress(&x, &y);
    cout << "x: " << x << endl << "y: " << y << endl;
    
    return 0;
}
