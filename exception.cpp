#include <iostream>
using namespace std;

int divide(int num, int denom) {
    if (denom == 0) {
        throw "Division by zero is not allowed";
    }
    return num / denom;
}

int main() {
    int numerator, denominator;
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;

    try {
        int result = divide(numerator, denominator);
        cout << "Result of division: " << result << endl;
    } catch (const char* error) {
        cerr << "Exception: " << error << endl;
    }

    return 0;
}
