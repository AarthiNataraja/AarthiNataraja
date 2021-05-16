#include <iostream>

using namespace std;
//class templates
template <class T>
class Arithmetic
{
    private:
    T a, b;
    
    public:
    Arithmetic(T a1, T b1);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add()
{
    T c;
    c = a+b;
    return c;
}

template<class T>
T Arithmetic<T>::sub()
{
    T c;
    c = a-b;
    return c;
}

int main()
{
    Arithmetic<int> A(10, 5);
    cout << "Integer Addition: " << A.add() << endl;
    cout << "Integer Substraction: " << A.sub() << endl;
    
    Arithmetic<float> A1(10.20, 5.30);
    cout << "Float Addition: " << A1.add() << endl;
    cout << "Float Substraction: " << A1.sub() << endl;
    
    return 0;
}
