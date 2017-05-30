#include <bits/stdc++.h>
using namespace std;

#define ll long long

set<ll> prime_genrator(ll n){
	static bool arr[n];
	for (ll i = 2; i*i < n; i++){
		if (!arr[i]){
			for (ll j = i*i; j < n; j += i){
				arr[j] = true;
			}
		}
	}
	set<ll> res;
	for (ll i = 2; i < n; i++)
	{
		if (!arr[i])
			res.insert((ll) i );
	}
	return res;
}

/*
Starting from 2, iterate through a boolean array of length sqrt(n). 
For each number, cross out all the multiples of it starting from it’s 
square (you won’t need to for the numbers before the square as 
they are already covered; Optimization bitch!!).
*/

int main(){

}