#include<iostream>
using namespace std;
int main(){
    short int k, t, i, j, cases;
    unsigned long long n, coins;
    cin>>t;
    for(cases=0;cases<t;cases++){
        cin>>n>>k;
        unsigned long long sum[k];
        j=0, coins=0;
        for(i=0;i<k;i++){
            sum[i]=0;
        }
        for(i=0;coins<n;i++){
            if(i==k){
                i = i % k;
                j++;
            }
            sum[i] = sum[i] + k*j + i + 1;
            coins = coins + j*k + i + 1;
            if(coins>n){
                sum[i] = sum[i] + n - coins;
                break;
            }
        }
        for(i=0;i<k;i++)
            cout<<sum[i]<<" ";
        cout<<endl;
    }
    system("pause");
    return 0;
}
