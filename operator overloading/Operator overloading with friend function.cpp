#include<iostream>
using namespace std;

class Base{
    int value;
    public:

    Base (int a){
        value = a;
    }

    friend Base operator+(Base a, Base b);

    void display(){
        cout << "Value --> " << value << endl;
    }
};

Base operator+(Base a, Base b){
    return Base(a.value + b.value);
}

int main(){
    Base obj1(10), obj2(20);
    Base obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}