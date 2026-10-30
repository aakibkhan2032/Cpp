#include<iostream>
using namespace std;

class Base{
    protected:
    int value;
    public:

    Base (int a){
        value = a;
    }

    Base operator+(Base obj){
        return Base(value + obj.value);
    }

    void display(){
        cout << "Value --> " << value << endl;
    }
};

int main(){
    Base obj1(10), obj2(20);
    Base obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}