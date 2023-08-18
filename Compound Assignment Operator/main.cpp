#include <iostream>
using namespace std;

int main(){


    int value = 35;

    cout << "The main value : " << value << endl;

    cout << endl;
    cout << "============= <variable> += <value> =============" << endl;

    value += 5; // value = value + 5
    cout << "The value : " << value << endl;

    cout << endl;
    cout << "============= <variable> -= <value> =============" << endl;

    value = 35;
    value -= 5; // value = value - 5
    cout << "The value : " << value << endl;
    
    cout << endl;
    cout << "============= <variable> *= <value> =============" << endl;

    value = 35;
    value *= 5; // value = value * 5
    cout << "The value : " << value << endl;

    cout << endl;
    cout << "============= <variable> /= <value> =============" << endl;

    value /= 25; // value = value / 25
    cout << "The value : " << value << endl;

    cout << endl;
    cout << "============= <variable> %= <value> =============" << endl;

    value %= 5; // value = value % 5
    cout << "The value : " << value << endl;
    
    
    
    return 0; 
    
}