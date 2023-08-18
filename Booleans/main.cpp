#include <iostream>
using namespace std;

int main(){

    /*
    Trick :- You can also initialize a boolean as 0,1,2,3.....
             0 means false.
             > 0 (Greater than 0) means true.

    A boolean is by default true.
    A boolean takes one byte in memory.
    bool m;
    'm' means m == true.
    '!m' means m == false.
    */
  
    bool red_light = 5; // Trick
    bool green_light = 0; // Trick

    bool rain = false;

    if (red_light == true)
    {
        cout << "Stop !!" << endl;
    }
    else
    {
        cout << "Go through.." << endl;
    }

    cout << endl;

    if (green_light)
    {
        cout << "Do not cross the road." << endl;
    }
    else
    {
        cout << "Cross the road." << endl;
    }

    cout << endl;

    if(!rain)
    {
       cout << "It's raining." << endl; 
    }
    else
    {
        cout << "It's not raining." << endl;
    }

    cout << endl;

    /*
    True --> 1
    False --> 0
    */

    cout << "Red light :- " << red_light << endl;
    cout << "Green light :- " << green_light << endl;

    cout << endl;

    cout << boolalpha; // Prints true & false instead of 1 & 0
    cout << "Red light :- " << red_light << endl;
    cout << "Green light :- " << green_light << endl;
    
       
    cout << noboolalpha; // Prints 1 & 0 instead of true & false
    cout << "Red light :- " << red_light << endl;
    cout << "Green light :- " << green_light << endl;

    return 0;
}