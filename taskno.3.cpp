//writing a program for converting the temperature from degree to fahrenheit or fahrenheit to degree
#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temperature;
    int choice;

    // Step 1: Accept temperature input
    cout << "Enter the temperature: ";
    cin >> temperature;

    // Step 2: Allow users to choose the conversion direction
    cout << "Select the conversion direction:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    // Step 3: Implement logic for temperature conversion and display the result
    if (choice == 1) {
        double fahrenheit = celsiusToFahrenheit(temperature);
        cout << temperature << " Celsius is equal to " << fahrenheit << " Fahrenheit." << endl;
    } else if (choice == 2) {
        double celsius = fahrenheitToCelsius(temperature);
        cout << temperature << " Fahrenheit is equal to " << celsius << " Celsius." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
