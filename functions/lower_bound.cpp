#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll lowerbound(vector<ll> array, ll n, ll element){
	ll beg = -1, end = n;
	while(beg + 1 < end){
		ll mid = (beg + end) >> 1;
		if(array[mid] < element)
			beg = mid;
		else
			end = mid;
	}
	return end;
}

/*
	O(log(n)) lowerbound for vectors
*/

int main(){

}