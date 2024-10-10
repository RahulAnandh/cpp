#include <iostream>
using namespace std;
int main(){
    int age = 29;
    int &myAge = age;
    cout << "Age: " << age << " My Age:"<< myAge;
    return 0;
}