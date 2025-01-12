#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Product {
protected:
    int productId;
    string name;
    double price;

public:
    Product(int id, string name, double price) : productId(id), name(name), price(price) {}

    void displayProduct() {
        cout << "productId: " << productId << endl;
        cout << "name: " << name << endl;
        cout << "price: " << price << endl;
    }

    double calculateDiscount(double percentage) {
        return price - (price * (percentage / 100.0));
    }

    double getPrice() {
        return price;
    }
};

class Electronics : public Product {
    string brand;
    int warrantyYears;

public:
    Electronics(int id, string name, double price, string brand, int warrantyYears) : Product(id, name, price), brand(brand), warrantyYears(warrantyYears) {}

    void displayElectronics() {
        displayProduct();
        cout << "Brand: " << brand << endl;
        cout << "Warranty Years: " << warrantyYears << endl;
    }
};

class Clothing : public Product {
    string size;
    string material;

public:
    Clothing(int id, string name, double price, string size, string material) : Product(id, name, price), size(size), material(material) {}

    void displayClothing() {
        displayProduct();
        cout << "Size: " << size << endl;
        cout << "Material: " << material << endl;
    }
};

class Order {
    int orderId;
    vector<Product*> products;
public:
    Order(int id) : orderId(id) {}

    void addProduct(Product* product) {
        products.push_back(product);
    }

    void displayOrder() {
        cout << "Order ID: " << orderId << endl;
        double total = 0;

        for(auto product : products) {
            product->displayProduct();
            total += product->getPrice();
        }
        cout << "Total Price: Rs." << total << endl;
    }

    ~Order() {
        for (auto product : products) {
            delete product;
        }
    }
};

int main() {
    //

    return 0;
}
