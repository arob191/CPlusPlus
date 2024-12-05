#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    vector<int> intVector;
    
    for (int i = 0; i < 10; i++) {
        intVector.push_back(i + 1);
    }

    for (int i = 0; i < intVector.size(); i++)
    {
        cout << intVector[i] << " ";
    }

    vector<string> stringVector;

    stringVector.push_back("Austin");
    stringVector.push_back("Saturn");
    stringVector.push_back("Lilly");

    for (int i = 0; i < stringVector.size(); i++)
    {
        cout << stringVector[i] << " ";
    }

    stringVector.pop_back();
   
    for (int i = 0; i < stringVector.size(); i++)
    {
        cout << stringVector[i] << " ";
    }

    // vector<string> stringVector2;
    // stringVector2.swap(stringVector);

    // for (int i = 0; i < stringVector2.size(); i++)
    // {
    //     cout << stringVector2[i] << " ";
    // }

    stringVector.insert(stringVector.begin(), "Hello");
    
    for (int i = 0; i < stringVector.size(); i++)
    {
        cout << stringVector[i] << " ";
    }

    return 0;
}
