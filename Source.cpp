#include<iostream>
#include<string>
#include"prefix.h"

using namespace std;

int main() {
	string arr[] = {"perdurar","perpetuar","perseverar","permanecer","pertenecer","permanente"};

	int n = sizeof(arr) / sizeof(arr[0]);

	Prefix* pf = new Prefix();

	string ans = pf->findCommonPrefix(arr, 0, n - 1);
	if (ans.length())cout << "the longest common prefix is: " << ans;
	else cout << "there is no common prefix ";

	cout << endl;
	system("pause");
	return 0;
}
