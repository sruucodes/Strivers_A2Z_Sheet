#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
INSERTION SORT-
1. selects element in each unsorted array.
2. place it in corresponding pos
3. inner while loop shifts eleemnts
TC--O(N2)
SC--O(1) alreadt sorted o(n)*/
void insertion_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    // vector<int> arr = {9, 10, 11, 12, 13, 14};
    int n = arr.size();
    insertion_sort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}