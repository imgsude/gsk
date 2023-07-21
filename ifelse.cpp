#include<iostream>
using namespace std;
int main(){
int your_score{};
cout<<"enter your score: ";
cin>>your_score;
/*if(your_score>=90){
if(your_score>95){
    cout<<"You got an A+"<<endl;
}
else{
    cout<<"You got an A"<<endl;

}
}
else {

cout<<"Sorry you didnt get A"<<endl;
}*/
if(your_score>=60){
if(your_score<75){
    cout<<"You got an B"<<endl;
}
else if(your_score>75&&your_score<85){
    cout<<"You got an B+"<<endl;
}
else if(your_score>85&&your_score<95){
    cout<<"You got an A"<<endl;
}
else if(your_score>=95){
    cout<<"You got an A+"<<endl;
}

}
else if(your_score<60){
    cout<<"Sorry you failed"<<endl;
}
    return 0;
}