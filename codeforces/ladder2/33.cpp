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
	ll t1,t2,t3;
	string a,b,c;
	cin>>t1>>t2;
	a=its(t1);
	b=its(t2);
	c=its(t1+t2);
	t1=t2=t3=0;

	REP(i,a.size()){
		if(a[i]!='0'){
			t1=t1*10+(a[i]-'0');	
		}
	}
	
	REP(i,b.size()){
		if(b[i]!='0'){
			t2=t2*10+(b[i]-'0');	
		}
	}
	
	REP(i,c.size()){
		if(c[i]!='0'){
			t3=t3*10+(c[i]-'0');	
		}
	}

	if(t1+t2==t3)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
