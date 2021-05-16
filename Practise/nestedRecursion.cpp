#include <iostream>

using namespace std;

int fun(int n)
{
    if(n > 100)
    {
        return n-10;
    }
    else
    {
        return fun(fun(n+11)); // nested recursion
    }
}
int main(int argc, const char * argv[]) {
    int x = 95, y=0;
    y = fun(x);
    cout <<"y: " << y <<endl;
    return 0;
}
