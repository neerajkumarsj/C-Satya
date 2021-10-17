// CPP program to Decimal to binary conversion
// using bitwise operator
// Size of an integer is assumed to be 32 bits
#include <iostream>
using namespace std;
 
// Function that convert Decimal to binary
int decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    int dec = 0;
    for (int i = 30; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
		{
        	dec = (dec + 1) * 10;
            cout << "1";
        }
        else
		{
        	dec = dec * 10;
            cout << "0";
        }
    }
    return dec;
}
 
// driver code
int main()
{
    int n = 11;
    int x = decToBinary(n);
    cout << "\n" << "X: " << x << endl;
}