#include <bits/stdc++.h>
#define MAXN 
#define ll long long
using namespace std;

int main(int argc,char *argv[]){
	string file_name = argv[1];
	string test_cases = argv[2];
	stringstream sin(test_cases);
	int t;sin>>t;
	string bid = "g++ "+file_name+".cpp -o "+file_name+" -O2 -Wall -std=c++14 -DSVK";
	system(bid.c_str());
	//build
	for(int i=1;i<=t;i++){
		//test
		char ch = i+'0';
		string num;num.resize(1);
		num[0]=ch;
		string tst = "./"+file_name+" < "+file_name+num+".in > a.out";
		system(tst.c_str());
		string dif = "diff -Z -B a.out "+file_name+num+".ans";
		if(system(dif.c_str())){
			cout<<"WA on "<<i<<endl;
		}else{
			cout<<"AC on "<<i<<endl;
		}
	}
	return 0;
}
