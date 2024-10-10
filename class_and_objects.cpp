#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    int age;
    void showEmployee(int ag,string nm){
        cout << "Age of " << nm << " is " << ag << "." << endl;
    }
    void showGreeting(string n,int a);
};
void Employee::showGreeting(string n,int a){
    cout << a << " years old " << name << " says hai to you." << endl;
};
int main(){
Employee Emp;
Emp.name = "Rahul";
Emp.age = 30;
Emp.showEmployee(Emp.age,Emp.name);
Emp.showGreeting(Emp.name,Emp.age);
return 0;
}