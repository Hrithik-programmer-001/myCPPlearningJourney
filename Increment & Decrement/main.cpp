#include <iostream>
using namespace std;

int main(){
  
    cout << "============= Increment & decrement by + , - operators =============" << endl; 


    int value = 7;


    // Incrementing
    value = value + 1;
    cout << "The value after incrementing : " << value << endl;


    value = 7;


    // Decrementing
    value = value - 1;
    cout << "The value after decrementing : " << value << endl;


    cout << endl;
    cout << "============= Increment & decrement by postfix ++ & -- =============" << endl;


    // Incrementing
    value = 7;
    cout << "The value (incrementing) : " << value++ << endl;
    cout << "The value after incrementing : " << value << endl;
    
    value = 7;
    value++;
    cout << "The value after incrementing : " << value << endl;


    // Decrementing
    value = 7;
    cout << "The value (decrementing) : " << value-- << endl;
    cout << "The value after decrementing : " << value << endl;

    value = 7;
    value--;
    cout << "The value after decrementing : " << value << endl;


    cout << endl;
    cout << "============= Increment & decrement by prefix ++ & -- =============" << endl;

    
    // Incrementing
    value = 7;
    ++value;
    cout << "The value  after incrementing : " << value << endl;
    value = 7;
    cout << "The value by incrementing in the statement : " << ++value << endl;


    // Decrementing
    value = 7;
    --value;
    cout << "The value  after incrementing : " << value << endl;
    value = 7;
    cout << "The value by incrementing in the statement : " << --value << endl;
    
    

    
    return 0;

}