#include<iostream>

using namespace std; 
int main(){
    double x,y;
    cout<<"Enter the coordinates";
    cin>>x>>y;
    if(x>0&&y>0)
    {
        cout<<"The point is in Quadrant 1";
    }
    else if(x<0&&y>0)
    {
        cout<<"The point is in Quadrant 2";
    }
   else if(x<0&&y<0)
    {
        cout<<"The point is in Quadrant 3";
    }
   else if(x>0&&y<0)
    {
        cout<<"The point is in Quadrant 4";
    }
    else
    {
        cout<<"The point is on axis";
    }
    return 0;
}