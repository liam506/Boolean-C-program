//the header file specifies the functions for fraction class
#ifndef Fraction_H
#define Fraction_H
class Fraction
{
private:                               //instance variables

	void simplify();

	int numerator, denominator;

public:                              //operations
	Fraction();                       //default constructor
	Fraction(int, int);              //parameterized constructor

	void getFraction();
	void showFraction() const;            //observer
	Fraction MultipliedBy(Fraction);      //observer
	Fraction DividedBy(Fraction) const;   //observer
	Fraction AddedTo(Fraction&);          //observer
	Fraction Subtract(Fraction&);         //observer
	bool isGreaterThan(Fraction&) const;

};
#endif
