#include <iostream>
using namespace std;

int main(){
  
    int a = 1;
    int *p_a = &a;

    cout << "&a : " << p_a <<endl;
    cout << "a : " << *p_a << endl;

    /*
        In the code above, the data will be stored in stack memeory which is called static memory allocation.

        But in the following code, the data is going to be stored in the heap memory which is called dynamic memory allocation.

        Here the 'new' operator will give a space of heap size of assigned datatype.
        Here the 'delete' operator will release the space to OS after using it.
    */

    char *p_char = nullptr;
    p_char = new char;
    *p_char = 'c';

    /*
        In short we can use it like this,
            char *p_char = new char('G');
            char *p_char = new char{'G'};
            char *p_char  {new char('G')};
            char *p_char  {new char{'G'}};
    */
    

    cout << "p_char : " << p_char << endl; // ??
    cout << "*p_char : " << *p_char << endl;

    delete p_char;
    p_char = nullptr; // It is a must to rest the pointer with nullptr after delete it. Do not use delete double times on a pointer.

    // We can use a deleted pointer again.
    p_char = new char('G');

    cout << "p_char : " << p_char << endl; // ??
    cout << "*p_char : " << *p_char << endl;

    delete p_char;
    p_char = nullptr;


    return 0;
    
}