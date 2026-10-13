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