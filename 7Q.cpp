#include<iostream> 
#include<cmath>

using namespace std; 
int main(){
double x,y,z;
   cout<<"enter the value of x,y,z";
   cin>>x>>y>>z;
   if (x+y<=z||x+z<=y||y+z<=x){
   cout<<"Invalid triangle"<<endl;}
 else {
   cout<<"valid triangle"<<endl;}
return 0;

}