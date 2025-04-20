#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any number: ";
    cin >> n;
    if(n%2 == 0){
        cout << "The number " << n << " is even number";
    
    }
    else{
        cout << "The number " << n << " is odd number";
    }
    return 0;
}