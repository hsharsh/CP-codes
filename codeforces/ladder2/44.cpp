#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORD(i,a,b) for(int i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vii vector<vector<int> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

string its (ll n){
	ostringstream stream;
	stream<<n;
	return stream.str();
}

int main(){
	int n,flag=1;
	cin>>n;
	vector<ii > laptop(n),laptop2(n);
	REP(i,n){
		cin>>laptop[i].F>>laptop[i].S;
	}
	laptop2=laptop;
	sort(laptop.begin(),laptop.end());
	sort(laptop2.begin(),laptop2.end(),[](const ii &left, const ii &right){
    	return left.second < right.second;
	});	

	REP(i,n){
		if(laptop[i].F!=laptop2[i].F){
			flag=0;
			break;
		}
	}
	if(flag)
		cout<<"Poor Alex"<<endl;
	else
		cout<<"Happy Alex"<<endl;
}
