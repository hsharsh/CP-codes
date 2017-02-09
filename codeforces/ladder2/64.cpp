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
#define rall(v) v.rbegin(),v.rend()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	int n,m;
	cin>>n>>m;
	vi array(n),count(100000,0);
	vector < pair<int,int> > q(m);
	set <ll> distinct;
	REP(i,n){
		cin>>array[i];
		distinct.insert(array[i]);
		count[array[i]]++;
	}

	REP(i,m){
		cin>>q[i].F;
		q[i].S=i;
	}
	sort(all(q));
	int j=0;
	REP(i,m){
		while(j!=q[i].F-1){
			count[array[j]]--;
			if(count[array[j]]<=0)
				distinct.erase(array[j]);
			j++;
		}
		q[i].F=distinct.size();
	}
	sort(all(q), [](const std::pair<int,int> &left, const std::pair<int,int> &right) {
    	return left.second < right.second;
	});
	REP(i,m)
		cout<<q[i].F<<endl;
}
