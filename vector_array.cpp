#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector <string> cars;
    cars.push_back("Tesla");
    cars.push_back("Ford");
    for(string car:cars){
        cout << car << endl ;
    }
    return 0;
}