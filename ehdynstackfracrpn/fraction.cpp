#include <iostream>
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

Fraction::Fraction(int num) {
	top = num;
	bottom = 1;
}

Fraction::Fraction(int num, int den) {
	int result = gcd(num, den);
	top = num / result;
	bottom = den / result;
}
int Fraction::numerator() const {
	return top;
}

int Fraction::denominator() const {
	return bottom;
}

double Fraction::asDouble() const {
	double doubleresult = double(this->numerator()) / double(this->denominator());
	return doubleresult;
}

Fraction Fraction::add(const Fraction& sf) const {
	int A = this->numerator();
	int B = this->denominator();
	int C = sf.numerator();
	int D = sf.denominator();

	int E = A * D;
	int F = B * D;
	int G = C * B;

	int H = E + G;

	Fraction I = Fraction(H, F);

	return I;
}

Fraction Fraction::subtract(const Fraction& sf) const {
	int A = this->numerator();
	int B = this->denominator();
	int C = sf.numerator();
	int D = sf.denominator();

	int E = A * D;
	int F = B * D;
	int G = C * B;

	int H = E - G;

	Fraction I = Fraction(H, F);

	return I;
}

Fraction Fraction::divide(const Fraction& sf) const {
	int A = this->numerator();
	int B = this->denominator();
	int C = sf.numerator();
	int D = sf.denominator();

	int E = A * D;
	int F = B * C;

	Fraction G = Fraction(E, F);

	return G;
}

Fraction Fraction::multiply(const Fraction& sf) const {
	int A = this->numerator();
	int B = this->denominator();
	int C = sf.numerator();
	int D = sf.denominator();

	int E = A * C;
	int F = B * D;

	Fraction G = Fraction(E, F);

	return G;
}

Fraction operator+(const Fraction& a, const Fraction& b) {
	return a.add(b);
}

Fraction operator-(const Fraction& a, const Fraction& b) {
	return a.subtract(b);
}

Fraction operator*(const Fraction& a, const Fraction& b) {
	return a.multiply(b);
}

Fraction operator/(const Fraction& a, const Fraction& b) {
	return a.divide(b);
}

ostream& operator<<(ostream& os, const Fraction& f) {
	if (f.denominator() == 1) {
		os << f.numerator();
		return os;
	}
	else {
		os << f.numerator() << "/" << f.denominator();
		return os;
	}
}
