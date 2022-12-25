class ComplexNumbers {
private:
	int real;
	int imaginary;

public:
	ComplexNumbers(int real, int imaginary) {
		this -> real = real;
		this -> imaginary = imaginary;
	}

	void print() {
		cout << real << " + " <<  "i" << imaginary << endl;
	}

	void plus(ComplexNumbers const &c2) {
		real += c2.real;
		imaginary += c2.imaginary;
	}

	void multiply(ComplexNumbers const &c2) {
		// real = (real * c2.real) - (imaginary * c2.imaginary);
		/*
			Put in var r not directly used var real as in next statement
			the value of old real is to be used but if var real is used here then
			value of old real will get changed.
		*/
		int r = (real * c2.real) - (imaginary * c2.imaginary);
		imaginary = (real * c2.imaginary) + (imaginary * c2.real);
		real = r;
	}
};