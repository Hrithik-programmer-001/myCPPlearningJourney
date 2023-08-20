#include <iostream>
using namespace std;

int main(){
    /*
        A pointer can store the address of the variables of same type.

        int* pointer;                 |
        int * pointer;                | } They are all same.
        int *pointer; (recommanded)   |

        int* a,b;   }
        int * a,b;  } In these cases, a is pointer but b is integer. So we have to initialize a pointer one by one.
        int *a,b;   }
    
    */

   // Declaring and printing :
    int *null{}; // It wii be automatically initialized with 'nullptr'.
    int *null1 {nullptr}; // It is the same as mentioned above.
    int num1 = 34;
    int num2 = 55;

    int *pNUM1{&num1}, *pNUM2{&num2}; // The address operator (&)

    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;
    cout << "Pointer of num1 : " << pNUM1 << endl;
    cout << "Pointer of num2 : " << pNUM2 << endl << endl;

    // Random Tests :
    num1 = 45;
    pNUM1 = &num1;
    cout << "Pointer of num1 : " << pNUM1 << endl; // If we change the value of variable, the address of the variable will be the same as before.

    int num3 = 55;
    pNUM1 = &num3;
    cout << "Pointer of num3 : " << pNUM1 << endl << endl; // But If we use a different variable in the same pointer used before, the address will change.

    // Sizes of pointers in my system :
    cout << "Sizeof(int) : " << sizeof(int) << " bytes" << endl;
    cout << "Sizeof(double) : " << sizeof(double) << " bytes" << endl;
    cout << "Sizeof(int*) : " << sizeof(int*) << " bytes" << endl;
    cout << "Sizeof(double*) : " << sizeof(double*) << " bytes" << endl;
    cout << "Sizeof(pNUM1) : " << sizeof(pNUM1) << " bytes" << endl << endl;

    // Going through a pointer(READING WHAT IS STORED IN THE ADDRESS) / Dereferenceing a pionter :
    int num4 = 78;
    int *pNUM4 = &num4;
    cout << "num4 : " << *pNUM4 << endl;

    return 0; 
    
}