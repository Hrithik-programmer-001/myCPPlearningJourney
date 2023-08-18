#include <iostream>
#include <limits>
using namespace std;

int main(){

    cout << "The limit of short is from " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
    
    cout << "The limit of long is from " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;
    
    cout << "The limit of long long is from " << numeric_limits<long long>::min() << " to " << numeric_limits<long long>::max() << endl;
    
    cout << "The limit of int is from " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;

    cout << "The limit of unsigned int is from " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << endl;
    
    cout << "The limit of float is from " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
    
    cout << "The limit (from lowest) of float is from " << numeric_limits<float>::lowest() << " to " << numeric_limits<float>::max() << endl;
     
    cout << "The limit of double is from " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << endl;
    
    cout << "The limit (from lowest) of double is from " << numeric_limits<double>::lowest() << " to " << numeric_limits<double>::max() << endl;
    
    cout << "The limit (from lowest) of long double is from " << numeric_limits<long double>::lowest() << " to " << numeric_limits<long double>::max() << endl;
      
    
     return 0; 
    
}