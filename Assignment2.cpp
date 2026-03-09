/*
2.  Write a program with a loop that lets the user enter a series of integers, 
followed by the end sentinel −99 to signal the end of the series. After all 
the numbers have been entered, the program should display the largest and 
smallest numbers entered.
*/

#include <iostream>

using namespace std;

int main() 
{

double new_num, largest_num, smallest_num;

cout << "Largest and Smallest Numbers" << endl;
cout << "Enter a positive number to start and negative number to end:" << endl;
cin >> new_num;

largest_num = new_num;
smallest_num = new_num;

while (new_num >= 0)
{
cout << "Next number:" << endl;
cin >> new_num;
    if (new_num >largest_num)
    {
        largest_num = new_num;
    }
    else if ((new_num < smallest_num) && (new_num >=0))
    {
        smallest_num = new_num;
    }
}
cout << "Largest Number:" << largest_num << endl;
cout << "Smallest Number" << smallest_num << endl;   

return 0;
}