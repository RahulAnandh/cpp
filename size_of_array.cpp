#include <iostream>
#include <string>

using namespace std;
int main(){
    int myNumbers[7] = {12,23,54,68,23,10,26};
    cout << sizeof(myNumbers)/sizeof(myNumbers[0]);
    return 0;
}