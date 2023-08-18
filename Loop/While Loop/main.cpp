#include <iostream>
using namespace std;

int main(){
  
    const size_t COUNT = 10;
    size_t i = 1; // Iterator Declaration

    while(i <= COUNT) // Test
    {
        cout << i << " : I love C++." << endl;

        ++i; // Incrementation
    }

    cout << endl << "Loop Done." << endl;


    return 0; 
    
}