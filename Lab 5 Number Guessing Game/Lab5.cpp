#include <iostream>
#include <time.h>

using namespace std;
//Preconditon: Guess is entered
//Postconditon: Guess is determined to be correct or incorrect
void numgame(int& wins,int& loses);
//Preconditon: Guess is determined to be correct
//Postconditon: Random reply is chosen
void winstate();
//Precondition: Guess is determined to be incorrect
//Postcondition: Random reply is chosen
void losestate();
//Precondition: Player has gotten the result of their game
//Postconditon: Player is given a random prompt to play again
void playagain();
//Precondtion: Player was prompted to play again
//Postconditon: Player enters in response if they are going to play again
void replayanswer(bool& replay);

int main()
{
	int wins=0, losses=0;
	bool replay = true;
	do
	{
		numgame(wins, losses);
		playagain();
		replayanswer(replay);
	} while (replay == true);
	cout << "Your record was " << wins << "-" << losses << endl;
	return 0;
}
void numgame(int& wins, int& losses)
{
	int answer, guess, i = 0;
	srand(time(NULL));
	answer = rand() % 100 + 1;
	cout << answer << endl;
	do
	{
		cout << "Guess a number between 1 and 100 inclusive\n";
			cin >> guess;
		if (guess == answer)
		{
			cout << "You won" << endl;
			++wins;
			break;
		}
		if (i == 20)
		{
			++losses;
			cout << "You lost" << endl;
		}
		else
		{
			cout << "Your answer is Incorrect! Please guess again.\n";
			++i;
		}
	} while (i < 20 || guess != answer);
}
void winstate()
{
	int statement;
	statement = rand() % 10 + 1;
	switch (statement)
	{
	case 1:
		cout << "You won!\n";
		break;
	case 2:
		cout << "Winner!\n";
		break;
	case 3:
		cout << "Congrats!\n";
		break;
	case 4:
		cout << "Winner Winner Chicken Dinner\n";
		break;
	case 5:
		cout << "Big Dubs\n";
		break;
	case 6:
		cout << "Did you cheat?\n";
		break;
	case 7:
		cout << "How did you do that?\n";
		break;
	case 8:
		cout << "Easy game\n";
		break;
	case 9:
		cout << "Impressive\n";
		break;
	case 10:
		cout << "You were supposed to do that\n";
		break;
	}
}
void losestate()
{
	int statement;
	statement = rand() % 10 + 1;
	switch (statement)
	{
	case 1:
		cout << "Loser\n";
		break;
	case 2:
		cout << "You lose\n";
		break;
	case 3:
		cout << "You failed\n";
		break;
	case 4:
		cout << "Not quite\n";
		break;
	case 5:
		cout << "Big L\n";
		break;
	case 6:
		cout << "Tries are up\n";
		break;
	case 7:
		cout << "Still couldn't get it?\n";
		break;
	case 8:
		cout << "I can't beleive you didn't get it\n";
		break;
	case 9:
		cout << "You suck\n";
		break;
	case 10:
		cout << "Couldn't quite make it\n";
		break;
	}
}
void playagain()
{
	int statement;
	statement = rand() % 10 + 1;
	switch (statement)
	{
	case 1:
		cout << "You should play again\n";
		break;
	case 2:
		cout << "Go again?\n";
		break;
	case 3:
		cout << "Another round?\n";
		break;
	case 4:
		cout << "Why not try again\n";
		break;
	case 5:
		cout << "Give it another go\n";
		break;
	case 6:
		cout << "Try again?\n";
		break;
	case 7:
		cout << "Again?\n";
		break;
	case 8:
		cout << "Once more?\n";
		break;
	case 9:
		cout << "Wanna try again?\n";
		break;
	case 10:
		cout << "Wanna give it another go?\n";
		break;
	}
}
void replayanswer(bool& replay)
{
	cout << "Enter number > 0 for yes, 0 or letter for no\n";
	cin >> replay;
}