/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main () {
  srand (time(NULL));//allow to select random numbers; ensure NULL is capitalized
  std::string user;
	while(user != "exit"){
	    int computer = rand() % 3 + 1;//random number 1-3; has to be inside the loop to keep changing, if not, you will ahave a continuance random number
		cout << "====================\n";
		std::cout << "rock paper scissors!\n";
		std::cout << "====================\n";
		std::cout << "1) ✊\n";
		std::cout << "2) ✋\n";
		std::cout << "3) ✌️\n";
		std::cout << "shoot! ";

		std::cin >> user;

	   if (user == "exit") {
	            break; // Exit the game
	   }
	   int userChoice; // int has to be declared outside try

       try { //try and catch was added to catch the uncaught exception
           userChoice = std::stoi(user); //this execute the choosing to int
       } catch (const std::exception& e) {
           std::cout << "Invalid input! Please enter a valid number (1-3) or 'exit'.\n";
           continue; // Skip the rest of the loop and start again
       }

	if (userChoice < 1 || userChoice > 3) { //this catches only numbers;
	            std::cout << "Invalid input! Please enter a valid number (1-3) or 'exit'.\n";
	            continue; // Skip the rest of the loop and start again
	        }
	  switch (userChoice){
		case 1:
		  if(computer == 1){
			std::cout << "It is a tie!\n";
		  } if (computer == 2) {
			std::cout << "You loose!\n";
		  } if (computer == 3) {
			std::cout << "You won!\n";
		  } break;

		case 2:
		  if(computer == 1){
			std::cout << "You won!\n";
		  } if (computer == 2) {
			std::cout << "It is a tie!\n";
		  } if (computer == 3) {
			std::cout << "You loose!\n";
		  } break;

		case 3:
		  if(computer == 1){
			std::cout << "You loose!\n";
		  } if (computer == 2) {
			std::cout << "You won!\n";
		  } if (computer == 3) {
			std::cout << "It is a tie!\n";
		  } break;
	  }
	  std::cout << "The computer chose: " << computer << "\n";
	}

}
