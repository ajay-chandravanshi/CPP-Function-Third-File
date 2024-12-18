#include <iostream>
using namespace std;

int counter() {
    static int count = 0; // Static variable retains its value across calls
    count++;
    return count;
}

int main() {
    cout << "Call 1: " << counter() << endl;
    cout << "Call 2: " << counter() << endl;
    cout << "Call 3: " << counter() << endl;
    return 0;
}
