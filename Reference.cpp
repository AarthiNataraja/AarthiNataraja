#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int &r = a; //must be initialized during declaration
    int b=20;
    cout << a << endl << r << endl;
    r=b;
    cout << a << endl << r << endl << b << endl;
    
    return 0;
}
