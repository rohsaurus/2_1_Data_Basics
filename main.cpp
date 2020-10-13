/**
 * Rohan Parikh
 * 2.1 Data Basics
 * 13 October 2020
 * Extra Thing: Enabling conversion between Fahrenheit to Celsius
 */

#include <iostream>
using namespace std;

int main() {
    int Celsius;
    string choice;
    // Program #1
    // Write a program that asks for a Celsius temperature and converts it to Fahrenheit

    //Extra thing enables conversion other way around

    cout
            << "Would you like to either convert from Faherenheit to Celsisus or Celsius to Fahrenheit. Please type f for faherenheit"
               " to celsius and type c for celsius to faherheit\n";
    cin >> choice;
    // Celsius to Fahrenheit
    if (choice == "c") {
    cout << "Enter a Celsius temperature and the system will convert it to Fahrenheit\n";
    cin >> Celsius;
    double celsiusToFahrenheit = 1.8 * Celsius + 32;
    cout << "The temperture in Fahreheit is " << celsiusToFahrenheit;
    cout << "\n";
}
    // Fahernheit to Celsius (Extra Thing)
    else  {
        cout << "Enter a Fahrenheit temperature and the system will convert it to Celsius\n";
        int fahreheit = 0;
        cin >> fahreheit;
        double fahreheitToCelsius = ((fahreheit-32)*5)/9;
        cout << "The temperture in Celsius is " << fahreheitToCelsius << "\n";
    }
    // Program #2: Write a program that asks the user how many pieces of pizza he/she ate and then tells him/her how far
    // he/she must jog to burn the calories consumed. A piece of pizza contains about 375 calories about a one mile jog
    // consumes about 100 calories.

    int pieceOfPizzaCalories = 375;
    //one mile jog burns 100 calories
    int amountOfPizza;
    cout << "How many pieces of pizza did you eat?\n";
    cin >> amountOfPizza;
    double distanceToRun = (pieceOfPizzaCalories*amountOfPizza)/100;
    cout << "You need to jog for a total distance of "<< distanceToRun << " miles.";
}