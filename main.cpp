#include <iostream>
#include "variables.cpp"
int main() {
	Values VAL;
	VAL.get_n(); 
	VAL.get_m();
	VAL.print(VAL.get_n(), VAL.get_m());
	VAL.SumCalculation(VAL.get_n(), VAL.get_m());
	VAL.printResult(VAL.get_summ());
	return 0;
}