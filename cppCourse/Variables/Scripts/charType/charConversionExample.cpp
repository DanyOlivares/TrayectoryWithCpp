#include <iostream>
using std::cout;
using std::endl;

int main(){
    //Creation of a char variable
    char letter {'a'};

    //Conversion to int
    int conversionInt {int (letter)};

    //Display
    cout<<"The conversion from char to int is: "<<letter<<"="<<conversionInt<<endl;
    //The output will be 97

    //Now let's do it the other way around

    //Creation of the int variable
    int number {103};

    //Conversion to char
    char conversionChar {char(number)};

    //Display
    cout<<"The conversion from int to char is: "<<number<<"="<<conversionChar<<endl;

    //The output will be g

    return 0;
}