#include <bits/stdc++.h>
using namespace std;
int main(){
int a=0;
int b=0;
try{
 try{
    if(b==0) throw 0;
    cout<<a<<b<<endl;
 }
 catch(...){
    cout<<"throws fro the try block.!"<<endl;
    throw;
 }
 }
 catch(...){
    cout<<"Catched"<<endl;
 }
 cout<<"program ended normally"<<endl;

return 0;

}