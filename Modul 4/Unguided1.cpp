#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Function to find a number in an array using Binary Search
bool binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true; // Number found
        } else if (arr[mid] < target) {
            left = mid + 1; // Search on the right side
        } else {
            right = mid - 1; // Search on the left side
        }
    }

    return false; // Number not found
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the number to search for: ";
    cin >> target;

    // Using binary search to find the number
    if (binarySearch(arr, target)) {
        cout << "The number " << target << " is found in the array." << endl;
    } else {
        cout << "The number " << target << " is not found in the array." << endl;
    }

    return 0;
}