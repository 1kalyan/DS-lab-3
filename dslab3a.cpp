#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int i,s[8],qcomp[8],pcomp[8],t[8],u[8],z[8];
    int P[8]={1,1,1,1,0,0,0,0};
    int Q[8]={1,1,0,0,1,1,0,0};
    int R[8]={1,0,1,0,1,0,1,0};
    cout<<"P"<<setw(5)<<"Q"<<setw(5)<<"R"<<setw(6)<<"-P"<<setw(4)<<"-Q"<<setw(9)<<"(Pn-QvR)"<<setw(7)<<"(-PvR)"<<setw(20)<<"(Pn-QvR)<->(-PvR)"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    for(i=0;i<8;i++){
        qcomp[i] = 1 - Q[i];
        pcomp[i]= 1- P[i];
        s[i]=P[i]&&qcomp[i];
        t[i]= s[i]|| R[i];
        u[i]= pcomp[i] || R[i];
        if(t[i]==u[i]){
            z[i]=1;
        }
        else if(t[i]==0 && u[i]==1){
            z[i]=1;
        }
        else{
            z[i]=0;
        }
        cout<<P[i]<<setw(5)<<Q[i]<<setw(5)<<R[i]<<setw(5)<<pcomp[i]<<setw(5)<<qcomp[i]<<setw(5)<<t[i]<<setw(8)<<u[i]<<setw(15)<<z[i]<<endl;

    }

    return 0;

}