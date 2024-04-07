#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main(){
	// map<int,char> mp{{10,'A'},{11,'B'},{12,'C'},{13,'D'},{14,'E'},{15,'F'}};
	int n;
	cin>>n;
	vector<int>v;

	while(n>0){
		
		v.push_back(n%2);
		n=n/2;
	}
	reverse(v.begin(),v.end());
	 for(int i=0;i<v.size();i++){
		cout<<v[i];
	}

	return 0;
	
}
