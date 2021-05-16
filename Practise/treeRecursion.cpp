#include <iostream>
using namespace std;

//tree recursion
void fun(int n)
{
    if(n > 0)
    {
        cout << n << " " ;
        fun(n-1);
        fun(n-1);
    }
}

int main(int argc, const char * argv[]) {
    int x=5;
    fun(x);
    cout << endl;
    return 0;
}
