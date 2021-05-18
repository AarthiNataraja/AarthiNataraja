/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int a[], int size)
{
    int flag;
    for(int i=0; i < size-1; i++)
    {
        for(int j=0; j < size-1-i; j++)
        {
            flag = 0;
            if(a[j] > a[j+1])
            {
                swap(&a[j], &a[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
        {
            //cout << "Already Sorted" << endl;
            break;
        }
    }
}

void display(int arr[], int size)
{
    for(int i = 0; i < size-1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[7] = {7,4,9,6,1,10,5};
    
    BubbleSort(arr, 7);
    
    display(arr, 7);

    return 0;
}
