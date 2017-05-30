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
struct Job
{
    int start, finish, profit;
};
 
// A utility function that is used for sorting events
// according to finish time
bool jobComparataor(Job s1, Job s2)
{
    return (s1.finish < s2.finish);
}
 
int latestNonConflict(Job arr[], int i)
{
    for (int j=i-1; j>=0; j--)
    {
        if (arr[j].finish <= arr[i-1].start)
            return j;
    }
    return -1;
}
 
// A recursive function that returns the maximum possible
// profit from given array of jobs.  The array of jobs must
// be sorted according to finish time.
int findMaxProfitRec(Job arr[], int n)
{
    // Base case
    if (n == 1) return arr[n-1].profit;
 
    // Find profit when current job is inclueded
    int inclProf = arr[n-1].profit;
    int i = latestNonConflict(arr, n);
    if (i != -1)
      inclProf += findMaxProfitRec(arr, i+1);
 
    // Find profit when current job is excluded
    int exclProf = findMaxProfitRec(arr, n-1);
 
    return max(inclProf,  exclProf);
}
 
// The main function that returns the maximum possible
// profit from given array of jobs
int findMaxProfit(Job arr[], int n)
{
    // Sort jobs according to finish time
    sort(arr, arr+n, jobComparataor);
 
    return findMaxProfitRec(arr, n);
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int n;
	cin >> n;
	vi a(n);
	Job arr[n];
	REP(i, n){
		cin >> a[i];
	}
	vb check(5010,false);
	int it = 0;
	REP(i, n){
		if(!check[a[i]]){
			check[a[i]] = true;
			int last = i;
			FOR(j, i,  n){
				if(a[i]==a[j])
					last = j;
			}
			vb xored(5010,false);
			ll xorcalc = 0;
			FOR(j, i, last+1){
				if(!xored[a[j]]){
					xored[a[j]] = true;
					xorcalc^=a[j];
				}
			}
			arr[it].start = i;
			arr[it].finish = last;
			arr[it].profit = xorcalc;
			it++;
		}
	}
	REP(i,it){
		cout<<arr[i].start<<" "<<arr[i].finish<<" "<<arr[i].profit<<endl;
	}
	cout << "The optimal profit is " << findMaxProfit(arr, it);

}
