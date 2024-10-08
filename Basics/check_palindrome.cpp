#include <iostream>
using namespace std;
int reverse_number(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}
int main()
{
    int num = 88088;
    int reversed_num = reverse_number(num);
    if (num == reversed_num)
    {
        cout << num << " is a palindrome";
    }
    else
    {
        cout << num << " is not a palindrome";
    }
}