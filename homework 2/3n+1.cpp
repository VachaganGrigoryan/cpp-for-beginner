#include<iostream>
int main()
{
	int n;
	std::cin >> n;
	while (n != 1)
	{
		std::cout << n << " ";
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = n * 3 + 1;
		}
	}
	std::cout << 1 << " ";
	
}