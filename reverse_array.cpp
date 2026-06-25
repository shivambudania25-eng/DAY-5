#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {12, 5, 45, 23, 67, 23, 67, 3};
    std::cout << "Numbers: ";
    for (auto n : numbers) std::cout << n << " ";
    std::cout << std::endl;
    std::cout << "Array in reverse order: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
