#include <iostream>
#include <string>

using namespace std;
int main(){
    string name = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    cout << name << " is a " << name.length() << " charecter word." << endl;
    cout << "First letter is " << name[0] << endl;
    cout << "First letter is " << name[0] << endl;
    cout << "Last Letter is " << name[name.length()-1] << endl ;
    name[2] = 'k';
    cout << "Name is " << name << endl ;
    cout << "at:" << name.at(0) <<endl;
    cout << "Last Charecter:" << name.at(name.length()-1) << endl ;
    name.at(0) = 'G' ;
    cout << "Inserting Charecter:" << name << endl ;
    cout << "\"Vikings\" are Comming from the \"north\"" <<endl ;
}