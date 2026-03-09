/*
1. A country club, which currently charges $3,000 per year for membership, has announced 
it will increase its membership fee by 3 percent each year for the next five years. Write 
a program that uses a loop to display the projected rates for each of the next five years.
*/

#include <iostream>

using namespace std;

int main() {

    double membership = 3000;
    double tax = 0.03;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    for (int i = 1; i <= 5; i++)
    {
        membership = membership + (membership * tax);
        
        cout << "Membership in year " << i << " is: $" << membership << endl;
    }

    return 0;
}


