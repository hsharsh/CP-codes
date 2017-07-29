#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX 100050

ll parent[MAX],rnk[MAX];

ll fnd(ll x){
	if(parent[x] != x)
		parent[x] = fnd(parent[x]);
	return parent[x];
}

ll uniun(ll x, ll y){
	ll px = fnd(x);
	ll py = fnd(y);

	if(rnk[px] > rnk[py])
		parent[py] = px;
	else
		parent[px] = py;
	if(rnk[px] == rnk[py])
		rnk[py]++;
}

/*
	Union-Find function : Need initialization
*/

int main(){

}
