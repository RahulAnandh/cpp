#include <iostream>
using namespace std;
int main () {
    for(int i = 0; i <= 10; i++){
        if(i == 5){
            continue;
        }
        cout << i << "," ;
        if(i == 8){
            break;
        }
    }
}