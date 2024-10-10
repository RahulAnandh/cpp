#include <iostream>
using namespace std;
void myFunction(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main(){
    int num1 = 10;
    int num2 = 20;
    cout << "BEFORE Reference "<< "num1 :" << num1 << " num2:" << num2 << endl;
    myFunction(num1,num2);
    cout << "AFTER Reference "<< "num1 :" << num1 << " num2:" << num2 << endl;
    return 0;
}