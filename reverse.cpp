#include<iostream>
using namespace std;
int main(){
    int n, reverse=0; 
    cout << "Enter any number: "; 
    cin >> n; 
    while(n!=0){
        int last_digit = n % 10; 
        reverse = reverse*10 + last_digit; 
        n = n/10; 
    }
    cout << "The reversed number is: " << reverse; 
    return 0; 
}