#include "Array.hpp"

int	main() 
{
    Array<int> arr(5);

    arr[1] = 4;
    {
        Array<int> tab(arr);
        std::cout << "tab at index 1: " << tab[1] << std::endl;
    }
    std::cout << "-------------------------" << std::endl;
    try
    {
        arr[-1] = 99;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "-------------------------" << std::endl;
    try
    {
        arr[6] = 88;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "-------------------------" << std::endl;
	return 0;
}
