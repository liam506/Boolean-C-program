//the implementation of the functions declared in fraction.h
#include<iostream>
#include "Fraction.h"
using namespace std;

//default constructor
Fraction::Fraction()
{
    numerator = 0; denominator = 1;
}

//parameterised constructor
Fraction::Fraction(int n, int d)
{
    numerator = n; denominator = d;
    simplify();
}

void Fraction::showFraction() const
{
    cout << numerator << "/" << denominator;
}

//print the fractions
void Fraction::getFraction()
{
    cout << "Enter Values for the fraction object:" << endl;
    cout << "Numerator:";
    cin >> numerator;

    cout << "Denominator:";
    cin >> denominator;
}

// this function reduces the calling object
void Fraction::simplify()
{
    int k = 2;
    while (k <= numerator && k <= denominator)
    {
        if (numerator % k == 0 && denominator % k == 0)
        {
            numerator = numerator / k;
            denominator = denominator / k;
            k = 1;
        }
        k++;
    }
}

// this function add the fraction of calling object and fraction of object recved as argument
Fraction Fraction::AddedTo(Fraction& f)
{
    Fraction r;
    r.denominator = denominator * f.denominator;
    r.numerator = r.denominator / denominator * numerator + r.denominator / f.denominator * f.numerator;
    r.simplify();
    return r;
}

// this function subtract the fraction of object recved as argument from fraction of calling object
Fraction Fraction::Subtract(Fraction& f)
{
    Fraction r;
    r.denominator = denominator * f.denominator;
    r.numerator = r.denominator / denominator * numerator - r.denominator / f.denominator * f.numerator;
    r.simplify();
    return r;
}

// this function multiplies the fraction of calling object by fraction of object recved as argument
Fraction Fraction::MultipliedBy(Fraction f)
{
    Fraction r;
    r.numerator = numerator * f.numerator;
    r.denominator = denominator * f.denominator;
    r.simplify();
    return r;
}

// this function divides the fraction of calling object by fraction of object recved as argument
Fraction Fraction::DividedBy(Fraction f) const
{
    Fraction r;
    r.numerator = numerator * f.denominator;
    r.denominator = denominator * f.numerator;
    r.simplify();
    return r;
}

bool Fraction::isGreaterThan(Fraction& f) const
{
    if (numerator > f.numerator)
        return true;
    else
        return false;
}

