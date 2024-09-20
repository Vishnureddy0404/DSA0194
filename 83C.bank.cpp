#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolder;
    double balance;

public:
    BankAccount(const std::string& holder, double initialBalance) 
        : accountHolder(holder), balance(initialBalance) {
        std::cout << "Account created for " << accountHolder << " with balance $" << balance << std::endl;
    }
    ~BankAccount() {
        std::cout << "Account for " << accountHolder << " closed." << std::endl;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << ". New balance: $" << balance << std::endl;
        }
    }
    void displayAccountInfo() const {
        std::cout << "Account Holder: " << accountHolder << ", Balance: $" << balance << std::endl;
    }
};
int main() {
    BankAccount account("John Doe", 1000.0);
    account.displayAccountInfo();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayAccountInfo();
    return 0;
}
