#include<iostream>
using namespace std;
#include<string>
#include<cstring>
int main()
{
	int a = 0, b = 0, y;
	string s;
	char x;
	cin >> s >> x >> y;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == x) {
			a++;
		}
		else {
			if(a<y)
			a = 0;
		}
	}
	if (a >= y)cout << "YES";
	else cout << "NO";
	return 0;
}
