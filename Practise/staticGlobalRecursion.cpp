#include <iostream>
using namespace std;

//int k=0; // global - uncomment the two lines inside if to check.
int fun(int n)
{
    //static int k=0; static - comment above global variable and check. - uncomment the two lines inside if to check.
    if(n > 0)
    {
        //k++;
        //return fun(n-1)+k;
        return fun(n-1)+n; // normal operation
    }
    return 0;
}
int main(int argc, const char * argv[]) {
    int x=5;
    cout << fun(x) << endl;
    return 0;
}
