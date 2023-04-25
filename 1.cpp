#include <iostream>

using namespace std;

class user1 {
public:
      void get(int a) {
        cout << "User 1 data:" << endl;
    }
};

class user2 : public user1 {
public:
    void get(int b) {
        cout << "User 2 data:" << endl;
    }
};


int main() {
    user2 obj;
    obj.user1::get(45);
    obj.get(56);
    return 0;
}
