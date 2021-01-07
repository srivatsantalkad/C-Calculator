#include <iostream>
void displayInstructions();
// Output instructions to command line

long double calculateExpression(char op, long double number1, long double number2);
// Precondition: op contains either '+', '-', '*', or '/'.
// Postcondition: return result of the expression: number1 op number2, where op is the operator.

int main() {
	char op;
	long double number1, number2, result;

	displayInstructions();
	std::cin >> number1 >> op >> number2;

	result = calculateExpression(op, number1, number2);
	std::cout << result << std::endl;
	return 0;
}

void displayInstructions()
{
	std::cout << "Examples:\n1 + 1\n2 - -5\n25.3 * -3\n0 / 1\n";
  std::cout << "Please enter a calculation between 2 numbers (+, -, *, /): ";
}
long double calculateExpression(char op, long double number1, long double number2)
{
  switch(op)
  {
    case '+':
      return number1 + number2;
    case '-':
      return number1 - number2;
    case '*':
      return number1 * number2;
    case '/':
      return number1 / number2;
  }
	return 0;
}