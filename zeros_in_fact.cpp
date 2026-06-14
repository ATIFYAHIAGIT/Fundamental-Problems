#include <iostream>
using namespace std;

int main () {
    int x,rem,ans=0;
    cout<<"Enter your number: ";
    cin>>x;

    while(x>0) {
        x=x/5;
        ans=ans+x;
    }
    cout<<ans;
}
