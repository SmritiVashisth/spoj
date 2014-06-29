#include<iostream>
#include<algorithm>
using namespace std;
int a[100001];
int n,c;
int func(int x){
    int cows=1;
    int i;
    long long pos=a[0];
    for(i=1;i<n;i++){
        if(a[i]-pos>=x){
            cows++;
            if(cows==c)
                return 1;
        pos=a[i];
        }
    }
    return 0;
}
int bsearch(){
    int start=0;
    int end=a[n-1];
    while(start<end){
        int mid=(start+end)/2;
        if(func(mid)==1)
            start=mid+1;
        else
            end=mid;
    }
    return start-1;
}
int main(){
    int t,i;
    cin>>t;
    while(t--){
        cin>>n>>c;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<bsearch()<<endl;
    }
    return 0;
}
