#include "fraction.h"

int gcd(int x, int y) {
	if (y==0)
		return x;

	return gcd(y, x%y);
}

Fraction::Fraction() {
	top = 0;
	bottom = 1;
}

Fraction::Fraction(int numerator) {
	top = numerator;
	bottom = 1;
}

Fraction::Fraction(int numerator, int denominator) {
	gcd(numerator, denominator);
	top = numerator;
	bottom = denominator;
}
int Fraction::numerator() const {
	return numerator;
}

int Fraction::denominator() const {
	return denominator;
}

double Fraction::asDouble() {

}

Fraction::add(const Fraction&) const {

}

Fraction::subtract(const Fraction&) const {

}

Fraction::divide(const Fraction&) const {

}

Fraction::multiply(const Fraction&) const {

}