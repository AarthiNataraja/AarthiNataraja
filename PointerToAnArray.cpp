#include <iostream>

using namespace std;

int main()
{
    int A[5]={2,4,6,8,10};
    int *p;
    
    p=A;
    //p = &A[0];    
    
    for(int i=0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
    
    for(int j=0; j < 5; j++)
    {
        cout << p[j] << endl;
    }

    return 0;
}
