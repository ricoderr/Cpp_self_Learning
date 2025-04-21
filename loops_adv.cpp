#include<iostream>
#include<string>
using namespace std;
int main(){
    int i=1, n;
    char s='*';
    string output;
    cout << "How many no of rows you want? : ";
    cin >> n;
    while(i<=n){
        output = string(i, s); 
        cout << output << endl;
        i++;
    } 
    return 0;                          
}