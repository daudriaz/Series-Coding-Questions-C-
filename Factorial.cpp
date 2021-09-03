#include<iostream>
using namespace std;
int main(){
    int num, fact = 1;
    cout << "Enter Number: ";
    cin >> num;
    for(int i = num; i >= 1 ; i--){
        fact = fact * i;
    }
    cout << "Factorial of " << num << " is " << fact << endl;
}