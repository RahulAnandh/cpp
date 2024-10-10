#include <iostream>
#include <fstream>

using namespace std;

int main (){
    ofstream MyFile("file_name.txt");
    MyFile << "My Name is Rahul";
    MyFile.close();
    return 0;
}