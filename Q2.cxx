#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int>numbers ={5,2,8,1,9};
	sort(numbers.begin(),numbers.end());
	for(int num:numbers){
		cout<<num<<" ";
	}
	return 0;
}