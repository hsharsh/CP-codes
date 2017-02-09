#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORD(i,a,b) for(int i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vii vector<vector<int> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

bool check(string s,int i){
	if(i+2>=s.size())
		return false;
	else if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
		return true;
	else
		return false;
}

int main(){
	string s,normal;
	int flag=0;
	cin>>s;
	int i=0;
	while(i<s.size()){
		if(check(s,i)){
			while(check(s,i))
				i+=3;
			if(flag)
				cout<<" ";
			flag=1;
		}
		else{
			cout<<s[i];
			i++;
			flag=1;
		}
	}
	cout<<endl;
}
