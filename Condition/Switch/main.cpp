#include <iostream>
using namespace std;

const int red = 10;
const int blue = 20;
const int green = 30;
const int black = 40;
const int white = 50;

int main(){

    int tool = green;

    /*
      Rules of using switch statement : 
       1. Selected variable should be in  integeral type or enums and need to be constant.
       2. You cannot ommit break keyword. If do so, correct statement along with other statement after the correct statement will be executed.
    */

    switch (tool)
    {
        case red : 
        {
            cout << "Selected color is red." << endl;
        }
        break;

        case blue : 
        {
            cout << "Selected color is blue." << endl;
        }
        break;

        case green : 
        {
            cout << "Selected color is green." << endl;
        }
        break;

        case black : 
        {
            cout << "Selected color is black." << endl;
        }
        break;

        case white : 
        {
            cout << "Selected color is white." << endl;
        }
        break;

        default :
        {
            cout << "No color is selected." << endl;
        }
    }
    
    
    cout << endl;

     switch (tool)
    {
        case red : 
        case blue : 
        case green : 
        case black : 
        case white : 
        {
            cout << "Color Tool Is Selected." << endl;
        }
        break;

        default :
        {
            cout << "No color is selected." << endl;
        }
    }



    return 0; 
    
}