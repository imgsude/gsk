#include<iostream>
using namespace std;
int main(){
int a{};
int b{};
int result;
cout<<"Enter an integer for a:";
cin>>a;
cout<<"Enter an integer for b:";
cin>>b;
cout<<"The decrement will be bigger integer-smaller integer."<<endl;
result= (a>b)?(a-b):(b-a);
cout<<"Your result is: "<<result<<endl;

    return 0;
}