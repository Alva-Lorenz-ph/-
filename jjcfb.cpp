#include<iostream>
using namespace std;
int main()
{
	int a;
	for (a = 1; a <= 9; a=a + 1)
	{
		int b;
		for (b = 1; b <= a;b= b + 1)
		{
			cout << b << "*" << a << "=" << a * b << " ";
		}
		cout << endl;

	}
	return 0;
}