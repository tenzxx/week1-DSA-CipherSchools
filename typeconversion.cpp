#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    // Constructor
    Distance(int ft = 0, float in = 0) {
        feet = ft;
        inches = in;
    }

    // Conversion operator
    operator float() {
        float total = feet + inches / 12;
        return total;
    }
};

int main() {
    Distance d(10, 6.5);
    float distanceInFeet = d;  // Implicit conversion using the conversion operator

    cout << "Distance in Feet: " << distanceInFeet << endl;

    return 0;
}
