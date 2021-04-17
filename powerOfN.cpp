#include <iostream>
using namespace std;

int fun(int m, int n)
{
    if(n == 0 || m == 1)
        return 1;
    else if(m == 0)
        return 0;
    else
        return (m * fun(m, n-1));

    return 0;
}

int fun1(int m, int n)
{
    int s = 1;
    
    if(n == 0 || m == 1)
        return 1;
    else if(m == 0)
        return 0;
    
    for (int i=1; i<=n; i++)
    {
        s *= m;
    }
    return s;
}

int fun2(int m, int n)
{
    return pow((float)m, (float)n);
}

int main(int argc, const char * argv[]) {
    int x=5, y=2, pow=0, pow1=0, pow2=0;
    pow = fun(x, y);
    pow1 = fun1(x, y);
    pow2 = fun2(x, y);
    cout << "Power: " << pow << endl << "Power1: " << pow1 << endl << "Power2: " << pow2 << endl;
    return 0;
}
