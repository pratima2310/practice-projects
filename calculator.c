#include <stdio.h>
#include <string.h>

#include "Calculator.h"

// TODO: Define functions
//       InitCalculator(), Add(), Subtract(), Multiply(), Divide(), Clear(), GetValue()

Calculator InitCalculator() {
    Calculator calc;
    calc.value = 0.0;
    return calc;
}

Calculator Add(double val, Calculator c) {
    c.value += val;
    return c;
}

Calculator Subtract(double val, Calculator c) {
    c.value -= val;
    return c;
}

Calculator Multiply(double val, Calculator c) {
    c.value *= val;
    return c;
}

Calculator Divide(double val, Calculator c) {
    if (val != 0) {
        c.value /= val;
    }
    return c;
}

Calculator Clear(Calculator c) {
    c.value = 0.0;
    return c;
}

double GetValue(Calculator c) {
    return c.value;
}
// main.c------------------------------------------------------------------------------------------
#include <stdio.h>

#include "Calculator.h"

int main() {
	Calculator calc = InitCalculator();
	double num1;
	double num2;

	scanf("%lf", &num1);
	scanf("%lf", &num2);

	// 1. The initial value
	printf("%.1lf\n", GetValue(calc));

	// 2. The value after adding num1
	calc = Add(num1, calc);
	printf("%.1lf\n", GetValue(calc));

	// 3. The value after multiplying by 3
	calc = Multiply(3, calc);
	printf("%.1lf\n", GetValue(calc));

	// 4. The value after subtracting num2
	calc = Subtract(num2, calc);
	printf("%.1lf\n", GetValue(calc));

	// 5. The value after dividing by 2
	calc = Divide(2, calc);
	printf("%.1lf\n", GetValue(calc));

	// 6. The value after calling the Clear() method
	calc = Clear(calc);
	printf("%.1lf\n", GetValue(calc));

	return 0;
}
