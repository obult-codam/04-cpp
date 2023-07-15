#ifndef ITER_HPP
# define ITER_HPP

template <class T>
void iter(T *adress, size_t len, void (* func)(T&))
{
    for (size_t i = 0; i < len; i++)
        func(adress[i]);
}

template <class T>
void plusOne(T& q)
{
    q++;
}

#endif