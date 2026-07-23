#include <iostream>
using namespace std;
int main(){
    int l,m;
    cin >>l>>m;
    int u,v;
    bool hasTree[10001];
    for(int i=0;i<=l;i++){
        hasTree[i]=true;
    }
    for (int i=0;i<m;i++){
        cin>>u>>v;
        for (int j=u;j<=v;j++){
                hasTree[j]=false;
        }
    }
    int count=0;
    for (int i=0;i<=l;i++){
        if(hasTree[i]==true){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
