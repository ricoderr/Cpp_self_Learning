#include<iostream>
using namespace std;
int main(){
    double radius, area, pi;
    pi = 3.141592653589793;
    // int = 1 ,2 ,3;  float = 2.445, 3.4; double = 3.141592653589793
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = pi * radius * radius;
    cout << "The area of the circle is: " << area;
    return 0;
}