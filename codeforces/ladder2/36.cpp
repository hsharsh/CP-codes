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

string its (ll n){
	ostringstream stream;
	stream<<n;
	return stream.str();
}


int main(){
	ll n,flag=1,i=0;
	cin>>n;
	string s=its(n);
	while(i<s.size()){
		if(s[i]=='1'&& s[i+1]=='4' && s[i+2]=='4')
			i+=3;
		else if(s[i]=='1'&& s[i+1]=='4')
			i+=2;
		else if(s[i]=='1')
			i++;
		else{
			flag=0;
			break;
		}
	}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
