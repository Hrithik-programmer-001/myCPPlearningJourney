#include <iostream>
using namespace std;

int main(){
  
    auto inte {-18}; 
    auto dou {18.223}; 
    auto ldou {18.2236373l}; 
    auto flo {18.8902f}; 
    auto chara {'E'}; 
    auto lon {1854787l};
    auto lonlon {1854787ll};
    auto unsi {777u}; 
    auto unsil {7789577ul};
    auto bin {0b10011010101}; 

    cout << "Integer :- " << inte << endl;
    cout << "Double :- " << dou << endl;
    cout << "Long double :- " << ldou << endl;
    cout << "Float :- " << flo << endl;
    cout << "Character :- " << chara << endl;
    cout << "Long integer :- " << lon << endl;
    cout << "Long long integer :- " << lonlon << endl;
    cout << "Unsigned integer :- " << unsi << endl;
    cout << "Unsigned long :- " << unsil << endl;
    cout << "Binary :- " << bin << endl;

    cout << endl;

    cout << "Size of integer :- " << sizeof(inte) << endl;
    cout << "Size of double :- " << sizeof(dou) << endl;
    cout << "Size of long double :- " << sizeof(ldou) << endl;
    cout << "Size of float :- " << sizeof(flo) << endl;
    cout << "Size of Character :- " << sizeof(chara) << endl;
    cout << "Size of long integer :- " << sizeof(lon) << endl;
    cout << "Size of long long integer :- " << sizeof(lonlon) << endl;
    cout << "Size of unsigned integer :- " << sizeof(unsi) << endl;
    cout << "Size of unsigned long :- " << sizeof(unsil) << endl;
    cout << "Size of binary :- " << sizeof(bin) << endl;


    return 0;
    
}