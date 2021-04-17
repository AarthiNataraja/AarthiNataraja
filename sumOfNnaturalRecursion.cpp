#include <iostream>
using namespace std;

int fun(int n)
{
    if(n > 0)
    {
        return fun(n-1)+n;
    }
    else
        return 0;
}

int fun1(int n)
{
    if(n == 0)
        return 0;
    
    int s = 0;
    for(int i=1; i <= n; i++)
    {
        s = s+i;
    }
    return s;
}

int fun2(int n)
{
    return n * (n + 1) / 2;
}

int main(int argc, const char * argv[]) {
    int x=10, sum=0, sum1=0, sum2=0;
    sum = fun(x); // using recursion
    sum1 = fun1(x); // using loop
    sum2 = fun2(x); // using mathematical operation
    cout << "Sum: " << sum << endl << "Sum1: " << sum1 << endl << "Sum2: " << sum2 << endl ;
    return 0;
}
