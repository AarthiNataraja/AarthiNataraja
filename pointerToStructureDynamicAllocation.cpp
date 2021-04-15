/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    //C
    struct Rectangle *p;
    
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    
    p->length = 5;
    p->breadth = 20;
    
    cout << p->length << endl << p->breadth << endl;
    
    free(p);
    
    //C++
    Rectangle *p1;
    
    p1 = new Rectangle;
    
    p1->length = 50;
    p1->breadth = 25;
    
    cout << p1->length << endl << p1->breadth << endl;
    
    return 0;
}
