#include<iostream>
using namespace std;

class base{
    protected:
    int m;
    public:
    void get_data(int a){
        m=a;
    }
};

class derived1 : public base{
    protected:
    int n;
    public:
    void get_data(int b){
        n=b;
    }
};

class derived2 : public derived1{
    public:
    void display(){
        cout<<"M="<<m<<endl;
        cout<<"N="<<n<<endl;
    }
};

int main(){
    derived2 obj;
    obj.base :: get_data(20);
    obj.derived1 :: get_data(30);
    obj.display();
    return 0;
}