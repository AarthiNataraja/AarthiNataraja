/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Matrix
{
    private:
    int *A;
    int n;
    
    public:
    Matrix(int n)
    {
        this->n = n;
        A = new int[n];
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void disp();
    ~Matrix(){
        delete[] A;
    };
};

void Matrix::set(int i, int j, int x)
{
    if(i == j)
    {
        A[i - 1] = x;
    }
}

int Matrix::get(int i, int j)
{
    if(i == j)
    {
        return A[i - 1];
    }
    else
        return 0;
}

void Matrix::disp()
{
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(i == j)
            {
                cout << A[i] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    //Diagonal Matrix
    Matrix m(4);

    m.set(1, 1, 5);
    m.set(2, 2, 7);
    m.set(3, 3, 6);
    m.set(4, 4, 9);
    
    m.disp();
    cout << endl;
    
    cout << m.get(2, 2) << endl;
    
    cout << endl;
    
    m.disp();
    
    return 0;
}
