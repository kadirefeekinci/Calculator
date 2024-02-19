#include <iostream>
using namespace std;

double sum(double num1, double num2){
    return num1+num2;
}
double subtract(double num1, double num2){
    return num1-num2;
}
double multiply(double num1, double num2){
    return num1*num2;
}
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    }

    else{
        cout<<"Numbers can not be divided by ";
        return 0;
    }
}


int main() {

    char Operator;
    double a,b;
    cout << "Enter an operator (+,-,*,/): " << endl;
    cin>>Operator;

    cout<<"Enter a number: "<<endl;
    cin>>a;

    cout<<"Enter a number: "<<endl;
    cin>>b;
    switch (Operator) {
        case '+':
            cout<<"Numbers sum: "<<sum(a,b);
            break;

        case '-':
            cout<<"Numbers substract: "<<subtract(a,b);
            break;

        case '*':
            cout<<"Numbers multiplied: "<<multiply(a,b);
            break;

        case '/':
            cout<<"Numbers divided: "<<divide(a, b);
            break;

        default:
            cout<<"Nonvalid Operator";
    }


    return 0;
}

