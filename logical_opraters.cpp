#include <iostream>
using namespace std;
int main () {
    int x = 10;
    cout << "AND:"<<(x < 11 && x > 9) << endl;
    cout << "OR:"<<(x < 11 && x > 9) << endl;
    cout << "NOT:"<< !(x < 11 && x > 9) << endl;

    return 0;
}