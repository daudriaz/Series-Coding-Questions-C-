#include <iostream>
using namespace std;

int main() {
	int pos;
	cout << "Enter the element: ";
	cin >> pos;
	int x = 0;
	int y = 1;
	cout << x << "," << y;
	for (int i = 2; i < pos; i++)
	{
		int result = x + y;
		cout << "," << result;
		x = y;
		y = result;
		
	}


	

}
