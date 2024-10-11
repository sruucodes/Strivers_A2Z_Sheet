#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int largest(vector<int> &arr)
{
    /*// approach-1
    TC-O(N)
    SC-O(1)
    int largest=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }x
    return largest;

    */
    // approach-2
    // TC-O(n log n)
    // sc-o(1)

    sort(arr.begin(), arr.end());
    int largest = arr[arr.size() - 1];
    return largest;
}
int main()
{
    vector<int> arr = {90, 27, 67, 38, 101};
    cout << largest(arr);
}
