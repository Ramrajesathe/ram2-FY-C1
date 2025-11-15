#include <iostream>
using namespace std;
class Number {
    int value;
public:
    Number(int v = 0) {
        value = v;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
    void operator-() {
        value = -value;
    }
};
int main() {
    Number n1(10);
    cout << "Before overloading:" << endl;
    n1.display();
    -n1;
    cout << "After overloading:" << endl;
    n1.display();
    return 0;
}
