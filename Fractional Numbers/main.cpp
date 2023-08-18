#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  
    /*
    Type           Size    Precision
    ________________________________
    float           4         7  (Need write suffix 'f')       
    double          8         15 (Recommanded as default)
    long double    12       > 15 (Need write suffix 'L')

    std::setprecision(Num_of_Precision) # Control precision from std::cout
                                        # From <iomanip>
    */

   // Declare and initialize the variables
   float num1 {1.5672626677389f};
   double num2 {1.56726266767389};
   long double num3 {1.56466676L};
  
   // Print out the sizes
   cout << "Size of float :- " << sizeof(num1) << endl;
   cout << "Size of double :- " << sizeof(num2) << endl;
   cout << "Size of long double :- " << sizeof(num3) << endl;

   cout << endl;

   // Without Precision
   cout << "Number1 :- " << num1 << endl;
   cout << "Number2 :- " << num2 << endl;
   cout << "Number3 :- " << num3 << endl;

   cout << endl;

   // Precision
   cout << setprecision(4); // Control precision from std::cout
   cout << "Number1 :- " << num1 << endl;
   cout << "Number2 :- " << num2 << endl;
   cout << "Number3 :- " << num3 << endl;

   cout << endl;

   // Float limit exceed
   // The number will be chopped off
   float num4 {12345676.0f}; // Error : Narrowing conversation & auto scientific notation
   // Why it is transforming into scientific notation ^^?
   // Because of compiler is turning it to scientific notation
   // if it exceeds the limit

   cout << "Number4 :- " << num4 << endl; 

   cout << endl;

   /*
   Fixed notation :- 175.866
   Scientific notation :- 1.75866e2
   By scientific notation, you can shorten a big number.
   Here 'e' refers to multply by 10 to the power of any number.
   */

   double num5 = 12453.3546;
   double num6 = 1.24533546e4;
   double num7 = 123546;
   double num8 = 1.23546e5;
   double num9 = 0.000000000000005647;
   double num10 = 5.647e-15;

   cout << "Number 5 :- " << num5 << endl;
   cout << "Number 6 :- " << num6 << endl;
   cout << "Number 7 :- " << num7 << endl;
   cout << "Number 8 :- " << num8 << endl;
   cout << "Number 9 :- " << num9 << endl;
   cout << "Number 10 :- " << num10 << endl;

   cout << endl;

   /*
   Postive number / 0 = +Inf (Short form of infinitive).
   Negative number / 0 = -Inf (Short form of infinitive).
   Addition, subtraction, multiplication, divition any number with infintive yields infinitive.
   0 / 0 = NaN or nan (Abbreviation : Not a Number).
   */

   double num11 {4.325};
   double numn11 {-4.325};
   double num12 {};
   double num13 {};

   // Infintive
   cout << num11 << " / " << num12 << " = " << num11/num12 << endl;
   cout << numn11 << " / " << num12 << " = " << numn11/num12 << endl;

   //NaN nor nan
   cout << num12 << " / " << num13 << " = " << num12/num13 << endl;

   return 0;
    
}