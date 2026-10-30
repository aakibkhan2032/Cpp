#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }

   void operator-(){
        value = -value;
   }
   void display(){
        cout<<value<<endl;
   }
};
int main(){
    Number obj(20);
    -obj;
    obj.display();
    return 0;
}