#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car() {
        brand = "Unknown";
        model = "Unknown";
        year = 0;
    }

    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car1;
    Car car2("Toyota", "Camry", 2022);

    cout << "Car 1 Details:" << endl;
    car1.displayDetails();

    cout << "\nCar 2 Details:" << endl;
    car2.displayDetails();

    return 0;
}
