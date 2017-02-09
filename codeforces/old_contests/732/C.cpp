#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.begin(),v.end(),greater<int>()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	ll b,d,s,m;
	cin>>b>>d>>s;
	m=min(b,d);
	m=min(m,s);
	b-=m;
	d-=m;
	s-=m;
	if(b==0 && d==0 && s==0){
		cout<<0<<endl;
		return 0;
	}
	if(b!=0 && d==0 && s==0){
		cout<<2*(b-1)<<endl;
		return 0;
	}
	if(b==0 && d!=0 && s==0){
		cout<<2*(d-1)<<endl;
		return 0;
	}
	if(b==0 && d==0 && s!=0){
		cout<<2*(s-1)<<endl;
		return 0;
	}
	if(b!=0 && d!=0 && s==0 && b!=d){
		cout<<2*max(b,d)-min(b,d)-2<<endl;
		return 0;
	}
	if(b!=0 && d!=0 && s==0 && b==d){
		cout<<b-1<<endl;
		return 0;
	}	
	if(b==0 && d!=0 && s!=0 && d!=s){
		cout<<2*max(d,s)-min(d,s)-2<<endl;
		return 0;
	}
	if(b==0 && d!=0 && s!=0 && s==d){
		cout<<s-1<<endl;
		return 0;
	}	
	if(b!=0 && d==0 && s!=0 && b!=s){
		cout<<2*max(b,s)-min(b,s)-2<<endl;
		return 0;
	}
	if(b!=0 && d==0 && s!=0 && b==s){
		cout<<s-1<<endl;
		return 0;
	}		
}
