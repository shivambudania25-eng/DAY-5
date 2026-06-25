#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> numbers = {12, 5, 45, 23, 67, 23, 67, 3};
    auto sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Numbers: ";
    for (auto n : numbers) std::cout << n << " ";
    std::cout << std::endl;
    std::cout << "Sum of array elements: " << sum << std::endl;
    return 0;
}
