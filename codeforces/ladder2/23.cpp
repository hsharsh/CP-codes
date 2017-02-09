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
	int n,num,a=0,b=0,temp;
	cin>>n;
	REP(i,n){
		cin>>num;
		if(num==0)
			b++;
		else if(num==5){
			a++;
		}
	}
	num=0;
	if(b>0){
		while((a*5)%9!=0)
			a--;
	}

	if(a>0){
		if(b>0){
			REP(i,a)
				cout<<5;			
			REP(i,b)
				cout<<0;
			cout<<endl;
		}
		else
			cout<<-1<<endl;
	}
	else if(b>0)
		cout<<0<<endl;
	else
		cout<<-1<<endl;
}
