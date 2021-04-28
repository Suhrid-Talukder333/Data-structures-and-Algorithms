#include <iostream>
using namespace std;

int bexpo(int n, int p)
{
	int result = 1;
	while (p)
	{
		if (p % 2 == 0)
		{
			n *= n;
			p /= 2;
		}
		else
		{
			result *= n;
			p--;
		}
	}
	return result;
}

int main()
{
	int n, p;
	cin >> n >> p;
	cout << bexpo(n, p);
}
