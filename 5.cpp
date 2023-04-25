#include <iostream>

using namespace std;

class Cricket {
public:
    void get (int a) {
        cout<<"Total overs in Cricket match: "<<a<<endl;
    }
};

class T20Match : public Cricket {
public:
    void get (int a) {
        cout<<"Total overs in T20 match: "<<a<<endl;
    }
};

class OneDayMatch : public Cricket {
public:
    void get (int a) {
        cout<<"Total overs in One Day match: "<<a<<endl;
    }
};

int main() {
    OneDayMatch obj;
    obj.Cricket::get(50);
    obj.get(20);
    obj.get(50);

    
    return 0;
}