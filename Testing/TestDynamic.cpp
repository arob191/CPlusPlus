#include <iostream>
using namespace std;

class A
{
public:
  A()
  {
    t();
    cout << "i from A is " << i << endl;
  }

  virtual void t()
  {
    i = 20;
  }

  int i = 0;
};

class B : public A
{
public:
  B()
  {
    cout << "i from B is " << i << endl;
  }

  void t() override
  {
    i = 30;
  }
};

int main()
{
  A* p = new B();
  p->t();
  cout << "i is now " << p->i << endl;

  return 0;
}