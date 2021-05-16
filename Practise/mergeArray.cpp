/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Array
{
    int *p;
    int length;
    int size;
};

struct Array * merge(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i=0;j=0;k=0;
    
    struct Array *arr3 = new Array;
    
    while(i < arr1->length && j < arr2->length)
    {
        if(arr1->p[i] < arr2->p[j])
        {
            arr3->p[k++] = arr2->p[j++];
        }
        else
        {
            arr3->p[k++] = arr1->p[i++];
        }
    }
    for(; i < arr1->length; i++)
    {
        arr3->p[k++] = arr1->p[i];
    }
    for(; j < arr2->length; j++)
    {
        arr3->p[k++] = arr2->p[j];
    }
    
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    
    return arr3;
}

void Display(struct Array *arr)
{
    for(int i=0; i < arr->length - 1; i++)
    {
        cout << arr->p[i] << endl;
    }
}

int main()
{
    struct Array A;
    A.length = 5;
    A.size = 10;
    
    A.p = new int[A.size];
    int arr1[] = {2, 4, 6, 8, 15};
    A.p = arr1;

    struct Array B;
    B.length = 5;
    B.size = 10;
    
    int arr2[] = {1, 3, 6, 7, 15};
    B.p = arr2;
    
    struct Array *C;

    C = merge(&A, &B);

    Display(C);
    
    return 0;
}
