#include<iostream>
using namespace std;

class Base{

    int arr[4] = {10,20,30,40};

    public:


    int& operator[](int index){
        return arr[index];
    }
};

int main(){
    Base a;
    cout << a[0] << endl;
    return 0;
}