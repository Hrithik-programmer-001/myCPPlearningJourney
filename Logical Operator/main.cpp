#include <iostream>
using namespace std;

int main(){
  
    bool a {false};
    bool b {true};
    bool c {true};
    
    cout << boolalpha;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;



    cout << endl;
    cout << "============= AND =============" << endl;

    /*
    AND : ' && ' refers to AND.
          Evaluates to true when all operands are true.
          A single false operand will drag the entire expression evalute to be false.
          A single true operand will not drag the entire expression evalute to be true.
    */
    
    cout << "a && b : " << (a && b) << endl;
    cout << "a && c : " << (a && c) << endl;
    cout << "b && c : " << (b && c) << endl;
    cout << "a && b && c : " << (a && b && c) << endl;



    cout << endl;
    cout << "============= OR =============" << endl;

    /*
    OR :  ' || ' refers to OR.
          Evaluates to true when at least one operand is true.
          A single false operand will not drag the entire expression evalute to be false.
          A single true operand will drag the entire expression evalute to be true.
    */
    
    cout << "a || b : " << (a || b) << endl;
    cout << "a || c : " << (a || c) << endl;
    cout << "b || c : " << (b || c) << endl;
    cout << "a || b || c : " << (a || b || c) << endl;



    cout << endl;
    cout << "============= NOT =============" << endl;

    /*
    NOT : ' ! ' refers to NEGATION.
          Negates whatever operand you put it with.
               
    */
    
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;

    cout << "!a : " << !a << endl;
    cout << "!b : " << !b << endl;
    cout << "!c : " << !c << endl;
    



    cout << endl;
    cout << "============= Combination of logical operators =============" << endl;

    cout << "!((a && b) || c) : " << !((a && b) || c) << endl;

    cout << endl;
    cout << "============= Combination of logical and relational operators =============" << endl;

    int d {48};
    int e {56};
    int f {19};

    cout << "d : " << d << endl;
    cout << "e : " << e << endl;
    cout << "f : " << f << endl;

    cout << "(!((d < e) && c) || (e < f)) : " << (!((d < e) && c) || (e < f)) << endl;


    return 0; 
    
}