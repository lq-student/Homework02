/*Date:March 12th.2022
  Name:Liu Qiang
  Email:2515602256@qq.com
  Function:输入两个整数，并确定一个数是否为另一个数的二倍
  */

#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a % b == 0)
	{
		cout << "第一个数是第二个数的倍数" << endl;
	}
	else
		cout << "第一个数不是第二个数的倍数" << endl;
	return 0;
}

