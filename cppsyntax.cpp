#include <iostream>
using namespace std; 

int main(){
    int max{};
    int number1 {45};
    int number2 {42};
    // bool result = number1 < number2;
    // cout << boolalpha;

    // if(result){
    //     cout << "Number 1 is less than Number 2" << endl;
    // }

    // if (!(result)){
    //     cout << "Number 1 is greater than number 2 " << endl;
    // }
    // // cout << "Comparing Number 1 and number 2:  " << (number1 > number2) << endl;
    // return 0;

    // Switch statment in cpp
    // switch (number1)
    // {
    // case 45:
    //     cout << "your number is 45" << endl;
    //     break;
    // case 42:
    //     cout << "your number is 42" << endl;
    
    // default:
    //     break;
    // }


    // Code comprehension in cpp 
    max = (number1 > number2)? number1:number2;
    cout << "max " << max << endl;
    




}