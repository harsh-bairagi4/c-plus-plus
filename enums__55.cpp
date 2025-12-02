#include <iostream>
using namespace std;
enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main() {

    // string today = "sunday";

    // switch (today)
    // {
    // case "sunday":
    //     cout<<"It is Sunday!\n";
    //     break;
    // case "monday":
    //     cout<<"It is Monday!\n";
    //     break;
    // case "tuesday":
    //     cout<<"It is Tuesday!\n";
    //     break;
    // case "wednesday":
    //     cout<<"It is Wednesday!\n";
    //     break;
    // case "thursday":
    //     cout<<"It is Thursday!\n";
    //     break;
    // case "friday":
    //     cout<<"It is Friday!\n";
    //     break;
    // case "saturday":
    //     cout<<"It is Saturday!\n";
    //     break;
    // default:
    //     cout<<"Invalid Input\n";
    // }
    Day today = sunday;

    switch (today)
    {
    case sunday:
        cout<<"It is Sunday!\n";
        break;
    case monday:
        cout<<"It is Monday!\n";
        break;
    case tuesday:
        cout<<"It is Tuesday!\n";
        break;
    case wednesday:
        cout<<"It is Wednesday!\n";
        break;
    case thursday:
        cout<<"It is Thursday!\n";
        break;
    case friday:
        cout<<"It is Friday!\n";
        break;
    case saturday:
        cout<<"It is Saturday!\n";
        break;
    default:
        cout<<"Invalid Input\n";
    }


    return 0;
}