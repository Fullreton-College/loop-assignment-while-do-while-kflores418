/*
4. Enhance the program that you wrote for the Programming Challenge 3 so it 
keeps a count of the number of guesses the user makes. When the user correctly 
guesses the random number, the program should display the number of guesses 
along with the message of congratulations.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
cout << "Guess the Random Number from 1 to 100" << endl;

//Genarate the random number
srand(time(0));
int random = (rand() % 100) + 1;;
int guess = 0;    

//Checking my random number
//cout << "Random Number:" << random << endl;

//Time to guess
for (int i = 1; guess != random; i++)
{
    cout << "What is your guess? ";
    cin >> guess;
    if (guess < random)
    {
        cout << "Too Low. Try again." << endl;
    }    
    else if (guess > random)
    {
        cout << "Too High. Try again." << endl;
    }
    else if (guess = random)
    {
        cout << "Congratulations! You figured out my number." << endl;
        cout << "It took you " << i << " tries. Good Job!" << endl;
    }
}
    return 0;
}