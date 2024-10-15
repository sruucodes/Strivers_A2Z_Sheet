#include <iostream>
#include <vector>
#include <algorithm> // For sort() and reverse()
using namespace std;

// Function to count swaps needed to sort an array using cycle detection
int countSwapsToSort(vector<int> &arr)
{
    int n = arr.size();
    vector<pair<int, int>> arrPos(n); // Stores element values with their original positions

    // Storing the array elements and their original indices
    for (int i = 0; i < n; i++)
    {
        arrPos[i] = {arr[i], i};
    }

    // Sort the array by element values (sort by first value of pairs)
    sort(arrPos.begin(), arrPos.end());

    // Track visited elements
    vector<bool> visited(n, false);
    int swapCount = 0;

    // Traverse the sorted array and find cycles
    for (int i = 0; i < n; i++)
    {
        // If the element is already visited or is in the correct position, skip it
        if (visited[i] || arrPos[i].second == i)
        {
            continue;
        }

        // Initialize cycle size
        int cycleSize = 0;
        int j = i;

        // Explore the cycle
        while (!visited[j])
        {
            visited[j] = true;
            j = arrPos[j].second; // Move to the next index in the cycle
            cycleSize++;
        }

        // Add (cycleSize - 1) to swap count
        if (cycleSize > 1)
        {
            swapCount += cycleSize - 1;
        }
    }

    return swapCount;
}

int main()
{
    int n;
    cin >> n; // Input the number of elements

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i]; // Input array elements
    }

    // Handle edge case when the array has only one element
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    // Create a copy of the array for ascending and descending check
    vector<int> ascArr = arr;
    vector<int> descArr = arr;

    // Sort the arrays in ascending and descending order
    int ascSwaps = countSwapsToSort(ascArr);
    reverse(descArr.begin(), descArr.end()); // Reverse the array for descending order
    int descSwaps = countSwapsToSort(descArr);

    // Output the minimum of both swap counts
    cout << min(ascSwaps, descSwaps) << endl;

    return 0;
}
