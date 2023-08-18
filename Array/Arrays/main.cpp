#include <iostream>
using namespace std;

int main(){

    const size_t COUNT = 10;
    int scores[COUNT]; // Declaration of an integer array

    // Input data in an array manually
    scores[0] = 20;
    scores[1] = 26;

    // Read data of an array manually
    cout << "Score[0]: " << scores[0] << endl;
    cout << "Score[1]: " << scores[1] << endl;



    // Input data in an array automatically
    cout << endl;
    for (size_t i=0; i<COUNT; ++i)
    {
        scores[i] = i*10;
    }
    
    /*cout << "Input 10 integers separated by space : " << endl;
    for (size_t i=0; i<COUNT; ++i)
    {
        cin >> scores[i];
    }*/


    // Read data of an array automatically
    for (size_t i=0; i<COUNT; ++i)
    {
        cout << "Score[" << i << "] : " << scores[i] << endl;
    }

    cout << endl;

    // doing operations on array
    int sum = 0;
    for (auto element : scores)
    {
        sum += element;
    }
    cout << "Total score : " << sum << endl;

    cout << endl;

    // Declare and initialize at the same time
    const size_t COUNTforAGE = 6;
    double age[COUNTforAGE] {10, 20, 25.5, 45.5, 7.8, 23.3};

    for (size_t i=0; i<COUNTforAGE; ++i)
    {
        cout << "Age[" << i << "] : " << age[i] << endl;
    }

    cout << endl;

    // In case not initializing some specified index of an array, the value will be 0.
    const size_t COUNTforFAM = 5;
    int families[COUNTforFAM] {10, 20, 25};

    for (size_t i=0; i<COUNTforFAM; ++i)
    {
        cout << "Families[" << i << "] : " << families[i] << endl;
    }

    cout << endl;

    // We can also omit the size of an array.
    int omitSize[] {1, 2, 3, 4};

    for (auto value : omitSize)
    {
        cout << "Omit Size : " << value << endl;
    }



    return 0; 
    
}