#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
   
    if (ac == 2)
    {
        try
        {
            BitcoinExchange btc(av[1]);
            btc.stockInputPath();
            //btc.stockDataCsv();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
        std::cerr << "Wrong number of args" << std::endl;
    return (0);
}