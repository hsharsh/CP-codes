/*****************************************************************************************
You should enjoy the little detours...
Becase that's where you'll find the things
more important than what you want...

Version	:	1.62
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MOD         1000000007
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);i++)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb 			push_back
#define mp 			make_pair
#define all(v) 		v.begin(),v.end()
#define rall(v) 	v.rbegin(),v.rend()
#define vi 			vector<int>
#define vl 			vector<ll>
#define vii 		vector<vector<int> >
#define vll 		vector<vector<ll> >
#define vs 			vector<string>
#define vb			vector<bool>
#define si 			set<int>
#define pii 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long

ll power_modulo(ll base, ll exp, ll mod){
	ll result = 1;
	base %= mod;
	while(exp > 0){
		if(exp%2 == 1)
			result = (result*base) % mod;
		exp = exp>>1;
		base = (base*base) % mod;
	}
	return result;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	string a,b,c;
	cin>>a>>b;
	c=a;
	int n = a.size();
	sort(all(a));
	sort(all(b));
	if(n%2==0){
		a = a.substr(0,n/2);
		b = b.substr(n/2,n/2);
	}
	else{
		a = a.substr(0,n/2+1);
		b = b.substr(n/2+1,n/2);
	}
	int na[26]={0},nb[26]={0};
	REP(i,a.size()){
		na[a[i]-'a']++;
	}
	REP(i,b.size()){
		nb[b[i]-'a']++;
	}
	int pa1=0,pb2=25,pa2=25,pb1=0,front=0,back=n-1;
	REP(i,n){
		while(na[pa1]==0)
			pa1++;
		while(na[pa2]==0)
			pa2--;
		while(nb[pb1]==0)
			pb1++;
		while(nb[pb2]==0)
			pb2--;
		
		if(i%2==0){
			if(pa1<pb2){
				na[pa1]--;
				c[front]='a'+pa1;
				front++;
			}
			else{
				na[pa2]--;
				c[back]='a'+pa2;
				back--;
			}

		}
		else{
			if(pb2>pa1){
				nb[pb2]--;
				c[front]='a'+pb2;
				front++;
			}
			else{
				nb[pb1]--;
				c[back]='a'+pb1;
				back--;
			}
		}
	}
	cout<<c<<endl;
}
