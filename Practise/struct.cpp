#include <iostream>

using namespace std;

struct Rectangle
{
    int length, breadth;
};

void initialise(Rectangle *r3, int length, int breadth)
{
    r3->length = length;
    r3->breadth = breadth;
}

int areaA(Rectangle r1)
{
    return (r1.length * r1.breadth);
}

int perimeter(Rectangle r2)
{
    return (2 * (r2.length + r2.breadth));
}

int main()
{
    Rectangle r = {0, 0};
    
    int l, b;
    cout << "Enter length and breadth: " << endl;
    cin >> l >> b;
    initialise(&r, l, b);
    
    int area = areaA(r);
    int peri = perimeter(r);
    
    cout << "Area is: " << area << endl << "Perimeter is : " << peri << endl;

    return 0;
}
