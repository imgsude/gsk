#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<vector<int>>vector_2d{
    {1,2,3},
    {10,20,30,40},
    {100,200,300,400,500}
};
for(auto vec: vector_2d){
    for(auto val: vec){
        cout<< val <<" ";
    }
    cout<<endl;
}
/*int grid[5][3];
for(int row=0;row<5;++row){
    for(int colon=0;colon<3;++colon){
        grid[row][colon]=1000;
    }
}*/
    return 0;
}