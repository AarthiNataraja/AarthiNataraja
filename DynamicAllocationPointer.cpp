#include <iostream>
#include <stdlib.h>

#include <stdio.h>

using namespace std;

int main()
{
    int *p, *p1;
    
    p = (int *)malloc(5*sizeof(int));
    
    p1 = new int[5];
    
    p[0]=2; p[1]=4; p[2]=6; p[3]=8; p[4]=10;

    p1[0]=1; p1[1]=3; p1[2]=5; p1[3]=7; p1[4]=9;
    
    for(int j=0; j < 5; j++)
    {
        cout << "C++ kind of dynamic allocation: " << p1[j] << endl;
        cout << "C kind of dynamic allocation: " << p[j] << endl;
    }

    free(p);
    delete [] p1;
    return 0;
}
