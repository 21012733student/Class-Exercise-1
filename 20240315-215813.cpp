#include <iostream>
using namespace std;

int main() {
    double merchandiseCost, salary, rent, electricityCost;
    double expenses, desiredProfit, totalRevenue, markup, salePrice;

    // Prompting Linda to enter information
    cout << "Enter total cost of merchandise: ";
    cin >> merchandiseCost;
    cout << "Enter total salary of employees (including your own): ";
    cin >> salary;
    cout << "Enter yearly rent: ";
    cin >> rent;
    cout << "Enter estimated electricity cost: ";
    cin >> electricityCost;

    // Calculating total expenses
    expenses = merchandiseCost + salary + rent + electricityCost;

    // Prompting Linda to enter desired profit
    cout << "Enter desired net profit percentage (e.g., 10 for 10%): ";
    cin >> desiredProfit;

    // Calculate total revenue needed
    totalRevenue = expenses / (1 - desiredProfit / 100);

    // Calculate markup
    markup = totalRevenue / merchandiseCost;

    
    salePrice = markup * 0.85 * merchandiseCost;

    // output of the results 
    cout << "The merchandise should be marked up by approximately " << markup << " times." << endl;
    cout << "After putting the item on sale at 15% off, the sale price should be: $" << salePrice << endl;

    return 0;
}