#include <iostream>
#include <cmath>
using namespace std;
void is_prime(int num)
{
    if (num == 0 || num == 1)
    {
        cout << " 0 is not prime";
    }
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int num = 27;
    is_prime(num);
}