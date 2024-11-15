#include <iostream>
#include <windows.h>
#include <cmath>


int main() {

    bool multiplication = false;
    char MultiNum1, MultiNum2;

    bool Division = false;
    int DivNum1, DivNum2;
    

    bool addition = false;
    int AddNum1, AddNum2;

    bool subtraction = false;
    int SubNum1, SubNum2;

    bool squareroot = false;
    int SqrtNum1;

    char UserInput;
    bool IncorrectInput1 = false;


    std::cout << "                                      Calculator\n";
    Sleep(2000);
    std::cout << "Addition: +\n";
    Sleep(2000);
    std::cout << "Subtraction: -\n";
    Sleep(2000);
    std::cout << "Multiplication: *\n";
    Sleep(2000);
    std::cout << "Division: /\n";
    Sleep(2000);
    std::cout << "Square Root: ^\n";
    Sleep(2000);
    while (IncorrectInput1 == false) {// curly brace 1
        std::cout << "Please choose, then enter the desired operand.\n";
        std::cin >> UserInput;

        if (UserInput == '+') {//curly brace 2
            IncorrectInput1 = true;
            std::cout << "You chose addition!\n";



        }// this curly brace belongs to curly brace 2 
        else if (UserInput == '-') {// curly brace 4
            IncorrectInput1 = true;
            std::cout << "You chose subtraction!\n";



        }//this curly brace belongs to curly brace 4
        else if (UserInput == '*') {// curly brace 5
            IncorrectInput1 = true;
            std::cout << "You chose Multiplication!\n";



        }//this curly brace belongs to curly brace 5
        else if (UserInput == '/') {// curly brace 6
            IncorrectInput1 = true;
            std::cout << "You chose Division!\n";
            std::cout << "Please Enter the 2 numerators wanted to be Divided!\n";
            std::cin >> DivNum1, DivNum2;
            std::cout << "The answer to your equation is " << DivNum1 + DivNum2 << "\n";



        }//this curly brace belongs to curly brace 6
        else if (UserInput == '^') {// curly brace 7
            IncorrectInput1 = true;
            std::cout << "You chose Square Root!\n";



        }//this curly brace belongs to curly brace 7






        else {//curly brace 3
            std::cout << "Invalid Input, Try Again\n";
        }// this curly brace belongs to curly brace 3




















    }// this curly brace belongs to curly brace 1










    return 0;
}
