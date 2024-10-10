#include <iostream>
using namespace std;
class Class1{
    public:
    function1(){
    cout <<"Hallow I am Class 1";
    }
};
class Class2 :public Class1{
    Class1 cls1;
    public:
    function2(){
    cls1.function1();
    }
};
class Class3 :public Class2{
    Class2 cls2;
    public:
    function3(){
cls2.function2();
    }
};
int main(){
    Class3 cls3;
    cls3.function3();
    return 0;

}