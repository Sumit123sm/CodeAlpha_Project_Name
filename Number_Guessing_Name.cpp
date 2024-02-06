#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void PlayerInfo(string n, int s, int age)
{
    cout << "Player Name is : " << n << endl;
    cout << "Player Score is : " << s << endl;
    cout << "Player Age is : " << age << endl;
    cout << "\n\t\t\tGame End!" << endl;
}

void stop(int dC, string n, int s, int age)
{
    int difficultyChoice = dC;
    if (difficultyChoice == 0)
    {
        cout << "\n\t\t\tThank For Playing With Us!" << endl;
        PlayerInfo(n, s, age);
        exit(0);
    }
}

void level1(int pC, int &s, int sN, string n, int age)
{
    int playerChoice = pC;
    int &score = s;
    int secretNumber = sN;
    cout << "\nYou have 10 choices for finding the secret number between 1 and 100.";
    int choicesLeft = 10;
    for (int i = 1; i <= 10; i++)
    {
        cout << "\n\nEnter the number: ";
        cin >> playerChoice;
        if (playerChoice == secretNumber)
        {
            cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
            cout << "\t\t\t Thanks for playing...." << endl;
            cout << "Play the game again with us!!\n\n"
                 << endl;
            score++;
            PlayerInfo(n, score, age);
            break;
        }
        else
        {
            cout << "Nope, " << playerChoice << " is not the right number\n";
            if (playerChoice > secretNumber)
            {
                cout << "The secret number is too low than the number you have chosen" << endl;
            }
            else
            {
                cout << "The secret number is too high than the number you have chosen" << endl;
            }
            choicesLeft--;
            cout << choicesLeft << " choices left. " << endl;
            if (choicesLeft == 0)
            {
                cout << "You couldn't find the secret number, it was " << secretNumber << ", You lose!!\n\n";
                cout << "Play the game again to win!!!\n\n";
                PlayerInfo(n, score, age);
            }
        }
    }
}

void level2(int pC, int &s, int sN, string n, int age)
{
    int playerChoice = pC;
    int &score = s;
    int secretNumber = sN;
    cout << "\nYou have 7 choices for finding the secret number between 1 and 100.";
    int choicesLeft = 7;
    for (int i = 1; i <= 7; i++)
    {
        cout << "\n\nEnter the number: ";
        cin >> playerChoice;
        if (playerChoice == secretNumber)
        {
            cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
            cout << "\t\t\t Thanks for playing...." << endl;
            cout << "Play the game again with us!!\n\n"
                 << endl;
            score++;
            PlayerInfo(n, score, age);
            break;
        }
        else
        {
            cout << "Nope, " << playerChoice << " is not the right number\n";
            if (playerChoice > secretNumber)
            {
                cout << "The secret number is too low than the number you have chosen" << endl;
            }
            else
            {
                cout << "The secret number is too high than the number you have chosen" << endl;
            }
            choicesLeft--;
            cout << choicesLeft << " choices left. " << endl;
            if (choicesLeft == 0)
            {
                cout << "You couldn't find the secret number, it was " << secretNumber << ", You lose!!\n\n";
                cout << "Play the game again to win!!!\n\n";
                PlayerInfo(n, score, age);
            }
        }
    }
}

void level3(int pC, int &s, int sN, string n, int age)
{
    int playerChoice = pC;
    int &score = s;
    int secretNumber = sN;
    cout << "\nYou have 5 choices for finding the secret number between 1 and 100.";
    int choicesLeft = 5;
    for (int i = 1; i <= 5; i++)
    {
        cout << "\n\nEnter the number: ";
        cin >> playerChoice;
        if (playerChoice == secretNumber)
        {
            cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
            cout << "\t\t\t Thanks for playing...." << endl;
            cout << "Play the game again with us!!\n\n"
                 << endl;
            score++;
            PlayerInfo(n, score, age);
            break;
        }
        else
        {
            cout << "Nope, " << playerChoice << " is not the right number\n";
            if (playerChoice > secretNumber)
            {
                cout << "The secret number is too low than the number you have chosen" << endl;
            }
            else
            {
                cout << "The secret number is too high than the number you have chosen" << endl;
            }
            choicesLeft--;
            cout << choicesLeft << " choices left. " << endl;
            if (choicesLeft == 0)
            {
                cout << "You couldn't find the secret number, it was " << secretNumber << ", You lose!!\n\n";
                cout << "Play the game again to win!!!\n\n";
                PlayerInfo(n, score, age);
            }
        }
    }
}

int main()
{

    string name;

    cout << "Enter Your Name : ";
    getline(cin, name);
    int score = 0;
    int age = 0;
    cout << "Enter Your Age : ";
    cin >> age;
    cout << endl;
    cout << "\n\t\t\tWelcome to GuessTheNumber game!" << endl;
    cout << "You have to guess a number between 1 and 100. You'll have limited choices based on the level you choose. Good Luck!" << endl;

    do
    {

        cout << "\nEnter the difficulty level: \n";
        cout << "1 for easy!\t";
        cout << "2 for medium!\t";
        cout << "3 for difficult!\t";
        cout << "0 for ending the game!\n"<< endl;

        int difficultyChoice;
        cout << "Enter the number: ";
        cin >> difficultyChoice;

        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;
        switch (difficultyChoice)
        {
        case 0:
            stop(difficultyChoice, name, score, age);
            break;
        case 1:
            level1(playerChoice, score, secretNumber, name, age);
            break;
        case 2:
            level2(playerChoice, score, secretNumber, name, age);
            break;
        case 3:
            level3(playerChoice, score, secretNumber, name, age);
            break;
        default:
            cout << "Wrong choice, Enter a valid choice to play the game! (0,1,2,3)" << endl;
            break;
        }
        cout << endl;

    } while (true);

    return 0;
}
