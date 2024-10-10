#include <iostream>
using namespace std;

int main(){
    try{
        int age = 15;
        if(age >= 18){
            cout << "Access Granted";
        }
        else{
            throw 505;
        }
    }
    catch(int num){
        cout << "Sorry You cannot Enter."<<endl;
        cout << "Error:"<<num;
    }
    return 0;
}