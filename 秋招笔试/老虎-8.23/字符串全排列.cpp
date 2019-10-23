/************************************
题目描述：

实现字符串的全排列，例如输入 “abc” ，输出abc acb bca cab cba

************************************/

#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

void AllPermutation(char *perm, int begin, int end)
{
	if (begin > end)
		return;

	if (begin == end)
	{
		static int count = 1;
		cout << count++ << ":" << perm;
		cout << endl;
	}

	if (begin < end)
	{
		for (int j = begin; j <= end; j++)
		{
			swap(perm[j], perm[begin]);

			AllPermutation(perm, begin + 1, end);

			swap(perm[j], perm[begin]);
		}
	}
}

int main()
{
	char str[100];

	cin >> str;

	AllPermutation(str, 0, strlen(str) - 1);

	return 0;
}