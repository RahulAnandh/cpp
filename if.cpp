#include <iostream>
using namespace std;

int main (){
int myAge = 29;

if(myAge > 18 ){
    cout << "You are old enough to vote";
}
else if(myAge == 18){
        cout << "Congratulations..You can vote this year onwards";
}
else{
    cout << "Sorry,You are not old enough to vote.";
}
return 0;
}