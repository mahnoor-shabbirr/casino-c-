#include <iostream>
#include <iomanip>   
#include <cstdlib>  
#include <ctime>     
using namespace std;


int main() {
   
    const double STATE_TAX_RATE = 0.04;   
    const double COUNTY_TAX_RATE = 0.02;  
    const int MIN_DICE = 1;
    const int MAX_DICE = 6;


    srand(time(0));  


    
    double balance;
    double bet;


    cout << "WELCOME TO THE C++ CASINO" << endl;
    cout << "Enter starting balance ($): ";
    cin >> balance;
    cout << "Enter your bet amount ($): ";
    cin >> bet;


   
    int die1 = (rand() % (MAX_DICE - MIN_DICE + 1)) + MIN_DICE;
    int die2 = (rand() % (MAX_DICE - MIN_DICE + 1)) + MIN_DICE;
    int total = die1 + die2;


    cout << "Rolling the dice..." << endl;
    cout << "Die 1: " << die1 << " | Die 2: " << die2
         << " | Total: " << total << endl;


    cout << fixed << setprecision(2);  // paisay hamesha 2 decimal tak


    
    if (total == 7 || total == 11 || total == 5) {
        double grossWinnings = bet;
        double stateTax = grossWinnings * STATE_TAX_RATE;
        double countyTax = grossWinnings * COUNTY_TAX_RATE;
        double totalTax = stateTax + countyTax;
        double netWinnings = grossWinnings - totalTax;


        balance = balance + netWinnings;


        cout << "*** YOU WON! ***" << endl;
        cout << "Gross Winnings: $" << grossWinnings << endl;
        cout << "State Tax (4%): $" << stateTax << endl;
        cout << "County Tax (2%): $" << countyTax << endl;
        cout << "Total Tax Deducted: $" << totalTax << endl;
        cout << "Net Payout: $" << netWinnings << endl;
    } else {
        balance = balance - bet;


        cout << "*** YOU LOST! ***" << endl;
        cout << "Bet Lost: $" << bet << endl;
    }


    cout << "Your updated balance is: $" << balance << endl;


    return 0;
}