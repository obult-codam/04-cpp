#include <iostream>
#include "MutantStack.hpp"

#include <list>

int main()
{
    {
        MutantStack<int> mstack;
        mstack.push(5); // a
        mstack.push(17);
        std::cout << mstack.top() << std::endl; // 17
        mstack.pop();
        std::cout << mstack.size() << std::endl;    // 1
        mstack.push(3); // b
        mstack.push(5); // c
        mstack.push(737);   // d
        mstack.push(0); // e
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;  // 5 3 5 737 0  // a b c d e
        ++it;
        }
        std::stack<int> s(mstack);
    }

    std::cout << std::endl;

    {
        std::list<int> lstack;
        lstack.push_back(5); // a
        lstack.push_back(17);
        std::cout << lstack.back() << std::endl; // 17
        lstack.pop_back();
        std::cout << lstack.size() << std::endl;    // 1
        lstack.push_back(3); // b
        lstack.push_back(5); // c
        lstack.push_back(737);   // d
        lstack.push_back(0); // e
        std::list<int>::iterator it = lstack.begin();
        std::list<int>::iterator ite = lstack.end();
        ++it;
        // *it = 30;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;  // 5 3 5 737 0  // a b c d e
        ++it;
        }
    }

    std::cout << std::endl << "REVERSE" << std::endl;

    {
        MutantStack<int> mstack;
        mstack.push(5); // a
        mstack.push(17);
        std::cout << mstack.top() << std::endl; // 17
        mstack.pop();
        std::cout << mstack.size() << std::endl;    // 1
        mstack.push(3); // b
        mstack.push(5); // c
        mstack.push(737);   // d
        mstack.push(0); // e
        MutantStack<int>::reverse_iterator it = mstack.rbegin();
        MutantStack<int>::reverse_iterator ite = mstack.rend();
        ++it;
        *it = 42;   // changed to 42 here heheh
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;  // 5 3 5 737 0  // a b c d e
        ++it;
        }
        std::stack<int> s(mstack);
    }

    std::cout << std::endl;

    {
        std::list<int> lstack;
        lstack.push_back(5); // a
        lstack.push_back(17);
        std::cout << lstack.back() << std::endl; // 17
        lstack.pop_back();
        std::cout << lstack.size() << std::endl;    // 1
        lstack.push_back(3); // b
        lstack.push_back(5); // c
        lstack.push_back(737);   // d
        lstack.push_back(0); // e
        std::list<int>::reverse_iterator it = lstack.rbegin();
        std::list<int>::reverse_iterator ite = lstack.rend();
        ++it;
        *it = 42;   // changed to 42 here heheh
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;  // 5 3 5 737 0  // a b c d e
        ++it;
        }
    }

    std::cout << std::endl << "CONST" << std::endl;

    {
        MutantStack<int> mstack;
        mstack.push(5); // a
        mstack.push(17);
        std::cout << mstack.top() << std::endl; // 17
        mstack.pop();
        std::cout << mstack.size() << std::endl;    // 1
        mstack.push(3); // b
        mstack.push(5); // c
        mstack.push(737);   // d
        mstack.push(0); // e
        MutantStack<int>::const_iterator it = mstack.begin();
        MutantStack<int>::const_iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;  // 5 3 5 737 0  // a b c d e
        ++it;
        }
        std::stack<int> s(mstack);
    }

    std::cout << std::endl;

    {
        std::list<int> lstack;
        lstack.push_back(5); // a
        lstack.push_back(17);
        std::cout << lstack.back() << std::endl; // 17
        lstack.pop_back();
        std::cout << lstack.size() << std::endl;    // 1
        lstack.push_back(3); // b
        lstack.push_back(5); // c
        lstack.push_back(737);   // d
        lstack.push_back(0); // e
        std::list<int>::const_iterator it = lstack.begin();
        std::list<int>::const_iterator ite = lstack.end();
        ++it;
        // *it = 30;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;  // 5 3 5 737 0  // a b c d e
        ++it;
        }
    }

    std::cout << std::endl << "CONST REVERSE" << std::endl;

    {
        MutantStack<int> mstack;
        mstack.push(5); // a
        mstack.push(17);
        std::cout << mstack.top() << std::endl; // 17
        mstack.pop();
        std::cout << mstack.size() << std::endl;    // 1
        mstack.push(3); // b
        mstack.push(5); // c
        mstack.push(737);   // d
        mstack.push(0); // e
        MutantStack<int>::const_reverse_iterator it = mstack.rbegin();
        MutantStack<int>::const_reverse_iterator ite = mstack.rend();
        ++it;
        // *it = 30;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;  // 5 3 5 737 0  // a b c d e
        ++it;
        }
        std::stack<int> s(mstack);
    }

    std::cout << std::endl;

    {
        std::list<int> lstack;
        lstack.push_back(5); // a
        lstack.push_back(17);
        std::cout << lstack.back() << std::endl; // 17
        lstack.pop_back();
        std::cout << lstack.size() << std::endl;    // 1
        lstack.push_back(3); // b
        lstack.push_back(5); // c
        lstack.push_back(737);   // d
        lstack.push_back(0); // e
        std::list<int>::const_reverse_iterator it = lstack.rbegin();
        std::list<int>::const_reverse_iterator ite = lstack.rend();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;  // 5 3 5 737 0  // a b c d e
        ++it;
        }
    }
}