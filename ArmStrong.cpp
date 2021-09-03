#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
    char a[10];
    int result = 0;
    cout << "Enter the number: ";
    cin >> a;
    int temp =  atoi(a);
    for(int i = 0; i< strlen(a); i++){
        int temp = (int)a[i]-48;
        int num = temp*temp*temp;
        result = result + num;
    }
    if(temp == result){
        cout << "Number is ArmStrong" << endl;
    }else{
        cout << "Number isn't ArmStrong" << endl;
    }
    //cout << b << endl;
    
}