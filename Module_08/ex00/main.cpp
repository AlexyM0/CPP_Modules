#include "easyfind.hpp"

int main()
{

    try
    {
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);
        
        int vec_to_find = 3;
        std::vector<int>::iterator it_vec = easyfind(vec, vec_to_find);
        std::cout << "Valeur trouvée dans le container : " << *it_vec << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::list<int> lst;
        lst.push_back(10);
        lst.push_back(20);
        lst.push_back(30);
        lst.push_back(40);
        lst.push_back(50);
        
        int lst_to_find = 25;
        std::list<int>::iterator it_lst = easyfind(lst, lst_to_find);
        std::cout << "Valeur trouvée dans le container : " << *it_lst << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    
}