// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a,b = 5;
int main(){
    bool flag;
    a = 6;
    flag = false;
    std::cout<<"a ="<<a<<std::endl;
    std::cout<<"b ="<<b<<std::endl;
    std::cout<<"Flag ="<<flag<<std::endl;

    flag = true;
    std::cout<<"Flag ="<<flag<<std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
