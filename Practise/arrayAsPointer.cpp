#include <iostream>

using namespace std;

void fun(int arr[], int n)// arr will not be treated as array but it will treated as pointer
//void fun(int *arr, int n) //this also works while passing an array
{
    cout << "size: " << sizeof(arr)/sizeof(int) << endl; //return 2 as output
    
    //print using foreach loop
    //for pointers we cannot use foreach loop. arr[] is not pointer to an array and not the actual array
    // for(int x:arr)
    // {
    //     cout << "X: " << x << endl;
    // }
    //will get error as below:
    //      /usr/include/c++/6/bits/range_access.h:87:5: note:   ‘std::begin’
    //      main.cpp:18:15: error: ‘end’ was not declared in this scope
    
    arr[0] = 222; //this will modify the actual parameter also
    
    //instead use a for loop
    for(int i=0; i < n; i++)
    {
        cout << "arr["<<i<<"]: " << arr[i] << endl;
    }
}

//int[] fun1()// this will not be supported by all pointer
int * fun1(int size)
{
    int *pointr;
    pointr = (int *)malloc(size*sizeof(int));
    
    for(int i=0; i < size; i++)
    {
        pointr[i] = i+1; // filling elements
    }
    return pointr;
}

int main()
{
    int a[] = {2,4,6,8,10};
    int *p, size=5;
    
    cout << "size in main: " << sizeof(a)/sizeof(int) << endl;

    fun(a, 5);
    
    for(int x:a) // this will work
        cout << "x: " << x << endl;
    
    p=fun1(size); // dynamic allocation 
    
    for(int i=0; i < size; i++)
    {
        cout << "p[" <<i<<"]: " << p[i] << endl;
    }
    
    return 0;
}
