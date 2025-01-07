#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int a{};
    cout<<"Hello, insert a number: ";
    cin>>a;
    int b{a*2};
    cout<<"The number you displayed is "<<a<<" and multiplied for 2 is "<<b<<endl;
    
    return 0;
}