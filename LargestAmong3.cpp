#include<iostream>

using namespace std;
int main(){
    int num1, num2, num3;
    cout << "Enter three numbers here : \n";
    cin >> num1 >> num2 >> num3;
    if(num1 > num2 && num1 > num3){
        cout << num1 << " is the greatest!";
    }
    else if(num2 > num1 && num2 > num3){
        cout << num2 << " is the greatest!";
    }
    else if(num3 > num2 && num3 > num1){
        cout << num3 << " is the greatest!";
    }
    else if(num1 == num2== num3){
        cout << "All the numbers are equal!";
    }
    
    return 0;
}