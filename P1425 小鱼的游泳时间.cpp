#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    if(d>=b){
        e=c-a;
        f=d-b;
    }
    else{
        e=c-1-a;
        f=60+d-b;
    }
    cout<<e<<" "<<f<<endl;
    return 0;
}
