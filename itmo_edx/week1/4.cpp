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

#ifdef JUDGE
#include <fstream>
std::ifstream cin("team.in");
std::ofstream cout("team.out");
#else
#include <iostream>
using std::cin;
using std::cout;
#endif

int main(){
	vector < vector <int> > skills(3,vector <int>(3));
	int max=MIN,PI,pj,qi,qj;
	vector <float> finished(3);
	REP(i,3){
		REP(j,3){
			cin>>skills[i][j];
			if(skills[i][j]>max){
				max=skills[i][j];
				PI=i;
				pj=j;
			}
		}
	}
	finished[0]=max;
	max = MIN;
	REP(i,3){
		REP(j,3){
			if(i!=PI && j!=pj && skills[i][j]>max){
				max=skills[i][j];
				qi=i;
				qj=j;
			}
		}
	}
	finished[1]=max;
	finished[2]=skills[3-PI-qi][3-pj-qj];
	cout<<sqrt(finished[0]*finished[0]+finished[1]*finished[1]+finished[2]*finished[2])<<endl;
}
