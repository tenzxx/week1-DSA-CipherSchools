#include <iostream>
using namespace std;

// Class Definition
class BestFriend {
private:
    string name;

public:
    // Constructor
    BestFriend(string n) {
        name = n;
    }

    // Member Function
    void display() {
        cout << "My best friend's name is: " << name << endl;
    }
};

int main() {
    // Create an object of BestFriend class
    BestFriend myFriend("John");

    // Call the display() member function
    myFriend.display();

    return 0;
}
