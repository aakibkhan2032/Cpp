#include<iostream>
using namespace std;

class Base{

    int value;
    public:

    Base (int v = 0){
        value = v;
    }

    Base& operator=(const Base& obj){
        value = obj.value;
        return *this;
    }

    void display(){
        cout << "Value --> " << value << endl;
    }
};

int main(){
    Base a(10), b;
    b = a;
    b.display();
    return 0;
}