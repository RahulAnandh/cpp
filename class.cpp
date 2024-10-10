#include <iostream>
using namespace std;

class Car{
    public:
        int weight;
        string name;
        string color;
};

int main(){
    Car C1;
    Car C2;
    C1.weight = 2500;
    C1.name = "Volvo";
    C1.color = "Red";
    cout <<"Color1:"<< C1.color << endl;
    cout <<"Name1:"<< C1.name << endl;
    cout <<"Weight1:"<< C1.weight << endl;
    C2.weight = 3000;
    C2.name = "Ford";
    C2.color = "White";
    cout <<"Color2:"<< C2.color << endl;
    cout <<"Name2:"<< C2.name << endl;
    cout <<"Weight2:"<< C2.weight << endl;
    return 0;

}