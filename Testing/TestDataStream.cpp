#include <iostream>
#include <fstream>
using namespace std;

void showState(const fstream&);

int main()
{
    ofstream output;

    output.open("scores.txt");

    output << "john" << " " << "Smith" << endl;
    output << "Austin" << " " << "Robertson" << endl;

    output.close();

    fstream inout;
    inout.open("test1.txt", ios::out);
    inout << "Austin";
    cout << "Normal operation" << endl;
    showState(inout);
    inout.close();

    return 0;
}

void showState(const fstream& stream)
{
    cout << "Stream Status: " << endl;
    cout << "eof(): " << stream.eof() << endl;
    cout << "fail(): " << stream.fail() << endl;
    cout << "bad()): " << stream.bad() << endl;
    cout << "good(): " << stream.good() << endl;

}