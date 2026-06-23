// Complete Guide to C++ Programming Foundations
// Exercise 03_05
// Compound Assignment Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int ammo = 30;
    int incoming_zombies = 20;

    std::cout << "Initial Ammo: " << ammo << std::endl;
    std::cout << "Initial Zombies Incoming: " << incoming_zombies << std::endl;

    // Addition assignment
    ammo += 10;
    std::cout<<"Ammo after finding some: "<<ammo<<std::endl;

    // Subtraction assignment
    ammo -= 5;
    std::cout<<"Ammo after lossing some: "<<ammo<<std::endl;

    // Multiplication assignment
    incoming_zombies *= 2;
    std::cout<<"Zombies after multiplication: "<<incoming_zombies<<std::endl;

    // Division assignment
    incoming_zombies /= 5;
    std::cout<<"Zombies after division: "<<incoming_zombies<<std::endl;

    // Remainder assignment

    std::cout << std::endl << std::endl;
    return 0;
}
