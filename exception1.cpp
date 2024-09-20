#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw runtime_error("Error: Division by zero is not allowed.");
        }

        double result = static_cast<double>(numerator) / denominator;
        cout << "Result: " << result << endl;
    }
    catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
