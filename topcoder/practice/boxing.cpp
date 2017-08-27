#include <bits/stdc++.h>
using namespace std;

class Boxing
{
public:
	int maxCredit(vector<int> a, vector<int> b, vector<int> c, vector<int> d, vector<int> e);	
};

int Boxing::maxCredit(vector<int> a, vector<int> b, vector<int> c, vector<int> d, vector<int> e){
	int count=0,m=-1;
	vector<int> v(5,0);
	vector<int> j(5,0);
	if(a.size()>0)
		m=max(m,a[a.size()-1]);
	if(b.size()>0)
		m=max(m,b[b.size()-1]);
	if(c.size()>0)	
		m=max(m,c[c.size()-1]);
	if(d.size()>0)
		m=max(m,d[d.size()-1]);
	if(e.size()>0)
		m=max(m,e[e.size()-1]);
	for(int i=0;i<m+1;i++){
		if(a[j[0]]==i && j[0]<a.size()){
			j[0]++;
			if(!v[0])
				v[0]++;
		}
		if(b[j[1]]==i && j[1]<b.size()){
			j[1]++;
			if(!v[1])
				v[1]++;
		}		
		if(c[j[2]]==i && j[2]<c.size()){
			j[2]++;
			if(!v[2])
				v[2]++;
		}
		if(d[j[3]]==i && j[3]<d.size()){
			j[3]++;
			if(!v[3])
				v[3]++;
		}
		if(e[j[4]]==i && j[4]<e.size()){
			j[4]++;
			if(!v[4])
				v[4]++;
		}
		if(v[0]+v[1]+v[2]+v[3]+v[4]>2){
			count++;		
			v={0,0,0,0,0};
		}
	}
	return count;
}

int main(){
	Boxing a;
	cout<<a.maxCredit({100,200,300,1200,6000},{},{900,902,1200,4000,5000,6001},{0,2000,6002},{1,2,3,4,5,6,7,8})<<endl;
}
