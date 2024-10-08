#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int num)
{
    if (num == 0 || num == 1)
    {
        return false;
    }
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num = 19;
    if (is_prime(num))
    {
        cout << num << " is prime";
    }
    else
    {
        cout << num << " is not prime";
    }
}
