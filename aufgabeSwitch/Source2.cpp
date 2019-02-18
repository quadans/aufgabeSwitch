#include <iostream>

int calculate(int zahl1, int zahl2, char operation)
{
	switch (operation)
	{
	case '+': return zahl1 + zahl2;
		break;
	case '-': return zahl1 - zahl2;
		break;
	case '*': return zahl1 * zahl2;
		break;
	case '/': return zahl1 / zahl2;
		break;
	case '%': return zahl1 % zahl2;
		break;
	default:
		std::cout << "Error! Wrong Operation choosed!";
		return false;
	}
}

void Ausgabe(int result)
{
	std::cout << result << "\n";
}

int main()
{
	int zahl1 = 0;
	int zahl2 = 0;
	char operation;
	std::cout << "Gebe eine Zahl ein: ";
	std::cin >> zahl1;
	std::cout << "Gebe eine zweite Zahl ein: ";
	std::cin >> zahl2;
	std::cout << "Welche Operation soll ausgefuehrt werden? \n";
	std::cout << "+ , - , * , / , % \n";
	std::cin >> operation;
	Ausgabe(calculate(zahl1,zahl2,operation));
	return 0;
}