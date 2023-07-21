#include<iostream>
using namespace std;
int main(){
/*int i;
int j;
for(i=1;i<=10;i++){
for(j=1;j<=8;j++){
cout<<"This is a test no "<<i<<" and "<<j<<endl;
}

}*/
int num1;
int num2;
for(int num1{1};num1<=10;num1++){
    for(int num2{1};num2<=10;num2++){
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    }
}
    return 0;
}