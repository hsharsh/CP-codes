/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.66
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MOD         1000000007
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);++i)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);++i)
#define DFOR(i,a,b) for(ll i=(a);i>=(b);--i)
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
#define pii	 		pair<int,int>
#define pll			pair<ll,ll>
#define x 			first
#define y 			second
#define ll 			long long
#define ull 		unsigned long long



inline void solve(){
	ll d, n, m;
	cin >> d >> n >> m;
	vi t(m+1),bo(m+1),l(n+1),r(n+1);
	vector< pair<pii,pii> > sofa(d);
	REP(I, d){
		pii a, b;
		cin >> a.x >> a.y >> b.x >> b.y;
		sofa[I] = {{a.x,a.y},{b.x,b.y}};
		if(a.x == b.x){
			l[a.x]++;
			r[a.x]++;
			bo[max(a.y,b.y)]++;
			t[min(a.y,b.y)]++;
		}
		else{
			bo[a.y]++;
			t[a.y]++;			
			l[max(a.x,b.x)]++;
			r[min(a.x,b.x)]++;			
		}
	}
/*
	for(auto i : l)
		cout << i << " ";
	cout << endl;
	for(auto i : r)
		cout << i << " ";
	cout << endl;
	for(auto i : bo)
		cout << i << " ";
	cout << endl;
	for(auto i : t)
		cout << i << " ";
	cout << endl;
*/
	vi top(m+1),bottom(m+1),left(n+1),right(n+1);
	REP(i,n)
		left[i+1] = left[i] + r[i];
	DFOR(i, n, 1){
		right[i-1] = right[i] + l[i];
	}
	REP(i,m)
		bottom[i+1] = bottom[i] + t[i];
	DFOR(i, m, 1){
		top[i-1] = top[i] + bo[i];
	}
/*
	for(auto i : left)
		cout << i << " ";
	cout << endl;
	for(auto i : right)
		cout << i << " ";
	cout << endl;
	for(auto i : bottom)
		cout << i << " ";
	cout << endl;
	for(auto i : top)
		cout << i << " ";
	cout << endl;	
*/	
	int cl, cr, ct, cb;
	cin >> cl >> cr >> cb>> ct;

	REP(I,d){
		pii a = {sofa[I].x.x,sofa[I].x.y};
		pii b = {sofa[I].y.x,sofa[I].y.y};

		if(a.x == b.x){
			if(cl == left[a.x] && cr == right[a.x]){
				if(ct == top[min(a.y,b.y)] - 1 && cb == bottom[max(a.y,b.y)] - 1){
					cout << I + 1 << endl;
					return;
				}
			}
		}
		else{
			if(ct == top[a.y] && cb == bottom[a.y]){
				if(cl == left[max(a.x,b.x)] - 1 && cr == right[min(a.x,b.x)] - 1){
					cout << I + 1 << endl;
					return;
				}
			}		
		}		
	}
	cout << -1 << endl;	
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	
	solve();	
}
