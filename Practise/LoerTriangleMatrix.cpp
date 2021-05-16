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
        A = new int[n*(n+1)/2];
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
    if(i >= j)
        A[i * (i - 1) / 2 + j - 1] = x;
}

int Matrix::get(int i, int j)
{
    if(i >= j)
        return A[i * (i - 1) / 2 + j - 1];
    else
        return 0;
    
}

void Matrix::disp()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i >= j)
            {
                cout << A[i*(i-1)/2+j-1] << " " ;
            }
            else
                cout << 0 << " " ;
        }
        cout << endl;
    }
    
}
int main()
{
    //Lower Triangle Matrix
    int n1, x;
    cout << "Enter the Dimension" << endl;
    cin >> n1;
    
    Matrix m(n1);
    
    cout << "Enter the elements" << endl;
    
    for(int i=1; i <= n1; i++)
    {
        for(int j=1; j <= n1; j++)
        {
            if(i >= j)
            {
                cin >> x;
                m.set(i, j, x);
            }
        }
    }
    
    m.disp();
    cout << endl;
    
    cout << m.get(2, 2) << endl;
    
    cout << endl;
    
    m.disp();
    
    return 0;
}
