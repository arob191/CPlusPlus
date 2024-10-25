#include <iostream>

using namespace std;

int main()
{
    string cars[][3] = {{"mustang", "Ford GT", "Shelby 500"},
                       {"Camero", "Stringray", "Silverado"},
                       {"Hellcat", "RAM TRX", "Dodge Viper"}};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << cars[i][j] << ", ";
        }
        cout << endl;
    }

    return 0;
}