#include <iostream>
using namespace std;

int main(){

    int lion_count{};//Initializes to zero
    
    int dog_count{10}; // initializes to 10

    int cat_count{15}; //Initializes to 15 

    int domesticated_animals {dog_count + cat_count};
    int functional(2.9);  // ignores the number after decimal point of this


    char letter1 {'e'};
    char letter2 {'m'};

    cout << letter1 << endl;
    cout << letter2 << endl;

    bool red_light {true};
    bool green_light {false};

    auto num {12};
    auto num1 {13.0};

    cout << num << endl;
    cout << sizeof(num1) << endl;

    if (red_light){
        cout << "Stop!" << endl;
    }else{
        cout << "Go through" << endl;

    }

    if (green_light){
        cout << "The light is green" << endl;
    }else{
        cout << "The light is not green" << endl;
    }

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