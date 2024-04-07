#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	string s,v;
	vector<int>v1,v2;
	getline(cin,s);
	
	getline(cin,v);
	int num;
	stringstream ss(s);
	stringstream sv(v);
	while(ss>>num) v1.push_back(num);
	while(sv>>num) v2.push_back(num);
	bool flag=false;
	if(v1.size()>v2.size()) cout<<"No"<<"\n";
	//else{
			//for(int i=0;i<v1.size();i++){
				//flag=false;
				//for(int j=0;j<v2.size();j++){
					//if(v1[i]==v2[j]){
					// flag=true;
					// break;
					//}
				//}
				//0if(flag==false) break;
			//}
			//cout<<(flag ? "yes" : "no");


	//}
	else{
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		int i=0,j=0;
		vector<int>ans;
		while(i!=v1.size() && j!=v2.size()){
			if(v1[i]==v2[j]){
				ans.push_back(v1[i]);
				i++;
				j++;
			}
			else {
				if(v1[i] > v2[j]) j++;
				else i++;
			} 
		}
		
		cout<<(ans==v1? "Yes" : "No"); 
	}	
	

	return 0;
}
