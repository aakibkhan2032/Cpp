#include<iostream>
using namespace std;

class Base{
    int real, imag;
    public:

    Base (int a, int b){
        real = a;
        imag = b;
    }

    friend Base operator+(Base obj, Base obj4);

    void display(){
        cout << real<<"+" << imag << "i"<< endl;
    }
};

Base operator+(Base obj, Base obj4){
    return Base(obj.real+obj.real, obj4.imag + obj4.imag);
}

int main(){
    Base obj1(5,3), obj2(2,4);
    Base obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}