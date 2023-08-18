#include <iostream>
#include <string>
using namespace std;

int main(){

    // Data output
    /*
    cout << "Hello world!!\n";

    clog << "Log massage: File is saved at 7:30 pm.\n";

    cerr << "An unexpected error occured." << endl;
    */

    

   

    // Input data
    /*
    int age;
    string name;
    
    cout << "Enter your name and age :" << endl; 
    cin >> name;
    cin >> age;

    // cin >> name >> age;

    cout << "Hello " << name << " ! You are " << age << " years old."  << endl;
    */
    




    // Input data with spaces
    
    int age1;
    string full_name;
    
    cout << "Enter your name and age :" << endl; 
    getline(cin,full_name);
    cin >> age1;

    cout << "Hello " << full_name << " ! You are " << age1 << " years old."  << endl;
    
    

    return 0;

    
}