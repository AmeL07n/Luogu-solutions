#include <iostream>
using namespace std;
int main(){
    int appleheight[10];
    int taotaoheight;
    int maxheight;
    int count=0;
    int i;
    for(i=0;i<10;i++){
        cin>>appleheight[i];
    }
    cin>>taotaoheight;
    maxheight=taotaoheight+30;
    for (i=0;i<10;i++){
        if(appleheight[i]<=maxheight){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
