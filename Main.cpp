
// tester function

#include "Calculator.h"
#include <iostream>


int main() {
    
    Calculator<int> i_cal;
    
    std::cout << i_cal('+', 3, 7)   << std::endl;
    std::cout << i_cal('-', 12, 17) << std::endl;
    std::cout << i_cal('*', 5, 2)   << std::endl;
    std::cout << i_cal('/', 30, 10) << std::endl;
    std::cout << i_cal('$', 1, 7)   << std::endl;
    
    Calculator<double> d_cal;
    
    std::cout << d_cal('+', 3.8, 0.8) << std::endl;
    std::cout << d_cal('-', 20, 1.7)  << std::endl;
    std::cout << d_cal('/', 6.7, 9.3) << std::endl;
    std::cout << d_cal('*', 11, 4.2)  << std::endl;
    
    return 0;
}

