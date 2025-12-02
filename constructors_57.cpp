#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    double gpa;

    Student(string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
    // Student(string x, int y, double z){
    //     name = x;
    //     age = y;
    //     gpa = z;
    // }
};

class Animals{
    public:
    string type;
    string name;
    int age;

    Animals(string type, string name, int age){
        this->type = type;
        this->name = name;
        this->age = age;
    }

};

class Car{
    public:
    string make;
    string model;
    int year;
    string color;

    Car(string make, string model, int year, string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main(){
    Student student1("Harsh", 19, 6.7);
    Student student2("Khilesh", 19, 6.5);
    Student student3("Ansh", 19, 6.9);

    cout<< student1.name << '\n';
    cout<< student1.age << '\n';
    cout<< student1.gpa << '\n';
    cout<<'\n';
    cout<< student2.name << '\n';
    cout<< student2.age << '\n';
    cout<< student2.gpa << '\n';
    cout<<'\n';
    cout<< student3.name << '\n';
    cout<< student3.age << '\n';
    cout<< student3.gpa << '\n';
    cout<<'\n';

    Car car1("Maruti" ,"Desire", 2024, "White");
    Car car2("Tata" ,"Punch", 2024, "Black");

    cout<<car1.make<<'\n';
    cout<<car1.model<<'\n';
    cout<<car1.year<<'\n';
    cout<<car1.color<<'\n';
    cout<<'\n';
    cout<<car2.make<<'\n';
    cout<<car2.model<<'\n';
    cout<<car2.year<<'\n';
    cout<<car2.color<<'\n';
    cout<<'\n';

    Animals animal1("Cat", "Meow", 8);
    cout<<animal1.type<<'\n';
    cout<<animal1.name<<'\n';
    cout<<animal1.age<<'\n';
    cout<<'\n';

    Animals animal2("Dog", "Puppy", 10);
    cout<<animal2.type<<'\n';
    cout<<animal2.name<<'\n';
    cout<<animal2.age<<'\n';

    return 0;
}
