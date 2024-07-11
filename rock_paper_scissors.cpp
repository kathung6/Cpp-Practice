#include <iostream>
#include <stdlib.h>

/*
ROCK PAPER SCISSORS-
project takes input from the user: rock, paper or scissors, 
and outputs a randomly generator computer option, then outputs
if the user won or lost
*/

int main() {
    std::cout << "====================\n";
    std::cout << "Rock Paper Scissors!\n";
    std::cout << "====================\n";

    srand(time(NULL));
    int user;
    int computer = rand() % 3 + 1;

    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";

   std::cout << "Choose your fighter!\n";
   std::cin >> user;
//---------------------user chooses-----------------------------
   if (user == 1) {
    std::cout << "You choose rock...\n";
   } else if (user == 2) {
    std::cout << "You choose paper...\n";
   } else if (user == 3) {
    std::cout << "You choose scissors...\n";
   } else {
    std::cout << "Invalid input\n";
   }
//---------------------computer chooses-------------------------
   if (computer == 1) {
    std::cout << "CPU chooses rock...\n";
   } else if (computer == 2) {
    std::cout << "CPU chooses paper...\n";
   } else if (computer == 3) {
    std::cout << "CPU chooses scissors...\n";
   } else {
    std::cout << "Error\n";
   }
//---------------------user chooses rock------------------------
   if (user == computer) {
    std::cout << "It's a tie!\n";
   } else if (user == 1) {
    if (computer == 2) {
        std::cout << "You lose...\n";
    }
    if (computer == 3) {
        std::cout << "You win!\n";
    }
//---------------------user chooses paper-----------------------
   } else if (user == 2) {
    if (computer == 1) {
        std::cout << "You win!\n";
    }
    if (computer == 3) {
        std::cout << "You lose...\n";
    } 
//---------------------user chooses scissors--------------------
   } else if (user == 3) {
    if (computer == 1) {
        std::cout << "You lose...\n";
    }
    if (computer == 2) {
        std::cout << "You win!\n";
    }
   } else {
    std::cout << "Error\n";
   }

   std::cout << "Thanks for playing!\n";
}