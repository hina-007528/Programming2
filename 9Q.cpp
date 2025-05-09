#include<iostream>

using namespace std; 
int main(){
char scale;
double temperature,converted_temperature; 
cout<<"enter the value";
cin>>temperature;
cout<<"enter the scale(C for celsius,F for fahrenheit)"<<endl;
cin>>scale;
if(scale=='C'||scale=='c'){
    converted_temperature=(temperature*9/5)+32;
    cout<<temperature<<"C is"<< converted_temperature<<"F"<<endl;
}
else if(scale=='F'||scale=='f'){
    converted_temperature=(temperature-32)*5/9;
    cout<<temperature<<"F is"<< converted_temperature<<"C"<<endl;
}
 else
 {cout<<"invalid";}
return 0;
}

 

