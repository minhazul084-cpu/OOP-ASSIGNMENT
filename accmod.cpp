#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Setter with validation
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
        } else {
            cout << "Invalid amount! Balance cannot be negative." << endl;
        }
    }

    // Getter
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;

    // acc.balance = 5000;   // ERROR: balance is private

    acc.setBalance(5000);
    cout << "Balance: " << acc.getBalance() << endl;

    acc.setBalance(-200);    // rejected by the setter
    cout << "Balance: " << acc.getBalance() << endl;

    return 0;
}