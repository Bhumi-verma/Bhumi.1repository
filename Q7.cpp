#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream infile;
    int arr[10];
    infile.open("input.text");
    ofstream outfile("output.text");
     string a;
     while(getline(infile,a)){
        istringstream iss(a);
        string token;
        int i=0,x;
        while(getline(iss,token,' ')){
            x = stoi(token);
            arr[i] =x;
            i++;
        }
        outfile<<a<<endl;
     }
     for(int j=0;j<10;j++)
        cout<<arr[j]<<endl;
        infile.close();
        outfile.close();
     
    }