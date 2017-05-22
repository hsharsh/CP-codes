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
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
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
#define pii 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long

bool comp(pii a, pii b){
	if(a.F<b.F)
		return true;
	if(a.F==b.F){
		if(a.S<b.S)
			return true;
		return false;
	}
	return false;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int n,k;
	cin>>n>>k;
	vii matrix(n,vi(n,0));
	if(n*n < k){
		cout<<-1<<endl;
		return 0;
	}
	int i=0,j=1,l=0;
	bool dgreater = true, possible1 = true, possible2=true, possible=true;
	while(k>0){
		if(k>2){
			if(dgreater){
				if(!possible1){
					possible=false;
				}
				matrix[l][l]=1;
				l++;
				if(l>=n)
					possible1=false;
				k--;
			}
			else{
				if(!possible2){
					possible=false;
				}
				matrix[i][j]=1;
				matrix[j][i]=1;
				j++;
				if(j%n==0){
					i++;
					if(i>=n)
						possible2=false;
					j=i+1;
				}
				k-=2;
			}
			if(comp(mp(l,l),mp(i,j)))
				dgreater=true;
			else
				dgreater=false;
		}
		if(k==2){
			if(dgreater){
				if(l+1<n){
					matrix[l][l]=1;
					l++;
					matrix[l][l]=1;
				}
				else{
					if(possible2){
						matrix[i][j]=1;
						matrix[j][i]=1;
					}
					else
						possible=false;					
				}
			}
			else{
				if(possible2){
					matrix[i][j]=1;
					matrix[j][i]=1;
				}
				else
					possible=false;	
			}
			k-=2;
		}
		if(k==1){
			if(l<n){
				matrix[l][l]=1;
			}
			else
				possible=false;
			k--;
		}
	}
	if(possible || !k){
		REP(i,n){
			REP(j,n)
				cout<<matrix[i][j]<<" ";
			cout<<endl;
		}
	}
	else
		cout<<-1<<endl;

}
