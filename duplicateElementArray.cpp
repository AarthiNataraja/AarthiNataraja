/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Find duplicate element in an array

    int arr[10] = {1,2,3,3,5,6,7,9,9,9};
    int dup = -1;
    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == arr[i+1] && arr[i] != dup)
        {
            dup = arr[i];
            cout << "Duplicate Element is: " << arr[i] << endl;
        }
    }
    
    int arr1[10] = {1,2,3,3,5,6,7,9,9,9};
    int hash[10] = {0};
    
    for (int j=0; j < 10; j++)
    {
        hash[arr1[j]]++;
    }
    
    for(int k=1; k < 10; k++)
    {
        if(hash[k] > 1)
        {
            cout << "Duplicate Element is: " << k << endl;
        }
    }
    
    return 0;
}
