/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.63
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int k;
	string s;
	cin >> s >> k;
	reverse(s.begin(),s.end());
	int i = 0, zero = 0;
	if(s == "0"){
		cout << 0 << endl;
		return 0;
	}
	bool flag = false;
	while(i < s.size()-1){
		if(zero == k){
			flag = true;
			break;
		}
		if(s[i] == '0')
			zero++;
		i++;
	}

	if(zero == k)
		flag = true;

	cout << ( (flag) ? (i - zero) : (s.size()-1) ) << endl;
}
