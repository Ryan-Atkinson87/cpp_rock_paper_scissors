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

  int user = 0;

  // names the game and ask user for input
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";
  std::cin >> user;

  if (user == 1 && computer == 2) {
    std::cout << "You chose rock!\n";
    std::cout << "Computer chose paper!\n";
    std::cout << "Computer wins!\n";
  } 
  else if (user == 1 && computer == 3) {
    std::cout << "You chose rock!\n";
    std::cout << "Computer chose scissors!\n";
    std::cout << "You won!\n";
  }
  else if (user == 2 && computer == 1) {
    std::cout << "You chose paper!\n";
    std::cout << "Computer chose rock!\n";
    std::cout << "You won!\n";
  }
  else if (user == 2 && computer == 3) {
    std::cout << "You chose paper!\n";
    std::cout << "Computer chose scissorw!\n";
    std::cout << "Computer wins!\n";
  }
  else if (user == 3 && computer == 1) {
    std::cout << "You chose scissors!\n";
    std::cout << "Computer chose rock!\n";
    std::cout << "Computer wins!\n";
  }
  else if (user == 3 && computer == 2) {
    std::cout << "You chose scissors!\n";
    std::cout << "Computer chose paper!\n";
    std::cout << "You won!\n";
  }
  else if (user == computer) {
    std::cout << "You both chose the same!\n";
    std::cout << "It's a draw!\n";
  }
  else {
    std::cout << "Invalid input\n";
  }

}
