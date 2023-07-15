#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>

class	Span
{
public:
	Span(unsigned int N);
	Span(const Span& ref);
	Span& operator=(const Span& ref);
	~Span();

	// Member functions
	void addNumber(int n);
	unsigned int shortestSpan();
	unsigned int longestSpan();
private:
	Span();
	unsigned int _n;
	std::vector<int> _store;
};

#endif
