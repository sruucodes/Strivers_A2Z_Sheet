#include <iostream>
#include <cmath>
using namespace std;
int count_digits(int number)
{
    int digitcount = 0;

    while (number > 0)
    {
        digitcount++;
        number /= 10;
    }
    return digitcount;
}
bool is_armstrong(int num)
{
    int org = num;
    int digitcount = count_digits(num);
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum = sum + pow(digit, digitcount);
        num /= 10;
    }
    if (sum == org)
    {
        return true;
    }
    return false;
}
int main()
{

    int num = 153;
    bool is_as_num = is_armstrong(num);
    if (is_as_num)
    {
        cout << num << " is armstrong num";
    }
    else
    {
        cout << num << " is not armstrong num";
    }
}
