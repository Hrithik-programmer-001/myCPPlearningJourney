#include <iostream>
using namespace std;

int main(){
  
    char ch1 = 'a';
    char ch2 = 'b';
    char ch3 = 'c';
    char ch4 = 'd';
    char ch5 = 'e';
    char ch6 = 'f';

    cout << "Character 1 :- " << ch1 << endl;
    cout << "Character 2 :- " << ch2 << endl;
    cout << "Character 3 :- " << ch3 << endl;
    cout << "Character 4 :- " << ch4 << endl;
    cout << "Character 5 :- " << ch5 << endl;
    cout << "Character 6 :- " << ch6 << endl;

    cout << endl;

    cout << "Size of a Character :- " << sizeof(char) << " Byte" << endl;

    cout << endl;

    // **Character mapping**

    //char ch7 = 69 ; Prints 'E'
    //char ch7 = 69 + 32;
    char ch7 = 'E' + 32;

    cout << "Character 7 :- " << ch7 << endl;
    cout << "ASCII value of Chaaracter 7 :- " << static_cast<int>(ch7) << endl;
    cout << "Size of Character 7 :- " << sizeof(ch7) << " Byte" << endl;


    return 0;
    
}