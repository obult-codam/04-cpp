#include <iostream>
#include "easyfind.hpp"


int     main()
{
    int arr[] = {15, 42, 29, 12, 1998};
    std::vector<int> container(arr, arr + sizeof(arr) / sizeof(int));
    std::vector<int>::iterator it;

    it = easyfind(container, 42);
    std::cout << *it << std::endl;

    try {
        it = easyfind(container, 43);
        std::cout << *it << std::endl;
    } catch (std::runtime_error e) {
        std::cout << e.what() << std::endl;
    }

}