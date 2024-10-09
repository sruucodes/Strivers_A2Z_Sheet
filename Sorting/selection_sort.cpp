#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* SELECTION SORT-
1. select range of unsorted array i--> n-1
2. select min using j
3. swap min with first element
TC--O(N2)
SC--O(1)*/

void selection_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}
int main()
{
    vector<int> arr = {9, 56, 11, 12, 19, 14};
    int n = arr.size();
    selection_sort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}