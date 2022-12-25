class Fraction {
private:
	int numerator;
	int denominator;

public:
	Fraction(int numerator, int denominator) {
		this -> numerator = numerator;
		this -> denominator = denominator;
	}

	void print() {
		cout << this-> numerator << "/" << this-> denominator << endl;
	}

	void simplify() {
		int gcd = 1;
		int j = min(this -> numerator, this -> denominator);
		for (int i = 2; i <= j; i++) {
			if (this -> numerator % i == 0 && this -> denominator % i == 0 ) {
				gcd = i;
			}
		}
		this -> numerator /= gcd;
		this -> denominator /= gcd;
	}

	void add(Fraction const &F2) {
		int d = this -> denominator * F2.denominator;
		int n = (this -> numerator * F2.denominator) + (F2.numerator * this -> denominator);
		numerator = n;
		denominator = d;

		simplify();
	}

	void multiply(Fraction const &F2) {
		numerator *= F2.numerator;
		denominator *= F2.denominator;
		simplify();
	}
};