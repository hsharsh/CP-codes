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
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int T;
	cin>>T;
	REP(I,T){
		int n,q;
		cin>>n>>q;
		vi length(n);
		vl temp(n+1,0);
		REP(i,n){
			cin>>length[i];
			temp[i+1]=temp[i]+length[i];
		}
		sort(all(length));
		REP(J,q){
			int k;
			cin>>k;
			int beg = 0, end = n-1, mid, first = n;
			while(true){
				if(beg > end)
					break;
				mid = (beg + end) / 2;
				if(length[mid] >= k){
					first = mid;
					end = mid - 1;
				}
				else{
					beg = mid + 1;
				}
			}
			beg = 0, end = first-1;
			int pos = first;
			while(true){
				if(beg > end){
					break;
				}
				mid = (beg + end) / 2;
				DEBUG(k*(first - mid) - (temp[first]-temp[mid]));
				DEBUG(mid);
				if(k*(first - mid) - (temp[first]-temp[mid]) <= mid){
					pos = mid;
					end = mid - 1;
				}
				else{
					beg = mid + 1;
				}
			}			 
			cout<<n-pos<<endl;
		}
	}	
}
