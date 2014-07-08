#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,one,two,three,i,num,den;
    string input;
    cin>>n;
    one=0;
    two=0;
    three=0;
    for(i=0;i<n;i++){
        cin>>input;
        num=input[0]-'0';
        den=input[2]-'0';
        if(num==1 && den==4)
            one++;
        else if(num==1 && den==2)
            two++;
        else
            three++;
    }
    int sum=0;
    if(three>=one){
        sum = sum + three + (two/2);
        if(two%2)
            sum = sum + 1;
    }
    else{
        sum = sum + three + (two/2);
        one = one - three;
        if(two%2){
            two=1;
            if(one>=2){
                one = one - 2;
                two--;
                sum++;
                if(one>0){
                    sum = sum + one/4;
                    if(one%4)
                        sum++;
                }
            }
            else
                sum++;
        }
        else{
            sum = sum + (one/4);
            if(one%4)
                sum++;
        }  
    }
    cout<<sum+1<<endl;    
    system("pause");
    return 0;
}
        
