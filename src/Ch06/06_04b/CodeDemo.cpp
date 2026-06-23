// Complete Guide to C++ Programming Foundations
// Exercise 06_04
// Writing Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

std::string getPlayername();
int calculateScore(int baseScore, int multiplier);
void displayScore(const std::string&, int);

int main(){
    std::string playerName = getPlayername();
    int score = calculateScore(75,2);

    displayScore(playerName, score);
    // std::cout << playerName << " scored " << score << " points." << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}

std::string getPlayername(){
    return "Alex";
}
int calculateScore(int baseScore, int multiplier){
    return baseScore*multiplier;
}
void displayScore(const std::string& name, int score){

    std::cout << name << " scored " << score << " points." << std::endl;
}