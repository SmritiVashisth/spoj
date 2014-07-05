#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int r,n,res;
    float ans;
    float pi = acos(-1);
    while(1){
        cin>>r>>n;
        if(r==0 && n==0)
            break;
        else{
            ans = r / sin(pi/(n*2));
            cout<<setprecision(2)<<fixed<<ans<<endl;
        }
    }
    system("pause");
    return 0;
}
