#include <iostream>
#include <vector>
#include <algorithm>

void print_vec(std::vector<int> v) {
    std::vector<int>::const_iterator i = v.cbegin();
    while (i != v.cend())
    {
        std::cout << *i << " ";
        i++;
    }
}

int main()
{
    std::vector <int> numbers = { 1, 1, 2, 5, 6, 1, 2, 4 };

    std::cout << "[IN]: ";
    print_vec(numbers);

    std::sort(numbers.begin(), numbers.end(),[](const int& a, const int& b) {
            return a < b;
        });

    auto it = std::unique(numbers.begin(), numbers.end());
    numbers.erase(it, numbers.end());

    std::cout << "\n[OUT]: ";
    print_vec(numbers);
}
