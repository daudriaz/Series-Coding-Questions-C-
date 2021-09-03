#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char a[50];
    char b[50];
    int flag = true;
    cout << "Enter String: ";
    cin >> a;
    int len= strlen(a)-1;
    //cout << len << endl;
    for (int i = 0; i <= len; i++)
    {
        char temp = a[i];
        b[i]=a[len];
        b[len] = temp;
        len--;
    }
    for (int i = 0; i < strlen(a) ; i++){
        if(a[i] != b[i]){
            flag = false;
            cout << "String is not Palindrome" << endl;
            break;
        }
    }
    if(flag == true){
        cout << "String is palindrome" << endl;
    }
}