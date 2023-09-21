#include <iostream>
#include <set>
#include <list>
#include <vector>

template <class T>
void print_container(const T& values) {
    for (auto it = values.begin(); it != values.end(); ++it) {
        std::cout << *it;
        if (std::next(it) != values.end()) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set);

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list);

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector);
}