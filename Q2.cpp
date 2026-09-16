#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    string customerName;
    double balance;

public:
    BankAccount(string accNum, string name, double bal) 
        : accountNumber(accNum), customerName(name), balance(bal) {}

    friend void compareBalance(const BankAccount& acc1, const BankAccount& acc2);
};

void compareBalance(const BankAccount& acc1, const BankAccount& acc2) {
    if (acc1.balance > acc2.balance) {
        cout << acc1.customerName << " has a higher balance." << endl;
    } else if (acc2.balance > acc1.balance) {
        cout << acc2.customerName << " has a higher balance." << endl;
    } else {
        cout << "Both account holders have equal balances." << endl;
    }
}

int main() {
    BankAccount acc1("A101", "Alice", 5500.50);
    BankAccount acc2("A102", "Bob", 7200.75);

    compareBalance(acc1, acc2);

    return 0;
}
