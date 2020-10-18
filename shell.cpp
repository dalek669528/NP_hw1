#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    while(1){
        cout<<"% ";
        getline(cin, str);
        cout<<"=>"<<str<<endl;
    } 
}