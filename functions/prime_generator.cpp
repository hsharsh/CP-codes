#include <bits/stdc++.h>
using namespace std;

set<long long> prime_genrator(long long n){
	static bool arr[n];
	for (long long i = 2; i*i < n; i++){
		if (!arr[i]){
			for (long long j = i*i; j < n; j += i){
				arr[j] = true;
			}
		}
	}
	set<long long> res;
	for (long long i = 2; i < n; i++)
	{
		if (!arr[i])
			res.insert((long long) i );
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