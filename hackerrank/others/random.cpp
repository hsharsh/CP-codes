#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
    int g,n,count=0,flag=1,max=MIN,save;
    string s;
    cin>>g;
    while(g--){
    	vi a(26,0);	
    	flag=1;
    	count=0;
        cin>>n;
        cin>>s;
        REP(i,s.size()){
        	if(s[i]=='_')
        		count++;
        	else
        		a[s[i]-'A']++;
        }
        REP(i,a.size()){
        	if(a[i]==1)
        		flag=0;
        }
        if(count==0){
        	save=s[0];
        	REP(i,n){
        		if(s[i]!=save){
        			FOR(j,i,n){
        				if(s[j]==save){
        					flag=0;
        					break;
        				}
        			}
        			save=i;
        		}
        	}

        }
        if(max==n)
            flag=1;
       
        if(flag)
        	cout<<"YES"<<endl;
        else
        	cout<<"NO"<<endl;
    } 
}
