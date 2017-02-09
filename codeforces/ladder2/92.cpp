/*****************************************************************************************
This one moment when you know you're not a sad story,
you are alive.
And you stand up and see the lights on buildings
and everything that makes you wonder,
when you were listening to that song
on that drive with the people you love most in this world.
And in this moment, I swear, we are infinite.

Version	:	1.5
Author	:	Harshwardhan Praveen
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
#define FV(i,v) for(ll i:v)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define si set<ll,ll>
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	string s,ch1,temp="";
	cin>>s;
	int i = 0,count=0;
	while(i<s.size()){
		ch1 = s[i];
		if(s[i]==s[i+1]){
			while(s[i+1]==s[i+2]){
				i++;
			}
			i++;
			temp.append(ch1);
		}
		else{
			temp.append(ch1);
			i++;
		}
	}
	s=temp;
	i=0;
	temp="";
	while(i<s.size()){
		ch1 = s[i];
		if(s[i]==s[i+1] && s[i+2]==s[i+3]){
			temp.append(ch1);
			ch1=s[++i];
			temp.append(ch1);
			ch1=s[++i];
			temp.append(ch1);
			i+=2;
		}
		else{
			temp.append(ch1);
			i++;
		}		
	}
	char ans[200000];
	i=0;
	while(isalpha(temp[i])){
		ans[i]=temp[i];
		i++;
	}
	ans[i]='\0';
	cout<<ans<<endl;
}
