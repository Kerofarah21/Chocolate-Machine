// Course:  CS213 - Programming II  - 2018
// Title:   Assignment III - Task 2 - problem 1
// purpose: Show the amount of chocolate bars in a machine after add money on it
// Author:  Kerolos Farah Adeeb 20170201
// Date:    17 November 2018
// Version: 1.0

#include <iostream>
using namespace std;

// Function takes the amount of $ and coupons
// then return the amount of chocolate bars and the rest of coupons
void chocolateBars(int dollars , int coupons);

int main()
{
    int dollars;
    cout << "Welcome to chocolate Machine" << endl << endl;
    cout << "Please put your money in the machine : ";
    cin >> dollars; // money to put in the machine
    while (dollars <= 0) // make sure that the input isn't negative or zero
    {
        cout << "Please put your money in the machine : ";
        cin >> dollars;
    }
    int coupons = dollars; // each dollar give one bar and every bar give one coupon
    cout << endl << endl;
    chocolateBars(dollars , coupons); // call function
    cout << endl << endl;
    cout << "Thank You" << endl;
    return 0;
}

void chocolateBars(int dollars , int coupons)
{
    int bars = dollars; // each dollar give one bar
    if(coupons < 7) // Base case of recursion
    {
        cout << "The amount of Chocolate Bars = " << bars << " bars" << endl;
        cout << "The rest of coupons = " << coupons << " coupons" << endl;
    }
    else // Recursive case
    {
        coupons-=6;
        chocolateBars(++dollars , coupons);
    }
}
