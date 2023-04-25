#include <iostream>

using namespace std;

class calculate {
public:
    void get(int a, int b) {
        cout << "2 arguments Result: " << a / b << endl;
    }

    void get(int a, int b, int c) {
        cout << "3 arguments Result: " << a - b - c << endl;
    }

    void get(int a, int b, int c, int d) {
        cout << "4 arguments Result: " << a * b * c * d << endl;
    }

    void get(int a, int b, int c, int d, int e) {
        cout << "5 arguments Result: " << a + b + c + d + e << endl;
    }
};

int main() {
    calculate cal;
    cal.get(10, 5);
    cal.get(10, 5, 3); 
    cal.get(2, 3, 4, 5); 
    cal.get(100, 20, 50, 20, 10); 

    return 0;
}
