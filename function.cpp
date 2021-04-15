#include <iostream>

using namespace std;

int add(int a, int b) //function declaration, definition, prototype - formal parameters
{
    int c;
    c = a + b;
    return(c);
}

int main()
{
    int x, y, z;
    
    x=10;y=20;
    
    z = add (x, y); // function call - actual parameters

    cout << "sum is: " << z << endl;    
    
    return 0;
}
