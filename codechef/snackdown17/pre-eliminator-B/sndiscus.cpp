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
#define DFOR(i,a,b) for(ll i=(a);i>=(b);i--)
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

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int T;
	cin >> T;
	REP(I, T){
		int n;
		cin >> n;
		vector<pii> head(n),tail(n);
		REP(i, n)
			cin >> head[i].x >> head[i].y >> tail[i].x >> tail[i].y;

		int time = INT_MAX;
		FOR(i, 1, 51){
			FOR(j, 1, 51){
				int move = 0;
				REP(k,n){
					int temp = 0;
					if(head[k].x == tail[k].x){
						temp += abs(head[k].x - i);
						if(abs(head[k].y - tail[k].y) != abs(head[k].y-j) + abs(tail[k].y-j)){
							temp += min(abs(head[k].y-j),abs(tail[k].y-j));
						}
					}	
					else{
						temp += abs(head[k].y - j);
						if(abs(head[k].x - tail[k].x) != abs(head[k].x-i) + abs(tail[k].x-i)){
							temp += min(abs(head[k].x-i),abs(tail[k].x-i));
						}						
					}
					move = max(move,temp);
				}
				time = min(time,move);
			}
		}
		cout << time << endl;
	}	
}
