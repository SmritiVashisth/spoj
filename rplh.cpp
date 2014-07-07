#include<iostream>
#include<cmath>
using namespace std;
int main(){
    unsigned int cases, range, velocity, i;
    float g = 9.806, pi = 2*acos(0.0);
    double theta, radians, degrees;
    cin>>cases;
    for(i=0; i<cases; i++){
        cin>>range>>velocity;
        theta =double(g*range/velocity);
        radians = acos(theta);
        degrees = (180/pi)*radians;
        degrees = 90 - degrees;
        if(0.0<degrees<45.0)
            cout<<"Scenario #"<<i+1<<":"<<radians<<"\n";
        else
            cout<<"Scenario #"<<i+1<<": -1"<<"\n";
    }
    return 0;
}
