#include<iostream>
using namespace std;
int main(){
int x;
int y;
for(x=0;x<=5;++x){//x== olunca x sadece 0 oluyor çünkü == başlangıç değerini değil, direkt değerini atıyor.
    for(y=1;y<=5;++y){
cout<<x<<" "<<y<<endl;
    }

}  
 
    return 0;
}