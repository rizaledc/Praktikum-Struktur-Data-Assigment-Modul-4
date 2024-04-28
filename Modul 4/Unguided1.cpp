#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Fungsi untuk mencari sebuah huruf pada sebuah kalimat menggunakan Binary Search
bool binarySearch(const string& sentence, char target) {
    int left = 0;
    int right = sentence.length() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (sentence[mid] == target) {
            return true; // Huruf ditemukan
        } else if (sentence[mid] < target) {
            left = mid + 1; // Cari di sebelah kanan
        } else {
            right = mid - 1; // Cari di sebelah kiri
        }
    }

    return false; // Huruf tidak ditemukan
}

int main() {
    string sentence;
    char target;

    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    // Melakukan sorting pada kalimat untuk memastikan binary search dapat berfungsi
    sort(sentence.begin(), sentence.end());

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target;

    // Menggunakan binary search untuk mencari huruf
    if (binarySearch(sentence, target)) {
        cout << "Huruf '" << target << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << target << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}