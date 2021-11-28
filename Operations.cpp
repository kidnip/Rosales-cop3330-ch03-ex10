#include "std_lib_facilities.h"

int main(){
    string operation;
    double input1, input2, result = 0;
    
    cout << "Enter an operation and two values (separated by spaces):\n";
    cin >> operation >> input1 >> input2;

    if(operation == "+" || operation == "plus"){
        result = input1 + input2;
    }
    else if(operation == "-" || operation == "minus"){
        result = input1 - input2;
    }
    else if(operation == "*" || operation == "mul"){
        result = input1 * input2;
    }
    else if(operation == "/" || operation == "div"){
        result = input1 / input2;
    }

    cout << "The result is " << result;

    return 0;
}