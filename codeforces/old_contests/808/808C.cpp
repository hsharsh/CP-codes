/*****************************************************************************************
You should enjoy the little detours...
Becase that's where you'll find the things
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
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long

bool comp1(pair<pii,int> a, pair<pii,int> b){
	return (a.F).F<(b.F).F;
}
bool comp2(pair<pii,int> a, pair<pii,int> b){
	return a.S<b.S;
}
int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int n,w;
	cin>>n>>w;
	vector< pair<pii,int> >a(n,mp(mp(0,0),0));
	REP(i,n){
		cin>>a[i].F.F;
		a[i].S=i;
	}
	sort(all(a),comp1);
	int pointer=0;
	while(w--){
		a[pointer].F.S++;
		pointer= (pointer+1)%n;
	}
	sort(all(a),comp2);
	bool flag=true;
	REP(i,n){
		if(a[i].F.F/2 > a[i].F.S)
			flag=false;
	}
	if(flag){
		REP(i,n){
			cout<<a[i].F.S<<" ";
		}
		cout<<endl;
	}
	else
		cout<<-1<<endl;
}
