#include <iostream>
using namespace std;
void functionArray (int myArray[5]){
    for(int i=0; i<5; i++){
        cout << myArray[i] << endl;
    }
}
int main(){
    int myArray[5] = {2,5,85,3,65};
    functionArray(myArray);
    return 0;
}