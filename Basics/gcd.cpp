#include <iostream>
using namespace std;
int gcd_of_ab(int a, int b)
{
    if (b != 0)
    {
        return gcd_of_ab(b, a % b);
    }
    else
    {
        return a;
    }
}
int main()
{
    int a = 18;
    int b = 9;
    int gcd = gcd_of_ab(a, b);
    cout << gcd;
}