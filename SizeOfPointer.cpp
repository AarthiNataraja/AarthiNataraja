using namespace std;
struct Rectangle
{
  int length;
  int breadth;
};

int main()
{
    int *p;
    char *p1;
    float *p2;
    double *p3;
    struct Rectangle *p4;
    
    cout << "sizeof int: " << sizeof(p) << endl;
    cout << "sizeof char: " << sizeof(p1) << endl;
    cout << "sizeof float: " << sizeof(p2) << endl;
    cout << "sizeof double: " << sizeof(p3) << endl;
    cout << "sizeof struct: " << sizeof(p4) << endl;
    
    return 0;
}
