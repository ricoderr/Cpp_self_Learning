#include<iostream>
using namespace std;
int main(){
    int num1,num2, value;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter the operator you want to use: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    if(op == '+'){
        value = num1 + num2;
    }
    else if(op == '-'){
        value = num1 - num2;
    }
    else if(op == '*'){
        value = num1 * num2;
    }
    else if(op == '/'){
        value = num1 / num2;
    }
    else{
        cout << "Error! please use the correct operator :)";
    }
    cout << "=" << value;
    return 0;
}