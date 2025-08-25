// function template]
#include<iostream>
using namespace std;
template<typename T>
T add(T a, T b){
	return a+b;
}
int  main(){
	cout<<add(5,3)<<endl;
	cout<<add(2.5,3.8)<<endl;
	cout<<add<string>("Hi","there");
}