/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class arrayADT
{
    public:
    int *A;
    int size;
    int length;
    
    int get(int index);
    void set(int index, int value);
    int max();
    int min();
    float avg();
};

int arrayADT::get(int index)
{
    if(index >= 0 && index < length)
        return A[index];
}

void arrayADT::set(int index, int value)
{
    if(index >= 0 && index < length)
        A[index] = value;
}

int arrayADT::max()
{
    int max = A[0];
    for(int i=1; i < length; i++)
    {
        if(A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

int arrayADT::min()
{
    int min = A[0];
    for(int i=1; i < length; i++)
    {
        if(A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}

float arrayADT::avg()
{
    int sum1 = 0;
    float avg = 0;
    for(int i=0; i < length; i++)
    {
        sum1 += A[i];
    }
    cout << "Sum is : " << sum1 << endl;
    return avg = sum1 / length;
}

int main()
{
    arrayADT arr;
    arr.size = 10;
    arr.length = 9;
    arr.A = new int[arr.size];
    int arry[arr.size] = {6,4,2,1,5,9,8,7,10};
    arr.A = arry;

    cout << "The Get result: " << arr.get(3) << endl;
    arr.set(4, 3);
    cout << "The elements are : " << endl;
    for(int i=0; i < arr.length; i++)
        cout << arr.A[i] << endl;
    cout << "The Max result: " << arr.max() << endl;
    cout << "The Min result: " << arr.min() << endl;
    cout << "The Avg result: " << arr.avg() << endl;
    
    return 0;
}
