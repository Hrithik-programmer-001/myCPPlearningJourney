#include <iostream>
using namespace std;

int main(){
    
    //BEDMAS
    
    int a {5};
    int b {7};
    int c {3};
    int d {15};
    int e {10};
    int f {5};
    int g {5};
    int h {7};

    int result {a + b * c - d / e * f + g + h};
    cout << "Result:- " << result  << endl;

    result = (a + b) * c - d * e / f + g + h;
    cout << "Result with parenthesis:- " << result  << endl;


    return 0;
    
}