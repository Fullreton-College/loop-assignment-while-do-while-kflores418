/*
3. Write a program that generates a random number between 1 and 100 and asks 
the user to guess what the number is. If the user’s guess is higher than the 
random number, the program should display “Too high. Try again.” If the user’s
 guess is lower than the random number, the program should display 
 “Too low. Try again.” The program should use a loop that repeats until the user 
 correctly guesses the random number. Then the program should display 
 “Congratulations. You figured out my number.”
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
while (guess != random)
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
    }
}
    return 0;
}