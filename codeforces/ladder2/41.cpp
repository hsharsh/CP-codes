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
	int k,flag=1;
	string s;
	char t[1000]="";
	cin>>k>>s;
	map <char,int> m;
	REP(i,s.size()){
		if(m.find(s[i])==m.end())
			m[s[i]]=1;
		else
			m[s[i]]++;
	}
	for(map<char,int>::iterator i = m.begin();i!=m.end();++i){
		if((i->S)%k!=0)
			flag=0;
	}
	int l=0;
	if(flag){
		for(map<char,int>::iterator i = m.begin();i!=m.end();++i){
			REP(j,(i->S)/k){
				t[l]=i->F;
				l++;
			}
		}		
		REP(i,k)
			cout<<t;
		cout<<endl;
	}
	else
		cout<<-1<<endl;
}
