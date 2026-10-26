#include<iostream>
using namespace std;

class student_details{
    protected:
    string name;
    int rollno;
    int clas;
    string section;
    public:
    void get_data(string a, int b, int c, string d){
        name = a;
        rollno = b;
        clas = c;
        section = d;
    }
    void display_details(){
        cout<<endl;
        cout<<"--------------------STUDENT DETAILS--------------------"<<endl;
        cout<<"Name                   -->                    "<<name<<endl;
        cout<<"Roll Number            -->                    "<<rollno<<endl;
        cout<<"Class                  -->                    "<<clas<<endl;
        cout<<"Section                -->                    "<<section<<endl;
        cout<<endl;
    }
};  

class academic_total : public student_details{
    protected:
    float cs;
    float bio;
    float chem;
    float ped;
    float eng;
    float total_marks;
    float academic_percentage;
    public:
    void get_marks(float a, float b, float c, float d, float e){
        cs = a;
        bio = b;
        chem = c;
        ped = d;
        eng = e;
    }
    void display_marks(){
        
        total_marks = cs + bio + chem + ped + eng;
        academic_percentage = total_marks / 5;
        cout<<"--------------------ACADEMIC DETAILS--------------------"<<endl;
        cout<<endl;
        cout<<"Total Academic Marks       -->               "<<total_marks<<endl;
        cout<<"Academic Percentage        -->               "<<academic_percentage<<endl;
        cout<<endl;
    } 
};

class sports_total{
    protected:
    float football;
    float cricket;
    float swimming;
    float running;
    public:
    float total_score;
    float sports_percentage;
    void get_score(float a, float b, float c, float d){
        football = a;
        cricket = b;
        swimming = c;
        running = d;
    }
    void display_score(){
        total_score = football + cricket + swimming + running;
        sports_percentage = total_score / 4;
        cout<<"--------------------SPORTS DETAILS--------------------"<<endl;
        cout<<endl;
        cout<<"Total Sports Score         -->                "<<total_score<<endl;
        cout<<"Sports Percentage          -->                "<<sports_percentage<<endl;
        cout<<endl;
    }
};

class result : public academic_total, public sports_total{
    public:
    void display(){
        display_details();
        display_marks();
        display_score();
    }
};

int main(){
    result obj;
    obj.get_data("Aakib",101,12,"A");
    obj.get_marks(92,85,88,99,82);
    obj.get_score(92,87,78,98);
    obj.display();
    return 0;
}