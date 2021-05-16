#include <iostream>

using namespace std;

class ArrayADT
{
public:
    int *A; //pointer to an array
    int size; //size of an array
    int length; //no.of elements
    
    void Display();
    void Add(int value);
    void InsertElement(int index, int value);
    void Delete(int index);
    int LinearSearch(int key);
    int swapForSearchtoPreviousPos(int key);
    int swapForSearchtoHead(int key);
    void sort();
    int BinarySearch(int key);
    int RBinarySearch(int key, int l, int h);
    int get(int index);
    void set(int index, int key);
    int max();
};

void ArrayADT::Display()
{
    cout << "The Elements are: " << endl;
    for(int i=0; i < length; i++)
    {
        cout << A[i] << endl;
    }
    cout << endl;
}

void ArrayADT::Add(int value)
{
    if(length < size)
    {
        A[length] = value;
        length++;
    }
    else
        cout << "No space available to apend an element \n ";
}

void ArrayADT::InsertElement(int index, int value)
{
    if(index >= 0 && index <= length)
    {
        for(int i=length; i > index; i--)
        {
            A[i] = A[i-1];
        }
        A[index] = value;
    }
    length++;
}

void ArrayADT::Delete(int index)
{
    if(index >= 0 && index < length)
    {
        for(int i=index ; i < length; i++)
        {
            A[i] = A[i+1];
        }
        length--;
    }
}

int ArrayADT::LinearSearch(int key)
{
    for(int i=0; i<length; i++)
    {
        if(A[i] == key)
            return i;
    }
    return -1;
}

int ArrayADT::swapForSearchtoPreviousPos(int key)
{
    for(int i=0; i < length; i++)
    {
        if(key == A[0])
            return 0;
        else if(key == A[i])
        {
            int temp = A[i];
            A[i] = A[i-1];
            A[i-1] = temp;
            return i-1;
        }
    }
    return -1;
}

int ArrayADT::swapForSearchtoHead(int key)
{
    for(int i=0; i < length; i++)
    {
        if(key == A[i])
        {
            int temp = A[i];
            A[i] = A[0];
            A[0] = temp;
            return 0;
        }
    }
    return -1;
}

void ArrayADT::sort()
{
    for(int i=0; i < length-1; i++)
    {
        for(int j=i+1; j < length; j++)
        {
            if(A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int ArrayADT::BinarySearch(int key)
{
    int l=0, h=length-1;
    int mid;
    
    while (l <= h) {
        mid = (l + h)/2;
        if(key == A[mid])
        {
            return mid;
        }
        else if(key < A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int ArrayADT::RBinarySearch(int key, int l, int h)
{
    int mid;
    
    if(l <= h)
    {
        mid = (l + h)/2;
        if(key == A[mid])
            return mid;
        else if(key < A[mid])
            RBinarySearch(key, l, mid-1);
        else
            RBinarySearch(key, mid + 1, h);
    }
    return -1;
}

int ArrayADT::get(int index)
{
    if(index >=0 && index < length)
    {
        return A[index];
    }
    return -1;
}


void ArrayADT::set(int index, int key)
{
    if(index >=0 && index < length)
    {
        A[index] = key;
    }
}

int ArrayADT::max()
{
    int max = 0;
    int i=0;
    while (i < size)
    {
        if(A[i] > A[i+1])
            max = A[i];
        else
            max = A[i+1];
        
        i++;
    }
    return max;
}
int main(int argc, const char * argv[]) {
    
    ArrayADT arr;
    int i;
    cout << "Enter the size of an Array: " << endl;
    cin >> arr.size;
    
    arr.A = new int[arr.size];
    
    cout << "Enter the no. of elements of an Array: " << endl;
    cin >> arr.length;
    
    cout << "Enter the elements: " << endl;
    for (i=0; i < arr.length; i++)
    {
        cin >> arr.A[i];
    }
    
    arr.Display();
    arr.Add(7);
    arr.Display();
    arr.InsertElement(3, 9);
    arr.Display();
    arr.Delete(5);
    arr.Display();
    int found = arr.LinearSearch(9);
    if(found >= 0)
        cout << "Element Found at Index: " << found << endl;
    else
        cout << "Element not found!" << endl;
        
    found = arr.swapForSearchtoPreviousPos(9);
    if(found >= 0)
        cout << "Element Found at Index: " << found << endl;
    else
        cout << "Element not found!" << endl;
        
    found = arr.swapForSearchtoHead(9);
    if(found >= 0)
        cout << "Element Found at Index: " << found << endl;
    else
        cout << "Element not found!" << endl;
        
    cout << "Maximum is: "<< arr.max() << endl;
    arr.sort();
    arr.Display();
    cout << arr.BinarySearch(9) << endl;
    cout << arr.RBinarySearch(9, 0, arr.length) << endl;
    cout << arr.get(3);
    arr.set(3, 6);
    
    return 0;
}
