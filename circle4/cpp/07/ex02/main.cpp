#include "Array.hpp"

int main(int, char**)
{   
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Numeric Test 1: int" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    test<int>(10);
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Numeric Test 2: double" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    test<double>(10);
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Numeric Test 3: char" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    test<char>(10);
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "String Test" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    Array<std::string> arr1(3);
    arr1[0] = "42";
    arr1[1] = "Seoul";
    arr1[2] = "taeskim";
    Array<std::string> arr2(arr1);
    for (std::size_t i = 0 ; i < arr1.getSize() ; ++i)
    std::cout << arr1[i] << " ";
    std::cout << std::endl;
    for (std::size_t i = 0 ; i < arr1.getSize() ; ++i)
    std::cout << arr2[i] << " ";
    std::cout << std::endl;
    try {
    arr1[3] = "Not Work";
    arr2[3] = "Not Reach";
    } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------------" << std::endl;
    return 0;
}