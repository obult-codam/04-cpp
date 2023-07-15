#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
public:
	MutantStack<T>(){};
	MutantStack<T>(const MutantStack<T>& ref) : std::stack<T>(ref) {};
	MutantStack<T>& operator=(const MutantStack<T>& ref){
		*this = (std::stack<T>)ref;
		return *this;
	}
	~MutantStack<T>(){};

	// iterator typedef
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	// iterators
	// normal
	iterator begin() {
		return std::begin(std::stack<T, Container>::c);
	}

	iterator end() {
		return std::end(std::stack<T, Container>::c);
	}

	// const
	const_iterator begin() const {
		return std::begin(std::stack<T, Container>::c);
	}

	const_iterator end() const {
		return std::end(std::stack<T, Container>::c);
	}

	// reverse
	reverse_iterator rbegin() {
		return std::stack<T, Container>::c.rbegin();
	}

	reverse_iterator rend() {
		return std::stack<T, Container>::c.rend();
	}

	// const reverse
	const_reverse_iterator rbegin() const {
		return std::stack<T, Container>::c.rbegin();
	}

	const_reverse_iterator rend() const {
		return std::stack<T, Container>::c.rend();
	}
};

#endif
