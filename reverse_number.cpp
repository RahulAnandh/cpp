#include <iostream>
using namespace std;
int main(){
    int num = 1254865;
    int rev_num = 0 ;
while(num){
    rev_num = rev_num * 10 + num % 10;
    num /= 10;
}
cout << "REVERSED NUM IS " << rev_num;
return 0;
}