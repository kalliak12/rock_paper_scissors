//rock paper scissors game
//by kalliak12

#include <iostream>
using namespace std;

char getComputerOption() {
	srand(time(0));
	// It chooses a random number between 1, 2 and 3
	int num = rand() % 3 + 1;

	if (num == 1) return 'r';
	if (num == 2) return 'p';
	if (num == 3) return 's';
}

char getUserOption() {
	char c;
	cout << "ROCK PAPER SCISSORS GAME!" << endl;
	cout << "Choose one of the following options." << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "(r) for ROCK\n(p) for PAPER\n(s) for SCISSORS" << endl;
	cin >> c;

	while (c != 'r' && c != 'p' && c != 's') {
		cout << "Please only choose one of the following choices: " << endl;
		cout << "(r) for ROCK\n(p) for PAPER\n(s) for SCISSORS" << endl;
		cin >> c;
	}
	return c;
}

void chooseWinner(char cchoice, char uchoice){ //r p, p r, r s, s r, p s, s p
	
	if (cchoice == uchoice) {
		cout << "That is a tie!" << endl;
	}
	if (uchoice == 'r' && cchoice == 'p') {
		cout << "You win!! Paper wraps rock!" << endl;
	}
	if (uchoice == 'p' && cchoice == 'r') {
		cout << "Computer wins!! Paper wraps rock!" << endl;
	}
	if (uchoice == 'r' && cchoice == 's') {
		cout << "Computer wins!! Rock smashes scissors!" << endl;
	}
	if (uchoice == 's' && cchoice == 'r') {
		cout << "You win!! Rock smashes scissors!" << endl;
	}
	if (uchoice == 'p' && cchoice == 's') {
		cout << "You win!! Scissors cut paper!" << endl;
	}
	if (uchoice == 's' && cchoice == 'p') {
		cout << "Computer wins!! Scissors cut paper!" << endl;
	}

}
int main() {
	char uChoice;
	char cChoice;

	uChoice = getUserOption();
	cout << "Your choice is: " << endl;
	cout << uChoice << endl;
	cout << "Computer's choice is: " << endl;
	cChoice = getComputerOption();
	cout << cChoice << endl;

	chooseWinner(uChoice, cChoice);

	return 0;
}
