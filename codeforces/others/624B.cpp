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
	ll n,length=0,flag;
	cin>>n;
	vi letter(n);
	REP(i,n)
		cin>>letter[i];
	sort(all(letter));
	REP(i,n){
		flag=0;
		while(!flag){
			flag=1;
			REP(j,i){
				if(letter[i]==letter[j])
					flag=0;
			}
			if(!flag)
				letter[i]--;
			if(letter[i]==0)
				break;
		}
		length+=letter[i];
	}
	cout<<length<<endl;
}
