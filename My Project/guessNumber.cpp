/* Programmer = Sudhanshu Barnwal
Purpose = Guess Number Game
Date = 17/05/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int guessNum;
    cout << "\n You Need to guess the Random Number from 1 to 100 whatever chance you play the game your score will decide on it " << endl;

    cout << "\n -- Random Number is GENERATED -- " << endl;
    cout << " ------ START GAME -------" << endl;

    cout << "\n Enter anyone Number from 1 to 100 :- ";
    cin >> guessNum;

    srand(time(0));
    int randomNum = (rand() % 100);
    int countGuess = 0;

    reset :
    while (guessNum != randomNum)
    {
        if (guessNum <= 100 && guessNum >= 1)
        {
            if (guessNum > randomNum)
            {
                cout << ++countGuess << ") Try Again....." << endl;
                cout << "Your guessed Number is Greater than the Random Number." << endl;
                cout << "\n Enter anyone Number from 1 to 100 :- ";
                cin >> guessNum;
                goto reset;
            }
            else if (guessNum < randomNum)
            {
                cout << ++countGuess << ") Try Again....." << endl;
                cout << "Your guessed Number is Less than the Random Number." << endl;
                cout << "\n Enter anyone Number from 1 to 100 :- ";
                cin >> guessNum;
                goto reset;
            }
        }
        else
        {
            cout << ++countGuess << ") Try Again....." << endl;
            cout << "Your need to Enter the Number from 1 to 100 Only." << endl;
            cout << "\n Enter anyone Number from 1 to 100 :- ";
            cin >> guessNum;
            goto reset;
        }
    }

    cout << "\nYour Guessed Number is Correct i.e. " << randomNum << endl;
    cout << " ------ SCORE : " << 100 - countGuess << " ------ " << endl;
    cout << endl;
    return 0;
}