#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    short arr1[]={1,2,3,4,5};
    short arr2[]={6,7,8,9,1};
    
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    set<short>mergedset;
    for(int i=0;i<size1;++i){
        mergedset.insert(arr1[i]);
    }
    for(int i=0;i<size2;++i){
        mergedset.insert(arr2[i]);
    }
    vector<short>result(mergedset.begin(),mergedset.end());
    cout<<"Sorted merged array without duplicates \n ";
    for(short num : result){
        cout<<num <<" ";
    }
    cout<<endl;
}
