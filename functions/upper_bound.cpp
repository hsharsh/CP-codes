#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll upperbound(vector<ll> array, ll n, ll element){
	ll beg = 0, end = n;
	while(beg + 1 < end){
		ll mid = (beg + end) >> 1;
		if(array[mid] > element)
			end = mid;
		else
			beg = mid;
	}
	return end;
}

/*
	O(log(n)) upperbound for vectors
*/

int main(){

}