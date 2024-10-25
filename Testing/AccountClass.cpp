#include <iostream>
#include <fstream>

using namespace std;

class MyInteger
{
    private:
        int value;

    public:

        MyInteger(int value)
        {
            this->value = value;
        }

        int getValue() const //Will not be able to modify anything in the function with the const keyword
        {
            return value;
        }

        bool isPrime() const {
            return isPrime(value);
        }

        static bool isPrime(const MyInteger& o) 
        {
            return isPrime(o.getValue());
        }

        static bool isPrime(int num) 
        {
            if (num == 1 || num == 2)
                return true;
            for (int i = 2; i <= num/2; i++)
            {
                if (num % i == 0)
                    return false;
            }
            return true;
        }

        static bool isEven(int n) // This is a static method
        {
            return n % 2 == 0;
        }

        bool isEven() const { // This is a member function that has access to the "value" attribute
            return isEven(this->value);
        }

        static bool isEven(const MyInteger& n) // This method is a static method that uses an object as it's parameters
        {
            return isEven(n.getValue());
        }

        bool equals(const MyInteger& n) const
        {
            return this->value == n.getValue();
        }

        bool equals(int anotherNum) const {
            return anotherNum == value;
        }
};


int main()
{

    MyInteger n1(5);

    cout << "n1 is even? " << n1.isEven() << endl;
    cout << "n1 is prime? " << n1.isPrime() << endl;
    cout << "5 is prime? " << MyInteger::isPrime(5) << endl;


    return 0;
}