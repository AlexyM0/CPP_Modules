#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    std::cout << "----------" << std::endl;
    while (it != ite) 
    { 
        std::cout << *it << std::endl;
        ++it; 
    }
    std::stack<int> s(mstack);

    std::cout << std::endl;


    // TEST AVEC STD::LIST POUR COMPARER
    std::list<int> lst;

    lst.push_back(5);
    lst.push_back(17);

    std::cout << lst.back() << std::endl;

    lst.pop_back();

    std::cout << lst.size() << std::endl;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    //[...]
    lst.push_back(0);

    std::list<int>::iterator it2 = lst.begin();
    std::list<int>::iterator ite2 = lst.end();

    ++it2;
    --it2;
    std::cout << "----------" << std::endl;
    while (it2 != ite2) 
    { 
        std::cout << *it2 << std::endl;
        ++it2; 
    }
    std::list<int> s2(lst);
    std::cout << std::endl;

    // TEST ITERATOR INVERSE

    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite) 
    { 
        std::cout << *rit << std::endl;
        ++rit; 
    }

}