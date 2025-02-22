#include <iostream>
#include <exception>
using namespace std;

class EmptyContainerException : public exception {
private:
    string message;
public:
    EmptyContainerException(string msg) : message(msg) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

class ContainerOverflowException : public exception {
private:
    string message;
public:
    ContainerOverflowException(string msg) : message(msg) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

class Container {
private:
    int waterLevel;
    int capacity;
public:
    Container(int capacity) : waterLevel(0), capacity(capacity) {}

    void getWaterLevel() {
        cout << "Current Water level of the container is " << waterLevel << " ml." << endl;
    }

    void setWaterLevel(int new_water_level) {
        if (new_water_level < 0) {
            throw EmptyContainerException("The container is empty!");
        } 
        if (new_water_level > capacity) {
            throw ContainerOverflowException("The Container Overflowed!");
        }
        
        this->waterLevel = new_water_level;
        cout << "Water level after filling the container: " << waterLevel << " ml." << endl;
    }

    void useContainerWater(int use_quantity) {
        waterLevel -= use_quantity;
        if (waterLevel < 0) {
            throw EmptyContainerException("The container is empty after using water!");
        }
        cout << "Water level after using the water from the container: " << waterLevel << " ml." << endl;
    }
};

int main() {
    Container container(1000);
    
    try {
        container.getWaterLevel();
        container.setWaterLevel(200);
        container.useContainerWater(100);
        container.getWaterLevel();
        container.setWaterLevel(1200);
    } catch (const ContainerOverflowException& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (const EmptyContainerException& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
