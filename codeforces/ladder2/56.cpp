#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define cns ios_base::sync_with_stdio(false)
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
	ll t,sx,sy,ex,ey,x,y;
	string s;
	cin>>t>>sx>>sy>>ex>>ey;
	cin>>s;
	x=ex-sx;
	y=ey-sy;
	int i=0,temp;
	temp=t;
	while(t--){
		if(s[i]=='N'){
			if(abs(y-1)<abs(y)){
				y--;
			}
		}
		else if(s[i]=='S'){
			if(abs(y+1)<abs(y)){
				y++;
			}
		}
		else if(s[i]=='W'){
			if(abs(x+1)<abs(x)){
				x++;
			}
		}
		else if(s[i]=='E'){
			if(abs(x-1)<abs(x)){
				x--;
			}
		}
		i++;
		if(x==0 && y==0)
			break;				
	}
	if(t<0)
		cout<<-1<<endl;
	else
		cout<<temp-t<<endl;
}
