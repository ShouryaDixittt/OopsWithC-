#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    int productId;
    string name;
    double price;

public:
    Product(int id, string n, double p) 
        : productId(id), name(n), price(p) {}

    Product comparePrice(const Product& other) const {
        if (this->price >= other.price) {
            return *this;
        } else {
            return other;
        }
    }

    void display() const {
        cout << "Product ID : " << productId << "\n";
        cout << "Name       : " << name << "\n";
        cout << "Price      : $" << price << "\n";
    }
};

int main() {
    Product prod1(101, "Laptop", 899.99);
    Product prod2(102, "Smartphone", 1099.49);

    cout << "--- Product 1 ---\n";
    prod1.display();

    cout << "\n--- Product 2 ---\n";
    prod2.display();

    Product higherPricedProduct = prod1.comparePrice(prod2);

    cout << "\n--- Product with Higher Price ---\n";
    higherPricedProduct.display();

    return 0;
}
