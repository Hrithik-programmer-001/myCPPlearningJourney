#include <iostream>
using namespace std;

int main(){


    // size_t is alias for 'unsigned int' [positive numbers]

    for(size_t i{1} /*Iterator*/ ; i<=10 ; ++i)
    {
        cout << i << " : I love C++." << endl;
    }

    // cout << i << endl; Compiler error : i is not declared in this scope.



    cout << "Size of size_t : " << sizeof(size_t) << endl;



    // We can also declare the iterator outside to use it in the local scope.
    size_t i = 1;
    
    for( ; i<=10 ; ++i)
    {
        cout << i << " : I love C++." << endl;
    }
    cout << "i : " << i << endl;




    /*
    
    It is a bad practice.
    Don't hard code values.

    for(size_t i{1} ; i<=10 ; ++i)
    {
        cout << i << " : I love C++." << endl;
    }

    */

   // It is a good practice below.
   size_t count = 10; /**/
   
   for(size_t i{1} ; i<=count/**/ ; ++i)
    {
        cout << i << " : I love C++." << endl;
    }


    return 0; 
    
}