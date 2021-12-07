#include <iostream>

enum class Operation { Add, Subtract, Multiply, Divide };

class Calculator
{
private:
	Operation op;
public:
	Calculator(Operation operation) { op = operation; }
	int calculator(int arg1, int arg2)
	{
		switch (op)
		{
		case Operation::Add:
			return arg1 + arg2;
			break;
		case Operation::Subtract:
			return arg1 - arg2;
			break;
		case Operation::Multiply:
			return arg1 * arg2;
			break;
		case Operation::Divide:
			return arg1 / arg2;
			break;
		default:
			std::cout << "Error" << std::endl;
			break;
		}
	}
};

int main()
{
	int arg1, arg2;
	std::string operation;
	std::cout << "please input 2 argument for calculator : ";
	std::cin >> arg1 >> arg2;
	std::cout << "What type of operation do you want to perform ( Add, Subtract, Multiply, Divide )? ";
	std::cin >> operation;

	Operation op{};					// 這邊op後面的{}是為了初始化
	if (operation == "Add" || operation == "+") op = Operation::Add;
	else if (operation == "Subtract" || operation == "-") op = Operation::Subtract;
	else if (operation == "Multiply" || operation == "*") op = Operation::Multiply;
	else if (operation == "Divide" || operation == "/") op = Operation::Divide;

	Calculator calc(op);
	std::cout << arg1 << " " << operation << " " << arg2 << " = " << calc.calculator(arg1, arg2) << std::endl;
}