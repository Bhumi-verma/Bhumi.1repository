// class template
#include <iostream>
using namespace std;
template <class T>
class Box{
	T value;
	public:
	void set (T val){value = val;}
	T get(){return value;}
};
int main(){
	Box<int>intBox;
	intBox.set(100);
	cout<<intBox.get()<<endl;
	
	Box<string>strBox;
	strBox.set("Template example");
	cout<<strBox.get()<<endl;