// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 10 - 30 - 22
// This program gets a number and adds up all the numbers leading up to it.

#include <iostream>
#include <string>

int main() {
    std::string userNumStr;
    int userNumInt;
    int stopCatchNum;
    int sumNum;
    float userNumFloat;
    stopCatchNum = 0;
    sumNum = 0;
    std::cout << "What is the number you wish to calculate? ";
    std::cin >> userNumStr;
    try {
        userNumInt = std::stoi(userNumStr);
        if (userNumInt <=0) {
            std::cout << "Your input " << userNumInt <<
            " is not a positive integer (e.g 5)\n";
            return main();
        } else if (userNumFloat = static_cast<float>(userNumInt)) {
            std::cout << "Your input " <<
            userNumStr << "is a decimal please enter an integer(e.g 5)\n";
            return main();
        }
        while (stopCatchNum < userNumInt) {
            stopCatchNum = stopCatchNum + 1;
            sumNum = stopCatchNum + sumNum;
        }
        std::cout << "All the numbers leading up to " <<
        userNumInt << " sum up to "<< sumNum << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Your input "<<
        userNumStr <<" is not a valid integer (e.g 5)\n";
    }
}
