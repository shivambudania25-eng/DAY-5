#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {12, 5, 45, 23, 67, 23, 67, 3};
    if (numbers.empty()) {
        std::cout << "No numbers provided." << std::endl;
        return 0;
    }
    auto maxValue = *std::max_element(numbers.begin(), numbers.end());
    std::cout << "Numbers: ";
    for (auto n : numbers) std::cout << n << " ";
    std::cout << std::endl;
    std::cout << "Maximum element: " << maxValue << std::endl;
    return 0;
}
