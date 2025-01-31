#include <iostream>
using std::string, std::cout, std::cin, std::endl; 


int main() {
    // Define variables
    string username;

    // Grab users name
    cout << "Hello. What is your name?" << std::endl;
    getline(cin, username);

    while(username.empty()) {
        
        cout << "What is your name? " << endl;
        getline(cin, username);


        if (username.empty()){
            cout << "Please provide a name" << endl;
        }

    }
    
    cout << "Hello " << username << endl;

    return 0;
}