#include <iostream>
using namespace std;

int main(){
  
    size_t count = 10;
    size_t i = 1; // Iterator Declaration

    do {
        cout << i << " : I Love C++." << endl;

        i++; // Incrementation
    }
    while (i <= count); // Test

    cout << endl << "Loop done !!" << endl << endl;

    /*
        THIS IS THE DIFFERENCE BETWEEN while LOOP & do while LOOP.
        Because do while loop runs the code before it checks the task.
    */

    count = 1;
    i = 1;
    
    do {
        cout << i << " : I Love C++." << endl;

        i++; // Incrementation
    }
    while (i <= count); // Test

    cout << endl << "Loop done !!" << endl;

    return 0; 
    
}