/*****************************************************************************************
								Author: Harshwardhan Praveen
*****************************************************************************************/
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
	string s;
	int odd=0,oddc=0,even=0,evenc=0;
	cin>>s;
	vi letter(26,0);
	REP(i,s.size()){
		letter[s[i]-'a']++;
	}
	REP(i,26){
		if(letter[i]%2==0){
			evenc++;
			even+=letter[i];
		}
		else{
			oddc++;
			odd+=letter[i];
		}
	}
	if(oddc<=1){
		cout<<"First";
	}
	else{
		if((odd+even)%2==0)
			cout<<"Second";
		else
			cout<<"First";
	}
	cout<<endl;
}
