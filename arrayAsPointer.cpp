#include <iostream>

using namespace std;

void fun(int arr[]) // arr will not be treated as array but it will treated as pointer
{
    cout << "size: " << sizeof(arr)/sizeof(int) << endl; //return 2 as output
}

int main()
{
    int a[] = {2,4,6,8,10};
    
    cout << "size in main: " << sizeof(a)/sizeof(int) << endl;
    
    for(int x:a)
        cout << "x: " << x << endl;

    fun(a);
    
    return 0;
}
