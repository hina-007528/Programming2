#include<iostream>

using namespace std; 
int main(){
    const int high=20;
    const int low=10;
    int num;
    cout<<"Enter an integer";
    cin>>num;
    if(num>=low&&num<=high)
    {cout<<"In range";}
    else
    {cout<<"Out of Range";}
    return 0;
}