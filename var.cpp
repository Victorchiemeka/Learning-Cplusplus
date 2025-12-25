#include <iostream>
using namespace std;

int main(){

    int lion_count{};//Initializes to zero
    
    int dog_count{10}; // initializes to 10

    int cat_count{15}; //Initializes to 15 

    int domesticated_animals {dog_count + cat_count};
    int functional(2.9);  // ignores the number after decimal point of this

    int value1 {10};
    int value2 {-10};
    
    std::cout << "Dog count "<< dog_count << std::endl;
    std::cout << "Cat count " << cat_count << std::endl;  // standard library to print value on screen
    cout << "decimal " << functional << endl;
    cout << "Sizeof(value1) : " << sizeof(value1) << std::endl;
    cout << "Sizeof(value2) : " << sizeof(value2) << std::endl;

    cout << "value1: " << value1 << std::endl;
    cout << "value2 : " << value2 << std::endl;

    return 0;
}