#include <iostream>
using namespace std;

int main(){
    

    /*
        Pointer of char is specia as we can use it as an array of char.
    */

    // char *userName = "Hello world!!"; - The program will give warning as we converting a string constant to "char*". Using const char will solve the problem.
    const char *userName = "Hello world!!";
    cout << "User Name : " << userName << endl;

    // Dereferencing
    cout << "*userName : " << *userName << endl; // Output will be the first character as pointer of char always points thr first character of a string.

    // *userName[0] = 'B'; - It is a compiler error as userName is a const char.

    return 0; 
    
}