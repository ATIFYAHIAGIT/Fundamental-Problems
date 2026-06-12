#include <iostream>
using namespace std;

int main () {
    int x,ans=1;
    cout<<"Enter your number: ";
    cin>>x;

    if (x==0) {
        cout<<0;
    }
    else if (x<0) {
        cout<<"Enter a valid number!";
    }
    else {
    while (x/ans >= ans) {
        ans++;
    }
    cout<<ans-1<<"-"<<ans;
    return 0 ;
    }
}
