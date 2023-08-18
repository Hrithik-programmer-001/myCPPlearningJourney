#include <iostream>
using namespace std;

int main(){

    /*
       Ternary Operator: result = (condition) ? option1 : option2;

       Note : option1 and option2 have to be the same type.

       The code mentioned above means:

       if (condition)
       {
         result = option1;
       }
       else
       {
         result = option2;
       }

    */

    int min;
    int nm1,nm2;

    cout << "Input two numbers following spaces : " << endl;

    cin >> nm1 >> nm2;

    min = (nm1 < nm2) ? nm1 : nm2;

    cout << "The minimum number is : " << min << endl;

    cout << endl;
    /*
       We can also directly initialize the ternary operator.
    */

    bool highSpeed = true;
    string speed = (!highSpeed) ? "Normal(90 - 150)" : "High(151 - 300)";

    cout << "The current speed is : " << speed << endl;

    return 0; 
    
}