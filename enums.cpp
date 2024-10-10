#include <iostream>
using namespace std;
  enum cloth {
        SMALL = 16,
        MEDIUM = 18,
        LARGE = 20,
        EXTRA_LARGE = 24
    };
int main(){
   enum cloth mySize = LARGE;
   cout <<"SIZE:"<< mySize;
    return 0;
}