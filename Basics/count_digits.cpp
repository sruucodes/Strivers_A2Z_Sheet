#include <iostream>
#include <algorithm>
using namespace std;
// 1. Count the number of digits in a given number
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
int main()
{
    int number = 9899;
    int count = count_digits(number);
    cout << count;
}