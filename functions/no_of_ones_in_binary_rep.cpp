#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll count_one(ll n){
	while(n){
		n = n & (n-1);
		count++;
	}
	return count;
}

/*
In x−1, the rightmost 1 and bits right to it are flipped,
then by performing x&(x-1), and storing it in x, will reduce x 
to a number containing number of ones (in its binary form) 
less than the previous state of x, thus increasing the value of 
count in each iteration.
*/

int main(){

}