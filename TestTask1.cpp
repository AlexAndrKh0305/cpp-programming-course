#include <iostream>
#include <string>
#include <cmath>

class Triangle {

public:

	class NegativeSideError {

	public:

		NegativeSideError() {
			message = "Triangle can't include negative side!";
		}

		void printMessage() {
			std::cout << message << "\n";
		}

	private:

		std::string message;
	};

	class TooBigSideError {

	public:

		TooBigSideError() {
			message = "One of the sides is greater or equal than sum of other!";
		}

		void printMessage() {
			std::cout << message << "\n";
		}

	private:

		std::string message;
	};

	Triangle(double a, double b, double c) {
		if (a < 0 || b < 0 || c < 0) {
			throw NegativeSideError();
		} else if (a + b <= c || a + c <= b || b + c <= a) {
			throw TooBigSideError();
		}
		side1 = a;
		side2 = b;
		side3 = c;
	}

	double square() {
		double semiPerimeter = (side1 + side2 + side3) / 2;
		return std::sqrt(semiPerimeter * (semiPerimeter - side1)
			* (semiPerimeter - side2) * (semiPerimeter - side3));
	}

private:
	double side1;
	double side2;
	double side3;

};

int main() {

	double side1, side2, side3;

	std::cout << "side1 = ";
	std::cin >> side1;
	std::cout << "side2 = ";
	std::cin >> side2;
	std::cout << "side3 = ";
	std::cin >> side3;

	try {
		Triangle* triangle = new Triangle(side1, side2, side3);
		std::cout << triangle->square();
	} catch (Triangle::NegativeSideError& error) {
		error.printMessage();
	} catch (Triangle::TooBigSideError& error) {
		error.printMessage();
	}

	return 0;
}