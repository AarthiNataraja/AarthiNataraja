#include <iostream>

using namespace std;

struct Rectangle
{
    int length, breadth;

void initialise(int len, int brdth)
{
    length = len;
    breadth = brdth;
}

int areaA()
{
    return (length * breadth);
}

int perimeter()
{
    return (2 * (length + breadth));
}

};

int main()
{
    Rectangle r = {0, 0};
    
    int l, b;
    cout << "Enter length and breadth: " << endl;
    cin >> l >> b;
    r.initialise(l, b);
    
    int area = r.areaA();
    int peri = r.perimeter();
    
    cout << "Area is: " << area << endl << "Perimeter is : " << peri << endl;

    return 0;
}
