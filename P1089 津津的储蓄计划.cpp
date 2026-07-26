#include <iostream>
using namespace std;
int main(){
    int budget[350],mtotal[12],mtomom[12],mleft[12],tonm[12];
    double tmtotal=0.0,totalm=0.0;
    bool savem=false;
    int rs=0;
    for (int i=0;i<12;i++){
        mtotal[i]=0;
        mtomom[i]=0;
        mleft[i]=0;
        tonm[i]=0;
    }
    for(int i=0;i<12;i++){
        cin>>budget[i];
        if(i==0){
            mleft[i]=300-budget[i];
            if(mleft[i]<0){
                savem=true;
                if(rs==0) rs=-1;
                mleft[i]=0;
            }
            else if(mleft[i]>=100){
                tonm[i]=mleft[i]%100;
                mtomom[i]=mleft[i]-tonm[i];
            }
            else{
                mtomom[i]=0;
                tonm[i]=mleft[i];
            }
        }
        else{
            mtotal[i]=300+tonm[i-1];
            mleft[i]=mtotal[i]-budget[i];
            if(mleft[i]<0){
                savem=true;
                if(rs==0){
                    rs=-(i+1);
                }
                mleft[i]=0;
            }
            else if(mleft[i]>=100){
                tonm[i]=mleft[i]%100;
                mtomom[i]=mleft[i]-tonm[i];
            }
            else{
                mtomom[i]=0;
                tonm[i]=mleft[i];
            }
        }
    }
    for(int i=0;i<12;i++){
        tmtotal+=double(mtomom[i]);
    }
    totalm=tmtotal*0.2+tmtotal+double(tonm[11]);
    if (rs==0){
        cout<<(int)totalm<<endl;
    }
    else{
        cout<<rs<<endl;
    }
    return 0;
}
