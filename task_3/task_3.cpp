#include <iostream>
#include <vector>
#include <functional>

std::vector <std::function<double(const double&)>> functions = { [](const double& n) {std::cout << "sin: " << sin(n) << " "; return 0; },
																 [](const double& n) {std::cout << "cos: " << cos(n) << " "; return 0; }};

int main()
{
	double angles[] = { 30 * 3.1415926 / 180, 60 * 3.1415926 / 180, 90 * 3.1415926 / 180 };
	for (const auto& angle : angles) {
		std::cout << angle << ": ";
		for (const auto& function : functions)
			function(angle);
		std::cout << std::endl;
	}
}

