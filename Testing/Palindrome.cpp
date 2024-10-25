#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& str)
{
    int left = 0;
    int right = str.size() - 1;

    while (left < right){
        if (str[left] != str[right]){
            return false;
        }
        right--;
        left++;
    }

    return true;
}

int main()
{
    string str;

    cout << "please enter a string: " << endl;
    getline(cin >> ws, str);

    cout << isPalindrome(str);


    return 0;
}