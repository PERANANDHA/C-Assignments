#include <iostream>
#include <string>
using namespace std;

class MyException {
private:
    string errorMessage;

public:
    MyException(const string& message) : errorMessage(message) {}

    void showError() const {
        cout << errorMessage << endl;
    }
};

int main() {
    try {
        int num;
        cout << "Enter a positive number: ";
        cin >> num;

        if (num < 0) {
            throw MyException("Error: Negative number entered.");
        }

        cout << "You entered: " << num << endl;
    }
    catch (const MyException& e) {
        e.showError();
    }

    return 0;
}
