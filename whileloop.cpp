#include<iostream>
using namespace std;
int main(){
int num{};
bool done{false};

while(!done){
   cout<<"Enter an integer between 10 and 100:";
cin>>num;
   
if(num<=10||num>=100)
 cout<<"Enter a valid integer."<<endl;
    
    else{
cout<<"Yup this integer is between 10 and 100!"<<endl;
done=true;

    }

}
    return 0;
}