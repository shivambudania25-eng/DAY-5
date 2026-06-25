#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

int main() {
    std::vector<int> numbers = {12, 5, 45, 23, 67, 23, 67, 3};
    std::set<int, std::greater<int>> uniqueValues(numbers.begin(), numbers.end());
    std::cout << "Numbers: ";
    for (auto n : numbers) std::cout << n << " ";
    std::cout << std::endl;
    if (uniqueValues.size() < 2) {
        std::cout << "Second largest element not available." << std::endl;
        return 0;
    }
    auto it = uniqueValues.begin();
    ++it;
    std::cout << "Second largest element: " << *it << std::endl;
    return 0;
}
