#include <iostream>

void evendigits(long long& nums, int& ans)
{
	int c = 10;
	if ((nums % c) % 2 == 0)
	{
		ans++;
	}
	nums /= c;
	while (nums > 0)
	{
		evendigits(nums, ans);
	}
}

int main()
{
	long long n = 9223372036854775806;
	int a = 0;
	evendigits(n, a);
	std::cout << ' ' << a << std::endl;
}
