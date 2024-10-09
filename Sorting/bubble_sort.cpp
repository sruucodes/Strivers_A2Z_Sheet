#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*Bubble Sort- compares the adjacent elements and moves the largest element to the last position in the end of 1st iteration.
2loops
i---> n-1 to 0
j---> 0- i-1
runs n-1 loops.
TC--O(N2)
SC--O(1)
*/

void bubble_sort(vector<int> &arr)
{
    int n = arr.size();
    int didSwap = 0;
    for (int i = n - 1; i > 0; i++)
    {
        for (int j = 0; j < i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        if (didSwap == 0)
        {
            // cout << "NO swaps";
            break;
        }
    }
}
int main()
{
    // vector<int> arr = {13, 46, 24, 52, 20, 9};
    vector<int> arr = {9, 10, 11, 12, 13, 14};
    int n = arr.size();
    bubble_sort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}