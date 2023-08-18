#include <iostream>
using namespace std;

//It is an example of function
int sum ( int a , int b)
{
    int c = a + b;
    return c;
}

int main(){

    int a , b; //It is an example of statement
    cin >> a;  //Every statement ends with a semicolon (;)
    cin >> b;
  
    cout << "The sum is : " << sum(a , b) << endl; 

    return 0;
    
}