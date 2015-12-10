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

Fraction::add(const Fraction& sf) const {
	A = this->numerator();
	B = this->denominator();
	C = sf->numerator();
	D = sf->denominator();

	E = A * D / B * D;
	F = C * B / B * D;

	Fraction(E, F);
}

Fraction::subtract(const Fraction& sf) const {
	A = this->numerator();
	B = this->denominator();
	C = sf->numerator();
	D = sf->denominator();

	E = A * D / B * D;
	F = C * B / B * D;
}

Fraction::divide(const Fraction&) const {

}

Fraction::multiply(const Fraction&) const {

}