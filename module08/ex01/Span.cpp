#include "Span.hpp"

#include <string>
#include <iostream>

Span::Span(unsigned int N) : _n(N)
{
}

Span::Span(const Span& ref) : _n(ref._n), _store(ref._store)
{

}

Span&	Span::operator=(const Span& ref)
{
    _n = ref._n;
    _store = ref._store;
    return *this;
}

Span::~Span()
{

}

void    Span::addNumber(int n)
{
    if (_store.size() >= _n)
        throw std::runtime_error ("span is full");
    _store.push_back(n);
}

unsigned int     Span::shortestSpan()
{
    int tmp;

    if (_store.size() <= 1)
        return 0;
    std::sort(_store.begin(), _store.end());
    tmp = _store[1] - _store[0];
    for (unsigned int i = 0; i < _store.size() - 1; i++)
    {
        int res = _store[i + 1] - _store[i];
        if (res < tmp)
            tmp = res;
    }
    return tmp;
}

unsigned int     Span::longestSpan()
{
    if (_store.size() <= 1)
        return 0;
    return *std::max_element(_store.begin(), _store.end()) - *std::min_element(_store.begin(), _store.end());
}
