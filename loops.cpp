#include<iostream>
using namespace std;

int main(){
    int i, sum;
    sum = 0;
    for(i=1 ; i<=50000 ; i++){
        sum += i;
        cout << sum << "\n"; 
        i += 1;
    }
    cout << "The total sum of the 1b is: "<< sum; 

}

