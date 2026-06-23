// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){
    
    std::vector<std::complex<double>> points;
    points.push_back(std::complex<double>(1.0,2.8));
    points.push_back(std::complex<double>(-2.4,4.8));
    points.push_back(std::complex<double>(1.0,-6.8));
    points.push_back(std::complex<double>(-1.5,2.8));

    for(int i=0;i<points.size();i++){
        std::cout<<"Point "<<i+1<<": "<<points[i].real()<<"+"<<points[i].imag()<<"i"<<std::endl;
    }

    std::cout << "The first real part: " << points.begin()->real() << std::endl;
    std::cout << "Imaginary part at index 1: " << points[1].imag() << std::endl;
    std::cout << "Next to last real: " << prev(points.end(), 2)->real() << std::endl;
    std::cout << "Last imaginary: " << (points.end() - 1)->imag() << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
