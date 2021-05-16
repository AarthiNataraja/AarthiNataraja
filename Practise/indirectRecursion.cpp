#include <iostream>

using namespace std;

//forward declaration
void funA(int x);
void funB(int x);

void funB(int n)
{
    if(n > 1)
    {
        cout << n << " ";
        funA(n/2);
    }
}
void funA(int n)
{
    if(n > 0)
    {
        cout << n << " ";
        funB(n-1);
    }
}

int main(int argc, const char * argv[]) {
    int x=20;
    funA(x);
    return 0;
}
