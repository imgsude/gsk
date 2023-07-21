#include<iostream>
#include<vector>
using namespace std;
int main(){
int data_items{};
cout<<"how many data items do you have?";
cin>>data_items;
vector<int>data{};
for(int i{1};i<=data_items;++i){
    cout<<"Enter data item "<<i<<": ";
    cin>>data_items;
    data.push_back(data_items);
}
for(auto val: data)
    cout<<val<<endl;


    return 0;
}