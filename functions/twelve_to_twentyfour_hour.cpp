#include <bits/stdc++.h>
using namespace std;

string converto24hour(string input){
		if(input.substr(0,2)=="12" && input[5]=='A')
			input="00"+input.substr(2);

		if(input[5]=='P'){
			if(input.substr(0,2)!="12"){
				input = to_string(stoi(input.substr(0,2))+12)+input.substr(2);
			}
		}
		return input.substr(0,2)+input.substr(3,2);
}

/*
12:00AM midnight
12:00PM noon

Convert form 12hour clock to 24hour clock
12:45AM to 0045
04:56PM to 1656
*/

int main(){

}