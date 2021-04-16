#include <iostream>

using namespace std;

int areaA(int len, int brdth)
{
    return (len * brdth);
}

int perimeter(int len, int brdth)
{
    return (2 * (len + brdth));
}

int main()
{
    //procedural/modular program
    int l=0, b=0, area=0, peri=0;
    cout << "Enter the length and breadth";
    cin >> l >> b;
    
    cout << "Length is : " << l << endl;
    cout << "Breadth is : " << b << endl;
    
    area = areaA(l,b);
    cout << "Area is: " << area << endl;
    
    peri = perimeter(l,b);
    cout << "Perimeter is : " << peri << endl;
    
    return 0;
}
