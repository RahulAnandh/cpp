#include <iostream>
using namespace std ;
int main () {
    struct{
        int model ;
        string brand ;
    }car1,car2,car3;
    car1.model = 2022;
    car1.brand = "Volvo";
    cout << car1.brand << car1.model<<endl;
    car2.model = 2021;
    car2.brand = "Ford";
    cout << car2.brand << car2.model<<endl;
    car2.model = 2020;
    car2.brand = "Audi";
    cout << car3.brand << car3.model<<endl;
    return 0;
}