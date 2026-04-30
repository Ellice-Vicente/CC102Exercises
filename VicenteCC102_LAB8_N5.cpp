#include <iostream>
#include <fstream>
#include <set>
using namespace std;

int main() {
    ifstream in("WORDS.TXT");
    ofstream out("RESULT.TXT");
    set<string> words;
    string word;

    while (in >> word) {
        words.insert(word);
    }

    for (auto w : words) {
        out << w << " ";
    }

    in.close();
    out.close();
}