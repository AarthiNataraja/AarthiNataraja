/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Find single missing element in an array

    int arr[10] = {1,2,3,5,6,7,8,9,10,11};
    
    for(int i=0; i < 10; i++)
    {
        if(arr[i] != (i+1))
        {
            cout << "Missing Element: " << (i+1) << endl;
            break;
        }
    }
    
    //using mathematical formula
    int size = 10;
    int arr1[size] = {1,2,3,5,6,7,8,9,10,11};
    
    int sum = 0, total = 0;
    sum = 11 * (11 + 1) / 2; // n * (n+1) / 2
    
    for(int j=0; j < size; j++)
    {
        total += arr1[j];
    }
    
    cout << "Missing Element: " << (sum - total) << endl;
    
    //using hash table - normal array.
    int arr2[size] = {6,7,8,10,11,12,14,15,16,17};
    
    int size2 = arr2[size-1];
    int hash[size2] = {0};
    int l = arr2[0];
    
    for(int k = 0; k < size; k++)
    {
        hash[arr2[k]]++;
    }
    
    for(; l < size2; l++)
    {
        if(hash[l] == 0)
        {
            cout << "Missing Element: " << l << endl;
        }
    }
    
    int arr3[size] = {6,7,8,10,11,12,15,16,17,18};
    
    int diff = arr3[0];
    
    for(int m=0; m < size; m++)
    {
        if(arr3[m] - m != diff)
        {
            int count = arr3[m] - arr3[m-1];
            while(count > 1){
                cout << "Missing Element: " << (diff+m) << endl;
                diff++;
                count--;
            }
        }
    }
    
    return 0;
}
