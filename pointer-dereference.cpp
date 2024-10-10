#include <iostream>
using namespace std;
int main(){
    string name = "Rahul";
    string* ptr = &name;
    cout <<"POINTER REFERENCE:"<< ptr <<endl;
    cout <<"POINTER DE-REFERENCE:"<< *ptr <<endl;
    return 0;
}