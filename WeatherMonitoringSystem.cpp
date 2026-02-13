#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int days;
    cout << "Weather monitoring system" << endl;
    cout << "Enter the number of days to record temperatures: ";
    cin >> days;

    vector<double> temperature(days);
    double total = 0.0;

    cout << "Please enter the temperature for " << days << " days: " << endl;

    for (int i = 0; i < days; i++) {
        cout << "Day " << (i + 1) << ": ";
        cin >> temperature[i];
        total += temperature[i];
    }

    double average = total / days;

    // Highest and lowest temperature
    double highest = temperature[0];
    double lowest = temperature[0];
    int highestDay = 1;
    int lowestDay = 1;

    for (int i = 1; i < days; i++) {
        if (temperature[i] > highest) {
            highest = temperature[i];
            highestDay = i + 1;
        }
        if (temperature[i] < lowest) {
            lowest = temperature[i];
            lowestDay = i + 1;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Weather analysis" << endl;
    cout << "Average temperature: " << average << " C" << endl;
    cout << "Highest temperature: " << highest << "°C (day " << highestDay << ")" << endl;
    cout << "Lowest temperature: " << lowest << "°C (day " << lowestDay << ")" << endl;

    cout << "\nTemperature Record:\n";
    for (int i = 0; i < days; i++) {
        cout << "Day " << (i + 1) << ": " << temperature[i] << "°C";
        if (i + 1 == highestDay) {
            cout << "  Highest!";
        } else if (i + 1 == lowestDay) {
            cout << "  Lowest!";
        }
        cout << endl;
    }

    return 0;
}