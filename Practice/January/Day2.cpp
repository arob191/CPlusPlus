#include <iostream>
using namespace std;


int main() {

    string userWord;

    cout << "Provide one word: ";
    getline(cin >> ws, userWord);

    string reversedWord = " ";
    for(int i = userWord.length() - 1; i >= 0; i--) {
        reversedWord += userWord[i];
    }

    cout << "Here is your word reversed:" << reversedWord << endl;

    return 0;
}