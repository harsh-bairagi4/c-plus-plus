#include <iostream>
using namespace std;

class Human{
    public:
        string name;
        string occupation;
        int age = 20;

        void eat(){
            cout<<"This person is eating\n";
        }
        void drink(){
            cout<<"This person is drinking\n";
        }
        void sleep(){
            cout<<"This person is sleeping\n";
        }
};

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

        void accelerate(){
            cout<< "You step on the gas!\n";
        }
        void brake(){
            cout<<"You step on the brakes!\n";
        }
};

int main()
{
    Human human1;
    human1.name = "Rick";
    human1.occupation = "Scientist";
    cout<<human1.name<<'\n';
    cout<<human1.occupation<<'\n';
    cout<<human1.age<<'\n';
    human1.eat();
    human1.drink();
    human1.sleep();

    cout<<'\n';

    Human human2;
    human2.name = "Jhon";
    human2.occupation = "Wrestler";
    cout<<human2.name<<'\n';
    cout<<human2.occupation<<'\n';
    cout<<human2.age<<'\n';
    human2.eat();
    human2.drink();
    human2.sleep();

    cout<<'\n';

    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2024;
    car1.color = "silver";

    cout<<car1.make<<'\n';
    cout<<car1.model<<'\n';
    cout<<car1.year<<'\n';
    cout<<car1.color<<'\n';
    car1.accelerate();
    car1.brake();

    cout<<'\n';

    Car car2;
    car2.accelerate();
    car2.brake();

    return 0;
}