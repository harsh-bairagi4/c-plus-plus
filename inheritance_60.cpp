#include <iostream>
using namespace std;

class Animal{
    public:
        bool alive = true;
    void eat(){
        cout<<"This animal is eating\n";
    }
};

class Dog : public Animal{
    public:

    void bark(){
        cout<< "The dog goes woof!\n";
    }
};

class Cat : public Animal{
    public:

    void meow(){
        cout<< "Meow Meow !\n";
    }
};

class Shape{
    public:
        double area;
        double volume;
};

class Cube  : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }

};

class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);

    }
};
int main(){
    Dog dog;
    Cat cat;
    Cube cube(10);
    Sphere sphere(5);

    cout<< dog.alive <<'\n';
    dog.eat();
    dog.bark();
    cat.meow();

    cout<<"Area of cube: " << cube.area<< "cm\n";
    cout<<"Volume of cube: " << cube.volume<< "cm\n";
    cout<<"Area of sphere: " << sphere.area<< "cm\n";
    cout<<"Volume of sphere: " << sphere.volume<< "cm\n";


    return 0;
}