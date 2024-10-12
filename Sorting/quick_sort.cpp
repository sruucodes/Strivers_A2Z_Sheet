#include <iostream>
#include <vector>
using namespace std;

/*
Time Complexity:
Average case: O(N log N)
Worst case: O(N²) (occurs when the pivot is the smallest or largest element every time)
Space Complexity: O(log N) for the recursive call stack.
*/

// Function to partition the array
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low]; // Choosing the first element as the pivot
    int left = low + 1;   // Start from the next element
    int right = high;     // Start from the end of the array

    while (true)
    {
        // Increment left index until an element greater than the pivot is found
        while (left <= right && arr[left] <= pivot)
        {
            left++;
        }
        // Decrement right index until an element less than the pivot is found
        while (left <= right && arr[right] >= pivot)
        {
            right--;
        }
        // If left and right cross each other, the partitioning is done
        if (left > right)
        {
            break;
        }
        else
        {
            // Swap elements at left and right indices
            swap(arr[left], arr[right]);
        }
    }
    // Place the pivot in its correct position
    swap(arr[low], arr[right]);
    return right; // Return the index of the pivot
}

// Function to perform quick sort
void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        // Partitioning the array and getting the pivot index
        int pivot_index = partition(arr, low, high);
        // Recursively sort the left and right subarrays
        quick_sort(arr, low, pivot_index - 1);  // Sort the left subarray
        quick_sort(arr, pivot_index + 1, high); // Sort the right subarray
    }
}

int main()
{
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10}; // Example array

    // Call quick_sort on the entire array
    quick_sort(arr, 0, arr.size() - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
