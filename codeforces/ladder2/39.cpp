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
	int n,flag=0,num;
	cin>>n;
	vi pos,neg,zer;
	REP(i,n){
		cin>>num;
		if(num>0)
			pos.pb(num);
		else if(num==0)
			zer.pb(num);
		else
			neg.pb(num);
	}
	if(pos.size()==0){
		if(neg.size()%2==0){
			cout<<neg.size()-3<<" ";
			FOR(i,2,neg.size()-1)
				cout<<neg[i]<<" ";
			cout<<endl;

			cout<<2<<" "<<neg[0]<<" "<<neg[1]<<endl;

			cout<<zer.size()+1<<" ";
			cout<<neg[neg.size()-1]<<" ";
			REP(i,zer.size())
				cout<<0<<" ";
		}
		else{
			cout<<neg.size()-2<<" ";
			FOR(i,2,neg.size())
				cout<<neg[i]<<" ";
			cout<<endl;
			
			cout<<2<<" "<<neg[0]<<" "<<neg[1]<<endl;

			cout<<zer.size()<<" ";
			REP(i,zer.size())
				cout<<0<<" ";			
		}
	}
	else{
		if(neg.size()%2==0){
			cout<<neg.size()-1<<" ";
			FOR(i,0,neg.size()-1)
				cout<<neg[i]<<" ";
			cout<<endl;

			cout<<pos.size()<<" ";
			REP(i,pos.size())
				cout<<pos[i]<<" ";
			cout<<endl;

			cout<<zer.size()+1<<" ";
			cout<<neg[neg.size()-1]<<" ";
			REP(i,zer.size())
				cout<<0<<" ";
		}
		else{
			cout<<neg.size()<<" ";
			FOR(i,0,neg.size())
				cout<<neg[i]<<" ";
			cout<<endl;
			
			cout<<pos.size()<<" ";
			REP(i,pos.size()) 
				cout<<pos[i]<<" ";
			cout<<endl;

			cout<<zer.size()<<" ";
			REP(i,zer.size())
				cout<<0<<" ";			
		}
	}
	cout<<endl;
}
