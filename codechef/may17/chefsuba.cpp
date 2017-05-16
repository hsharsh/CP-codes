/*****************************************************************************************
You should enjoy the little detours...
Becase that's where you'll find the things
more important than what you want...

Version	:	1.5
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MIN 		-1000000007
#define MAX 		1000000007
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

void update(vi a,int n,int k,int &maxones, int &first, int &last, int &pos, int &rot){
	int current=0;
	maxones=0,first=0,last=0;
	if(rot==0)
		pos=0;
	else
		pos= n-rot;
	REP(i,k){
		first+=a[(i-rot<0)?(n+((i-rot)%n)):(i-rot)];
		current+=a[(i-rot<0)?(n+((i-rot)%n)):(i-rot)];
	}
	maxones=max(maxones,current);
	FOR(i,k,a.size()){
		current = current + a[(i-rot<0)?(n+((i-rot)%n)):(i-rot)] - a[(i-k-rot<0)?(n+((i-k-rot)%n)):(i-k-rot)];
		if(current>maxones){
			pos = (i-k+1-rot<0)?(n+((i-k+1-rot)%n)):(i-k+1-rot);
			maxones=current;
		}
	}
	last=current;
}

void print(vi a,int n, int rot){
	cout<<"->";
	FOR(i,n-rot%n,n)
		cout<<a[i]<<" ";
	FOR(i,0,n-rot%n)
		cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	int n,k,q,rot=0;
	cin>>n>>k>>q;
	vi a(n,0),answer(n,-1);
	REP(i,n){
		cin>>a[i];
	}
	int maxones=0,current=0,first=0,last=0,pos=0;
	REP(i,k){
		first+=a[i];
		current+=a[i];
	}
	maxones=max(maxones,current);
	FOR(i,k,a.size()){
		current = current + a[i] - a[i-k];
		if(current>maxones){
			pos = i-k+1;
			maxones=current;
		}
	}
	last=current;
	answer[0]=maxones;
	string query;
	cin>>query;
	REP(i,q){
		char ch = query[i];
		if(ch=='!'){
			if(answer[(rot+1)%n]==-1){
				if(a[(k-1-rot<0)?(n+((k-1-rot)%n)):(k-1-rot)]==1)
					first--;
				if(a[(n-k-1-rot<0)?(n+((n-k-1-rot)%n)):(n-k-1-rot)]==1)
					last++;
				if(a[(n-1-rot<0)?(n+((n-1-rot)%n)):(n-1-rot)]==1){
					last-=1;
					first+=1;
				}

				rot++;
				rot%=n;
				
				if(first>=maxones){
					if(rot==0)
						pos=0;
					else
						pos= n-rot;
					maxones=first;
				}
				else if(pos==(n-k-rot+1<0)?(n+(n-k-rot+1)%n):(n-k-rot+1) && last<maxones)
					update(a,n,k,maxones,first,last,pos,rot);
				answer[rot]=maxones;
			}
			else{
				rot++;
				rot%=n;
			}
		}
		if(ch=='?')
			cout<<answer[rot]<<endl;
/*
		print(a,n,rot);
		DEBUG(rot);
		DEBUG(pos);
		DEBUG(answer[rot]);		
		DEBUG(first);
		DEBUG(last);
*/
	}
}
