#include<iostream>
using namespace std;
int main(){
    string str;
    int key,i,t;
    cin>>t;
    while(t--){
        cin>>key;
        cin>>str;
        i=0;
        if(key<26){
            while(str[i]!=0){
                if(int(str[i])==46)
                    str[i]=int(str[i])-14;
                else if(str[i]<=90)
                    str[i]=(int(str[i])+key-65)%26 + 65;
                else
                    str[i]=(int(str[i])+key-97)%26 + 97;
                i++;
            }
        }
        else{
            while(str[i]!=0){
                if(int(str[i])==46)
                    str[i]=int(str[i])-14;
                else if(str[i]<=90)
                    str[i]=(int(str[i])+key-65)%26 + 97;
                else
                    str[i]=(int(str[i])+key-97)%26 + 65;
                i++;
            }
        }
        cout<<str<<endl;
    }
    system("pause");
    return 0;
}
