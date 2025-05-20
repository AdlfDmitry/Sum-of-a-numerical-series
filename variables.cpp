#include <iostream>
class Values
{
private:
	int n;
	int m;
	double summ ;
public:
	int get_n() {
		return n;
	}
	int get_m() {
		return m;
	}
	Values() {
		std::cin >> n;
		std::cin >> m;
		summ = 0.0;
	}
	virtual void print(int val1, int val2) {
		std::cout << "N equals: " << val1 << std::endl;
		std::cout << "M equals: " << val2 << std::endl;
	}
	virtual void printResult (double val1) {
		std::cout << "Summ is:  " << val1 << std::endl;
	}
	double SumCalculation(int n, int m) {
		double iter = 0.0;
		for (; n < m; n++) {
			iter = (1.0 / (n * (n + 1) * (n + 3)));
			std::cout << (1.0 / (n * (n + 1) * (n + 3))) << std::endl;
			summ += iter;
		}
		return summ;
	}
		double get_summ() {
			return summ;
		}
};

