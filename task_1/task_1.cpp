#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector <int> src = { 4, 7, 9, 14, 12 };
    std::for_each(src.begin(), src.end(), [](int& val) {val = val % 2 != 0 ? val * 3 : val; });
    std::for_each(src.begin(), src.end(), [](const int& val) {std::cout << val << " "; });
    std::cout << std::endl;
}
