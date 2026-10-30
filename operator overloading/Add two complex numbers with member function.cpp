#include<iostream>
using namespace std;

class Base{
    protected:
    int real, imag;
    public:

    Base (int a, int b){
        real = a;
        imag = b;
    }

    Base operator+(Base obj){
        return Base(real + obj.real, imag + obj.imag);
    }

    void display(){
        cout << real<<"+" << imag << "i"<< endl;
    }
};

int main(){
    Base obj1(5,3), obj2(2,4);
    Base obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}