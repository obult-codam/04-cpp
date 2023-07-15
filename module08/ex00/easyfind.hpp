#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator    easyfind(T container, int to_find) {
    typename T::iterator tmp = std::find(container.begin(), container.end(), to_find);
    if (tmp == container.end())
        throw std::runtime_error ("not found");
    return tmp;
};

#endif