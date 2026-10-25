#include<iostream>
using namespace std;

class vehicle{
    protected:
    string company_name;
    string vehicle_category;
    int vehicle_capacity;
    public:
    void get_data(string a, string b, int c){
        company_name = a;
        vehicle_category = b;
        vehicle_capacity = c;
    }
    void display(){
        cout<<"--------------------VEHICLE DETAILS--------------------"<<endl;
        cout<<endl;
        cout<<"Company Name              -->                    "<<company_name<<endl;
        cout<<"Vehicle Category          -->                    "<<vehicle_category<<endl;
        cout<<"Vehicle Capacity          -->                    "<<vehicle_capacity<<endl;
    }
};


class vehicle1 : public vehicle{
    protected:
    string vehicle_color;
    string vehicle_model;
    public:
    void get_vehicle1_data(string a, string b){
        vehicle_color = a;
        vehicle_model = b;
    }
    void display_vehicle1(){
        display();
        cout<<"Vehicle Color             -->                    "<<vehicle_color<<endl;
        cout<<"Vehicle Model             -->                    "<<vehicle_model<<endl;
    }
};

class vehicle2 : public vehicle{
    protected:
    string vehicle_color;
    string vehicle_model;
    int hp;
    int release_year;
    public:
    void get_vehicle2_data(string a, string b, int c, int d){
        vehicle_color = a;
        vehicle_model = b;
        hp = c;
        release_year = d;
    }
    void display_vehicle2(){
        display();
        cout<<"Vehicle Color             -->                    "<<vehicle_color<<endl;
        cout<<"Vehicle Model             -->                    "<<vehicle_model<<endl;
        cout<<"Vehicle Release Year      -->                    "<<release_year<<endl;
        cout<<"Vehicle HP                -->                    "<<hp<<endl;
    }
};


int main(){
    vehicle1 obj;
    vehicle2 obj2;
    obj.get_data("BMW", "Car", 4);
    obj.get_vehicle1_data("Pink", "M5 Compi");
    obj.display_vehicle1();
    obj2.get_data("BMW", "Bike", 2);
    obj2.get_vehicle2_data("Blue", "X200", 190, 2025);
    obj2.display_vehicle2();
    return 0;
}