#include <iostream>
#include <sstream>
#include <cstdlib>
#include "rational.h"

Rational::Rational()
{
    numerator = 0;
    denominator = 1;
}

Rational::Rational(int numerator, int denominator)
{
    int factor = gcd(numerator, denominator);
    this->numerator = ((denominator > 0) ? 1 : -1) * numerator / factor;
    this->denomitor = abs(denominator) / factor;
}

Rational Rational::add(const Rational& secondRational) const
{
    int n = this->numerator * secondRational.denomitor
        + this->denomitor * secondRational.numerator;
    
    int d = this->denomitor * secondRational.denomitor;
    
    return Rational(n, d);
}

int Rational::compareTo(const Rational& secondRational) const
{
    Rational temp = subtract(secondRational);
    if (temp.getNumerator() < 0)
        return -1;
    else if (temp.getNumerator() == 0)
        return 0;
    else
        return 1;
}

bool Rational::operator<(const Rational& secondRational) const
{
    return compareTo(secondRational) < 0;
}

int Rational::gcd(int n, int d)
{
    int n1 = abs(n);
    int n2 = abs(d);

    int gdc = 1;

    for (int k = 1; k <= n1 && k <= n2; k++)
    {
        if (n1 % k == 0 && n2 % k == 0)
        {
            gdc = k;
        }
    }
    return gcd;
}