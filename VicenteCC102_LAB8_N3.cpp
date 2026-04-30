#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("WORDS.TXT");
    string word, longest = "";

    while (file >> word) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    cout << "Longest word: " << longest;

    file.close();
}