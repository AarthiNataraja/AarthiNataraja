
#include <iostream>
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
    
public:
    Sparse(int numOfRows, int numOfCols, int numOfNonZeroEle)
    {
        this->numOfRows = numOfRows;
        this->numOfCols = numOfCols;
        this->numOfNonZeroEle = numOfNonZeroEle;
        
        ele = new Element[numOfNonZeroEle];
    }
    ~Sparse()
    {
        delete [] ele;
    }
    
    void read()
    {
        cout << "Enter the rownum, colnum and its value ";
        for(int i=0; i < numOfNonZeroEle; i++)
        {
            cin >> ele[i].row >> ele[i].col >> ele[i].val;
        }
    }
    
    void display()
    {
        int k = 0;
        cout << "The Sparse Matrix elements are: " << endl;
        
        for(int i=0; i < numOfRows; i++)
        {
            for(int j=0; j < numOfCols; j++)
            {
                if(ele[k].row==i && ele[k].col==j)
                {
                    cout << ele[k++].val << " ";
                }
                else
                {
                    cout << "0" << " ";
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
