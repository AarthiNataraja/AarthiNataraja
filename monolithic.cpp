#include <iostream>

using namespace std;

int main()
{
    //Monolithic program
    int l=0, b=0, area=0, peri=0;
    cout << "Enter the length and breadth";
    cin >> l >> b;
    
    cout << "Length is : " << l << endl;
    cout << "Breadth is : " << b << endl;
    
    area = l * b;
    cout << "Area is: " << area << endl;
    
    peri = 2 * (l + b);
    cout << "Perimeter is : " << peri << endl;
    
    return 0;
}
