#include<iostream>
#include<string>

using namespace std;
int main(){
    string name;
    cout << "Enter you name(should consist only upto 10 character!)";
    cin >> name;
    while (name.length() >10){
        cout << "Only upto 10 character! Idiot! : ";
        cin >> name;
    }
    cout<< "Yay!!!!! done :)";
    return 0;
}