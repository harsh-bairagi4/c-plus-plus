#include <iostream>

int main()
{
    int day;
    std::cout<<"Enter the number (1-7): ";
    std::cin>>day;

    switch(day){
        case 1:
        std::cout<<"It is Monday";
        break;
        case 2:
        std::cout<<"It is Tuesday";
        break;
        case 3:
        std::cout<<"It is Wednesday";
        break;
        case 4:
        std::cout<<"It is Thursday";
        break;
        case 5:
        std::cout<<"It is Friday";
        break;
        case 6:
        std::cout<<"It is Saturday";
        break;
        case 7:
        std::cout<<"It is Sunday";
        break;
        default:
        std::cout<<"Please enter in only numbers( 1 - 7)";
    }
    return 0;
}