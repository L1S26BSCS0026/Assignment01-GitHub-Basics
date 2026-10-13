/*
 * Program    : Sum of First 50 Natural Numbers
 * Name       : Muhammad Ahmad Hassan
 * Reg No     : L1S26BSCS0026
 * Assignment : 01 - Getting Started with GitHub
 */

#include<iostream>
using namespace std;
int main()
{
	int x = 1, sum = 0;

	    // Method 1: add numbers one by one using a loop
	while (x <= 50)
	{
		sum = sum + x;
		x++;
	}
	cout << "Sum: " << sum << endl;

	    // Method 2: verify using the formula n(n+1)/2
    int formulaSum = N * (N + 1) / 2;
    cout << "Sum using formula n(n+1)/2: " << formulaSum << endl;
	return 0;
}
