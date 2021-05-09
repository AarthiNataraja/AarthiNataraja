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
    
    friend istream & operator>>(istream& is, Sparse &s);
    friend ostream & operator<<(ostream& os, Sparse &s);
    
    Sparse operator+(Sparse &s);
};

istream & operator>>(istream& is, Sparse &s)
{
    cout << "Enter the Elements of Sparse matrix " << endl;
    for(int i=0; i < s.numOfNonZeroEle; i++)
    {
        cin >> s.ele[i].row >> s.ele[i].col >> s.ele[i].val;
    }
    
    return is;
}

ostream & operator<<(ostream& os, Sparse &s)
{
    cout << "The Sparse Martix is, " << endl;
    int k=0;
    for(int i=0; i < s.numOfRows; i++)
    {
        for(int j=0; j < s.numOfCols; j++)
        {
            if(s.ele[k].row==i && s.ele[k].col==j)
            {
                cout << s.ele[k++].val << " ";
            }
            else
            {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
    
    return os;
}

Sparse Sparse::operator+(Sparse &s)
{
    int i=0,j=0,k=0;
    Sparse *sum = new Sparse(numOfRows, numOfCols, numOfNonZeroEle+s.numOfNonZeroEle);
    
    if(numOfRows!=s.numOfRows || numOfCols!=s.numOfCols)
    {
        //return ;
    }
    
    while(i<numOfNonZeroEle && j<s.numOfNonZeroEle)
    {
        if(ele[i].row < s.ele[j].row)
        {
            sum->ele[k++] = ele[i++];
        }
        else if(ele[i].row > s.ele[j].row)
        {
            sum->ele[k++] = s.ele[j++];
        }
        else
        {
            if(ele[i].col < s.ele[j].col)
            {
                sum->ele[k++] = ele[i++];
            }
            else if(ele[i].col > s.ele[j].col)
            {
                sum->ele[k++] = s.ele[j++];
            }
            else
            {
                sum->ele[k] = ele[i];
                sum->ele[k++].val = ele[i++].val+s.ele[j++].val;
            }
        }
    }
    for(; i<numOfNonZeroEle; i++)
    {
        sum->ele[k++] = ele[i];
    }
    for(; j<s.numOfNonZeroEle; j++)
    {
        sum->ele[k++] = s.ele[j];
    }
    sum->numOfNonZeroEle = k;
    
    return *sum;
}

int main()
{
    Sparse S(5,5,5);
    S.read();
    S.display();

    Sparse s1(5,5,5);
    cin >> s1;
    cout << s1;
    
    Sparse s2 = S + s1;
    
    cout << s2;
    
    return 0;
}
