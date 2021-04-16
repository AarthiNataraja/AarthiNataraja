#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length, breadth;
    
    public:
    //overloaded constructors
    Rectangle(){length = breadth = 0;}
    Rectangle(int l, int b);
    
    //facilitators
    int area();
    int perimeter();
    
    int getLenth(){ return length; }//accessors
    void setLength(int l){ length = l; }//mutators
    
    ~Rectangle(){} //destructor
};

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    Rectangle r(10, 5);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    cout << "Get Length: " << r.getLenth() << endl;
    r.setLength(20);
    cout << "Get Length: " << r.getLenth() << endl;
    return 0;
}
