#include <iostream>
#include <vector>

using namespace std;

// Function to count the occurrences of a number in a vector using Sequential Search
int countOccurrences(const vector<int>& data, int target) {
    int count = 0;

    for (int num : data) {
        if (num == target) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;

    int numOccurrences = countOccurrences(data, target);

    cout << "The number of occurrences of " << target << " in the data is: " << numOccurrences << endl;

    return 0;
}