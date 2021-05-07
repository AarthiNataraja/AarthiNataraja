/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream.h>
using namespace std;

class Element
{
public:
    int row;
    int col;
    int val;
};

class Sparse
{
private:
    int numOfRows;
    int numOfCols;
    int numOfNonZeroEle;
    Element *ele; // array of non-zero elements
    ele = new Element[numOfNonZeroEle];
    
public:
    Sparse(int numOfRows, numOfCols, numOfNonZeroEle)
    {
        this->numOfRows = numOfRows;
        this->numOfCols = numOfCols;
        this->numOfNonZeroEle = numOfNonZeroEle;
    }
    
    void read()
    {
        cout << "Enter the rownum, colnum and its value ";
        for(int i=0; i < numOfNonZeroEle; i++)
        {
            cin >> ele[i].row >> ele[i].col >> ele[i].value;
        }
    }
    
    void display()
    {
        cout << "The Sparse Matrix elements are: ";
        
        for(int i=0; i < numOfRows; i++)
        {
            for(int j=0; j < numOfCols; j++)
            {
                if(ele[k].row==i && ele[k].col==j)
                {
                    cout << ele[k++].val << " ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    Sparse S(5,5,5);
    S.read();
    S.display();

    return 0;
}
