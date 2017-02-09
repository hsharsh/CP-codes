#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORD(i,a,b) for(int i=(a);i>(b);i--)
#define pb push_back
#define vi vector<int>
#define vii vector<vector<int> >
#define vs vector<string>
#define ino ios_base::sync_with_stdio(false)

typedef long long ll;
typedef unsigned long long ull;

int main(){
	int s,n;
	cin>>s>>n;
	vector< pair<int,int> > v(n);
	REP(i,n)
		cin>>v[i].first>>v[i].second;
	sort(v.begin(),v.end());
	int i=0;
	while(s>0 && i<n){
		if(s>v[i].first){
			s+=v[i].second;
		}
		else{
			s-=v[i].first;
			break;
		}
		i++;
	}
	if(s>0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}