#include <iostream>
using namespace std;

int main(){
    
    cout << "----------------- Using 'std::size' element (C++17) -----------------" << endl;

    int scores[] {5,6,3,9,7,8};

    cout << "Size of scores : " << size(scores) << endl;

    for (size_t i = 0 ; i < size(scores) ; i++)
    {
        cout << "SCORE[" << i << "] : " << scores[i] << endl;
    }

    cout << endl << endl;

    cout << "----------------- Using 'sizeof()' function -----------------" << endl;

    int rolls[] {10,34,78,90,56,78,34,56};

    cout << "Size of rolls : " << sizeof(rolls) << " bytes." << endl;
    cout << "Size of rolls[0] : " << sizeof(rolls[0]) << " bytes." << endl;
    cout << "Elements stored in rolls array : " << (sizeof(rolls) / sizeof(rolls[0])) << endl;

    size_t count {sizeof(rolls) / sizeof(rolls[0])};

    for (size_t i = 0 ; i < count ; i++)
    {
        cout << "ROLL[" << i << "] : " << rolls[i] << endl;
    }

    cout << endl << endl;

    cout << "----------------- Using range based for loop -----------------" << endl;

    int num[] {8,9,2,4,3,5,6,1,2};

    for ( auto number : num )
    {
        cout << "NUMBER : " << number << endl;
    }

    return 0; 

    
}