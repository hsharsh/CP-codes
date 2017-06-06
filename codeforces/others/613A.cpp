/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.64
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.14159265358979323846
#define MOD         1000000007
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);++i)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);++i)
#define DFOR(i,a,b) for(ll i=(a);i>=(b);--i)
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
#define pii	 		pair<int,int>
#define pll			pair<ll,ll>
#define x			first
#define y 			second
#define ll 			long long
#define ull 		unsigned long long

#define pdd			pair<double,double>

pdd center;
double maxd = -1, mind = 1e9;

double distance(pdd point){
	return sqrt(pow(point.x-center.x , 2) + pow(point.y - center.y , 2));
}

void update(pdd beg, pdd end){
	maxd = max(maxd, distance(beg));
	REP(i,100){
		pdd lthird = { (beg.x + (end.x - beg.x) / 3), (beg.y + (end.y - beg.y) / 3)};
		pdd rthird = { (end.x - (end.x - beg.x) / 3), (end.y - (end.y - beg.y) / 3)};
		if(distance(lthird) <= distance(rthird))
			end = rthird;
		else
			beg = lthird; 
	}
	mind = min(mind, distance(beg));
}
int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int n;
	cin >> n >> center.x >> center.y;
	vector < pair<double,double> > a(n);
	
	REP(i,n)
		scanf("%lf %lf",&a[i].x, &a[i].y);

	update(a[0],a[n-1]);
	FOR(i,1,n){
		update(a[i],a[i-1]);
	}

	double answer = ( (double)pi * (pow(maxd,2) - pow(mind,2) ) );
	printf("%0.09f\n",answer);
}
