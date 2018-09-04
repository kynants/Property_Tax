/* STARTING OUT WITH C++ FROM CONTROL STRUCTURES THROUGH OBJECTS:
 * CHAPTER 3 - EXPRESSIONS AND INTERACTIVITY
 * A county collects property taxes on the assessment value of property, which
 * is 60 percent of the property’s actual value. If an acre of land is valued
 * at $10,000, its assessment value is $6,000. The property tax is then 75¢
 * for each $100 of the assessment value. The tax for the acre assessed at
 * $6,000 will be $45. Write a program that asks for the actual value of a
 * piece of property and displays the assessment value and property tax.
 */

#include <iostream>
using namespace std;

int main() {
    double value;

    // User Input Prompt
    cout << "Enter the value of a piece of property: " << endl;
    cin >> value;
    cout << endl;

    // Calculations
    double assessVal = value * 0.6;
    double propTax = (assessVal / 100) * 0.75;

    // Output
    cout << "Assessment Value: $" << assessVal << endl;
    cout << "Property Tax: $" << propTax << endl;

    return 0;
}