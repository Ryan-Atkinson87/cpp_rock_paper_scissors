/* Rock paper scissors game
asks user for input of rock paper scissors
compares to random computer answer
determines who wins and informs user
*/

#include <iostream>
#include <stdlib.h>

int main() {

    // Live long and prosper
  
    // selects a random number between 1 and 3
    srand (time(NULL));
    int computer = rand() % 3 + 1;

    
    bool exit = false;
    bool valid = false;
    int user = 0;
    std::string input_string = "";

    //Names the game
    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";
    while (valid == false) {
        std::cout << "\n";
        std::cout << "Would you like to play?\n";
        std::cout << "\n";
        std::cout << "Response: ";
        std::cin >> input_string;
        std::cout << "\n";
        if (input_string == "no" || input_string == "No") {
            exit = true;
            std::cout << "\n";
            std::cout << "Goodbye!!\n";
            valid = true;
        }
        else if (input_string == "yes" || input_string == "Yes") {
            exit = false;
            valid = true;
        }
        else {
            std::cout << "\n";
            std::cout << " Please enter yes or no!\n";
        }
    }
    while (exit == false) {
        valid = false;
        while (valid == false) {
            //Produces a random number everytime
            computer = rand() % 3 + 1;
            user = 0;

            
            //ask user for input
            std::cout << "Rock\n";
            std::cout << "Paper\n";
            std::cout << "Scissors\n";
            std::cout << "\n";
            std::cout << "shoot! ";
            std::cin >> input_string;
            if (input_string == "rock" || input_string == "Rock") {
                user = 1;
            }
            else if (input_string == "paper" || input_string == "Paper") {
                user = 2;
            }
            else if (input_string == "scissors" || input_string == "Scissors") {
                user = 3;
            }
            if (user == 1 && computer == 2) {
                std::cout << "\n";
                std::cout << "You chose rock!\n";
                std::cout << "Computer chose paper!\n";
                std::cout << "\n";
                std::cout << "Computer wins!\n";
                valid = true;
            } 
            else if (user == 1 && computer == 3) {
                std::cout << "\n";
                std::cout << "You chose rock!\n";
                std::cout << "Computer chose scissors!\n";
                std::cout << "\n";
                std::cout << "You won!\n";
                valid = true;
            }
            else if (user == 2 && computer == 1) {
                std::cout << "\n";
                std::cout << "You chose paper!\n";
                std::cout << "Computer chose rock!\n";
                std::cout << "\n";
                std::cout << "You won!\n";
                valid = true;
            }
            else if (user == 2 && computer == 3) {
                std::cout << "\n";
                std::cout << "You chose paper!\n";
                std::cout << "Computer chose scissors!\n";
                std::cout << "\n";
                std::cout << "Computer wins!\n";
                valid = true;
            }
            else if (user == 3 && computer == 1) {
                std::cout << "\n";
                std::cout << "You chose scissors!\n";
                std::cout << "Computer chose rock!\n";
                std::cout << "\n";
                std::cout << "Computer wins!\n";
                valid = true;
            }
            else if (user == 3 && computer == 2) {
                std::cout << "\n";
                std::cout << "You chose scissors!\n";
                std::cout << "Computer chose paper!\n";
                std::cout << "\n";
                std::cout << "You won!\n";
                valid = true;
            }
            else if (user == computer) {
                std::cout << "\n";
                std::cout << "You both chose the same!\n";
                std::cout << "\n";
                std::cout << "It's a draw!\n";
                valid = true;
            }
            else {
                std::cout << "\n";
                std::cout << "Invalid input, enter rock, paper or scissors!\n";
            }
        }
        valid = false;
        while (valid == false) {
            std::cout << "\n";
            std::cout << "Would you like to play again?\n";
            std::cout << "\n";
            std::cout << "Response: ";
            std::cin >> input_string;
            std::cout << "\n";
            if (input_string == "no" || input_string == "No") {
                exit = true;
                std::cout << "\n";
                std::cout << "Goodbye!!\n";
                valid = true;
            }
            else if (input_string == "yes" || input_string == "Yes") {
                valid = true;
            }
            else {
                std::cout << "\n";
                std::cout << " Invalid input, enter yes or no!\n";
                valid = false;
                }
        }
    }

}
