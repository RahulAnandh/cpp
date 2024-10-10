#include <iostream>
using namespace std;
int main(){
    int ages[8] = {10,20,30,40,50,60,70,80};
    int tot_age = 0;
    int length = sizeof(ages)/sizeof(ages[0]);
    for(int age:ages){
        tot_age+=age;
    }
    float avg_age = tot_age/length;
    cout <<"Avarage age:"<< avg_age << endl;
    return 0;
}