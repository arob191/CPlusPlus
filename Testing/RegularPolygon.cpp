#include <iostream>

using namespace std;

class RegularPolygon
{
    private:
        int n;
        double side;
        double x;
        double y;

    public:
        RegularPolygon(){
            n = 3;
            side = 1;
            x = 0;
            y = 0;
        }

        RegularPolygon(int n, double side) {
            this->n = n;
            this->side = side;
            x = 0;
            y = 0;
        }

        const getN(){
            return n;
        }

        void setN(int NewN){
            n = NewN;
        }

};


int main()
{
    RegularPolygon myPolly;

    RegularPolygon test(1, 2);

    cout << test.getN() << endl;

    test.setN(3);

    cout << test.getN() << endl;

    return 0;
}