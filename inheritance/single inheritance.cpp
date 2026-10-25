# include<iostream>
using namespace std;

class base{
    protected:
    int a;
    public:
    void getdata(int x){
        a=x;
    }
};

class derived : public base{
    public:
    void display(){
        cout<<"A --> "<<a<<endl;
    }

};

int main(){
    derived obj;
    obj.getdata(10);
    obj.display();
    return 0;
}