#include <iostream>
using namespace std;

int main()
{
    int x,flag = 0;
    cout << "Enter the number to check: ";
    cin >> x;
    int m = x/2;
    for (int i = 2 ; i < m ; i++ ){
        if(x%i == 0){
            cout << "Not Prime Number" << endl;
            flag = 1;
            break;
        }
        
    }
    if(flag == 0)
    {
        cout << "Prime Number" << endl;
    }
}