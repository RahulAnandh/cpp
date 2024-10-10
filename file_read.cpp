#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
    string myText;
ifstream myReadFile("file_name.txt");
while(getline(myReadFile,myText)){
    cout << myText <<endl;
}
myReadFile.close();
    return 0;
}