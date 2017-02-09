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
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a!=c && b!=d && abs(c-a)!=abs(d-b))
		cout<<-1<<endl;
	else if(a==c){
		if(abs(a+b-d)<=1000)
			cout<<a+b-d<<" "<<b<<" "<<c+b-d<<" "<<d;
		else
			cout<<a-b+d<<" "<<b<<" "<<c-b+d<<" "<<d;
	}
	else if(b==d){
		if(abs(b+c-a)<=1000)
			cout<<a<<" "<<b+c-a<<" "<<c<<" "<<d+c-a;
		else
			cout<<a<<" "<<b-c+a<<" "<<c<<" "<<d-c+a;
	}
	else
		cout<<a<<" "<<d<<" "<<c<<" "<<b;
}