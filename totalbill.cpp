#include <iostream>
using namespace std;

int main() {
    const double mealCost = 44.50;
    const double taxRate = 6.75 / 100;
    const double tipRate = 15.0 / 100;

    double taxAmount = mealCost * taxRate;
    double totalAfterTax = mealCost + taxAmount;
    double tipAmount = totalAfterTax * tipRate;
    double totalBill = totalAfterTax + tipAmount;

    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Tip Amount: $" << tipAmount << endl;
    cout << "Total Bill: $" << totalBill << endl;

    return 0;
}
