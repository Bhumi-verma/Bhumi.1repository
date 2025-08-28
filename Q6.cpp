#include<iostream>
using namespace std;
int main(){
    int row,cols;
    cout<<"Enter number of rows :";
    cin>>row;
    cout<<"Enter number of columns :";
    cin>>cols;
    int arr[100][100];
    int prod = 1;
    cout<<"Enter the elements of the matrix :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
            prod *= arr[i][j];
        }
    }
    cout<<"product of all elements in the matrix : " <<prod<<endl;
    return 0;
}