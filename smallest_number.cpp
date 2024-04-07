#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main(){
	string s;
	int num;
	vector<int>v;
	getline(cin,s);
	stringstream ss(s);
	while(ss>>num) v.push_back(num);
	for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
	return 0;
}
