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
	while (x <= 50)
	{
		sum = sum + x;
		x++;
	}
	cout << "Sum: " << sum << endl;
	return 0;
}
