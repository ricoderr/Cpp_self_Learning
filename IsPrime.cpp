#include<iostream>
using namespace std;

int main(){
    int i, n; 
    bool is_prime; 
    cout << "Enter any number: ";
    cin >> n;
    if(n<=1){
        is_prime = false;
    }

    else{
        for(i=2; i<=n/2; i++){
            if(n%i != 0){
                is_prime = false;
                break;
            }

        }
    }
    if(is_prime == true){
        cout << n << " is prime number!"; 
    }
    else{
        cout << n << " is not a prime number!"; 
    }
    return 0;
}