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

float nck(int n, int k){
	float result=1;
	int temp = n;
	while(n>temp-k){
		result*=n;
		n--;
	}
	FOR(i,2,k+1){
		result/=i;
	}
	return result;
}
int main(){
	string s,t;
	int apos=0, relpos=0,qmarks=0,sel=0,temp;
	double prob;
	cin>>s>>t;
	REP(i,s.size()){
		if(s[i]=='+')
			apos++;
		else
			apos--;

		if(t[i]=='+')
			relpos++;
		else if(t[i]=='-')
			relpos--;
		else
			qmarks++;
	}
	if(qmarks==0){
		if(apos==relpos)
			prob=1.0;
		else
			prob=0.0;
	}
	else{
		if(relpos<apos){
			sel=qmarks;
			temp=sel;
			while(temp!=apos-relpos && sel>0){
				sel--;
				temp-=2;
			}		
			if(sel>0)
				prob=nck(qmarks,sel)*(pow(0.5,qmarks));
			else
				prob=0.0;
		}
		else if(relpos>apos){
			sel=qmarks;
			temp=(-1)*sel;
			while(temp!=apos-relpos && sel>0){				
				sel--;
				temp+=2;
			}
		
			if(sel>0)
				prob=nck(qmarks,sel)*(pow(0.5,qmarks));
			else
				prob=0.0;		}
		else{
			if(qmarks%2==0){
				prob=nck(qmarks,qmarks/2)*(pow(0.5,qmarks));
			}
			else
				prob=0.0;		
		}
	}
	printf("%.12f \n",prob);
}
