#include <iostream>

using namespace std;

int max(int a, int b)
{
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int max(int a, int b, int c)
{
    if (a > b) {
        if (a > c) {
            return a;
        }
        else {
            return c;
        }
    }
    else if (b > c) {
        return b;
    }
    else {
        return c;
    }
}

int max(int a, int b, int c, int d)
{
    int z = max(a, b, c);
    if (z > d) {
        return z;
    }
    else {
        return d;
    }
}

int main()
{
    cout << max(2, 5) << endl;
    cout << max(4, 6, 2) << endl;
    cout << max(3, 5, 7, 3) << endl;

    return 0;
}


