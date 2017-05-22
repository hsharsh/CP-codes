/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.63
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
#define x			first
#define y 			second
#define ll 			long long
#define ull 		unsigned long long

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int T;
	cin>>T;
	REP(I,T){
		bool same=false;
		pii a, b, c, d;
		cin>>a.x>>a.y>>b.x>>b.y;
		cin>>c.x>>c.y>>d.x>>d.y;
		if(a==c || a==d || b==c || b==d){
			same = true;
		}

		if(a.x==b.x){
			if(c.x==a.x && d.x==a.x){
				if(c.y>=d.y){
					if(c.y>=a.y && a.y>=d.y)
						same=true;
					if(c.y>=b.y && b.y>=d.y)
						same=true;
				}
				else{
					if(d.y>=a.y && a.y>=c.y)
						same=true;
					if(d.y>=b.y && b.y>=c.y)
						same=true;
				}
				if(a.y>=b.y){
					if(a.y>=c.y && c.y>=b.y)
						same=true;
					if(a.y>=d.y && d.y>=b.y)
						same=true;
				}
				else{
					if(b.y>=c.y && c.y>=a.y)
						same=true;
					if(b.y>=d.y && d.y>=a.y)
						same=true;
				}
			}
		}
		if(a.y==b.y){
			if(c.y==a.y && d.y==a.y){
				if(c.x>=d.x){
					if(c.x>=a.x && a.x>=d.x)
						same=true;
					if(c.x>=b.x && b.x>=d.x)
						same=true;
				}
				else{
					if(d.x>=a.x && a.x>=c.x)
						same=true;
					if(d.x>=b.x && b.x>=c.x)
						same=true;
				}
				if(a.x>=b.x){
					if(a.x>=c.x && c.x>=b.x)
						same=true;
					if(a.x>=d.x && d.x>=b.x)
						same=true;
				}
				else{
					if(b.x>=c.x && c.x>=a.x)
						same=true;
					if(b.x>=d.x && d.x>=a.x)
						same=true;
				}
			}
		}
		cout<<(same?"yes":"no")<<endl;		
	}	
}
