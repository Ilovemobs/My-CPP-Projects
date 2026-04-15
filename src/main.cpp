#include <iostream>
#include <string> // Added for the string variable

using namespace std;

int main() {
    string choice; // Declare 'choice'
    cout << "What is given? F or C?" << endl;
    cin >> choice;

    if (choice == "F") {
        double f; // Declare 'f' properly
        cout << "What is the reading in fahrenheit: ";
        cin >> f;
        cout << "The reading in Celsius is: " << (f - 32) / 1.8 << endl;
    }
    if (choice == "f") {
        double f; // Declare 'f' properly
        cout << "What is the reading in fahrenheit: ";
        cin >> f;
        cout << "The reading in Celsius is: " << (f - 32) / 1.8 << endl;
    }
    if (choice == "C") {
        double c;
        cout << "What is the reading in Celsius? ";
        cin >> c;
        cout << "The reading in Fahrenheit is: " << (c * 1.8) + 32 << endl;
    }
    if (choice == "c") {
        double c;
        cout << "What is the reading in Celsius? "; //never gonna give you up /////my code sucks //fork this to make a better one
        cin >> c;
        cout << "The reading in Fahrenheit is: " << (c * 1.8) + 32 << endl;
    }

    return 0;
}
