// cassian
// 10/30/22
// week 8 assignment 
// using recursive function to convert int to hexadecimal

#include <iostream>



using namespace std; 
void getHex(int);

int main()
{


	int userNum;
	cout << "Enter integer to convert" << endl;
	// get input
	cin >> userNum;
	// call function
	getHex(userNum);
}

void getHex(int x)
{
	if (x == 0)
		return;

	// call back to function with new parameter, divide num by 16
	getHex(x / 16);

	// if remainder is over 9
	if (x % 16 > 9)
		// then get letter value instead
		cout << char(x % 16 + 55);

	// otherwise print remainder (#)
	else
		cout << x % 16;
}
// sources: http://teknicalprog.blogspot.com/2014/06/write-c-program-to-convert-decimal-to_7533.html , https://www.rapidtables.com/convert/number/decimal-to-hex.html