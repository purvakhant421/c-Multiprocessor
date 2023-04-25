#include <iostream>

using namespace std;

class math{
    public:
    void get(int a){
        cout << a << endl;
    }
    void get(float b){
        cout << b << endl;
    }
    void get(int a,int b){
        cout << a/b << endl;
    }
    void get(int a,int b,int c){
        cout << a*b*c << endl;
    }
    void get(int a,int b,int c,int d){
        cout << a+b+c+d << endl;
    }
};
int main(){
    math obj;
    obj.get(10);
    obj.get(10.00f);
    obj.get(30,20);
    obj.get(10,20,30);
    obj.get(10,20,30,40);
    
    return 0;
}