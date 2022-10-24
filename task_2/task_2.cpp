#include <iostream>
#include <variant>
#include <vector>
#include <string>
#include <algorithm>


std::variant <int, std::string, std::vector<int>> get_variant() {
	std::srand(std::time(nullptr));
	int random_variable = std::rand() % 3;
	std::variant<int, std::string, std::vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = std::vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
}

int main()
{
	std::variant val = get_variant();
	if (std::holds_alternative<int>(val)) {
		std::cout << std::get<0>(val) * 2;
	}
	else if (std::holds_alternative<std::string>(val)) {
		std::cout << std::get<1>(val);
	}
	else if (std::holds_alternative<std::vector<int>>(val)) {
		std::for_each(std::get<2>(val).begin(), std::get<2>(val).end(), [](const int& n) {std::cout << n << " "; });
	}
	else {
		std::cout << "Неизвестный тип данных.";
	}
	std::cout << std::endl;
}
