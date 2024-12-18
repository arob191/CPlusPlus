#include <iostream>

using namespace std;

class custom_exception : public exception
{
    virtual const char* what() const noexcept
    {
        return "Custom Exception";
    }

};

int main()
{
    string word = "four";

    try
    {
        // cout << word.at(4);
        throw custom_exception();
    }
    catch(exception& e)
    {
        cout << "Exception thrown! " << e.what() << endl;
    }





    return 0;
}