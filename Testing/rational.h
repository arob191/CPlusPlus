#indef RATIONAL_H
#define RATIONAL_H

class Rational
{
    public:
        Rational();
        Rational(int numerator, int denominator);
        int getNumerator();
        int getDenominator();

        Rational add(const Rational& secondRational) const;
        Rational subtract(const Rational& secondRational) const;
        Rational multiply(const Rational& secondRational) const;
        Rational divide(const Rational& secondRational) const;

        int compareTo(const Rational& secondRational) const;
        int equals(const Rational& secondRational) const;

        int intValue() const;
        double doubleValue() const;

        bool operator< (const Rational& secondRational) const;
        

    private:
        int numerator;
        int denominator;
        static int gcd(int n, int d);
};


#endif