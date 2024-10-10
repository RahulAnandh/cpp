#include <iostream>
using namespace std;
class Employee{
    private:
    int salary;
    public:
        void setSalary(int sal){
            salary = sal ;
        }

        int getSalary () {
            return salary;
        }
};

int main(){
    Employee Emp;
    Emp.setSalary(40000);
    int result = Emp.getSalary();
    cout << "RESULT:" << result ;
    return 0;
}