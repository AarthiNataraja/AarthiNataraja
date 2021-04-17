#include <iostream>
using namespace std;

int fun(int n)
{
    if (n==0 || n==1)
        return 1;
    else{
        return fun(n-1)*n;
    }
}

int fun1(int n)
{
    int s = 1;
    
    if( n==0 || n==1)
        return 1;
    else
    {
        while(n > 0)
        {
            s *= n;
            n--;
        }
        return s;
    }
}

int main(int argc, const char * argv[]) {
    int x = 25, fact=0, fact1=0;
    fact = fun(x); //recursion
    fact1 = fun1(x); // using loop
    cout << "factorial: " << fact << endl << "factorial1: " << fact1 << endl;
    return 0;
}
