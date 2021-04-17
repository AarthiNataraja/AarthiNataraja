#include <iostream>

using namespace std;

double taylor(double x, double n)
{
    static double fact=1, powr=1;
    int res=0, taylr=0;
    
    if(n == 0)
        return 1;
    else
    {
        taylr = taylor(x, n-1);
        fact = fact*n;
        powr = powr*x;
        
        res = taylr+powr/fact;
        return res;
    }
    
}
int main(int argc, const char * argv[]) {
    double taylorSeries = 15, value;
    double x=4;
    value = taylor(x, taylorSeries);
    cout << value << endl;
    return 0;
}
