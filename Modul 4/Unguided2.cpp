#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to count the number of vowels in a sentence
int countVowels(const string& sentence) {
    int vowelCount = 0;

    for (char c : sentence) {
        // Convert character to lowercase
        char lowercaseChar = tolower(c);

        // Check if the character is a vowel
        if (lowercaseChar == 'a' || lowercaseChar == 'i' || lowercaseChar == 'u' ||
            lowercaseChar == 'e' || lowercaseChar == 'o') {
            vowelCount++;
        }
    }

    return vowelCount;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    int numVowels = countVowels(sentence);

    cout << "The number of vowels in the sentence is: " << numVowels << endl;

    return 0;
}