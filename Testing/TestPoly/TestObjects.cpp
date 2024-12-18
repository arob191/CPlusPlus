#include <iostream>
#include "GeometricObject.cpp"
#include "Rectangle.cpp"

using namespace std;

void displayGeometricObject(GeometricObject& g) {
    GeometricObject* p = &g;
    cout << g.getArea() << endl;
    cout << dynamic_cast<Rectangle*>(p)->getWidth();
}

int main()
{
    Rectangle rectangle(5, 3);
    displayGeometricObject(rectangle);

    return 0;
}