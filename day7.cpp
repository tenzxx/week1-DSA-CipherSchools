#include <iostream>
using namespace std;

class FriendClass;

class Student {
private:
    string name;
    int rollNumber;

public:
    Student(string n, int rn) {
        name = n;
        rollNumber = rn;
    }

    string getName() const {
        return name;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    friend void displayStudentDetails(Student s, FriendClass f);
};

class FriendClass {
public:
    void displayFriendMessage(Student s) {
        cout << "Hello, " << s.getName() << "! Your roll number is " << s.getRollNumber() << endl;
    }
};

void displayStudentDetails(Student s, FriendClass f) {
    cout << "Student Name: " << s.getName() << endl;
    cout << "Roll Number: " << s.getRollNumber() << endl;
    f.displayFriendMessage(s);
}

int main() {
    Student student("Alice", 123);
    FriendClass friendObj;
    displayStudentDetails(student, friendObj);

    return 0;
}
