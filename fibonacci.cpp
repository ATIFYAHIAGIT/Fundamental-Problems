#include <iostream>
using namespace std;

int main () {
    int a,b,next,n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    a=0;
    b=1;
    next=1;

    if (n==0) {
        cout<<"Invalid";
    }

    if (n==1) {
        cout<<0;
    }
    
    if(n>1) {
        cout<<0<<" "<<1<<" ";
        for (int i=2; i<n; i++) {
            cout<<next<<" ";
            a=b;
            b=next;
            next=a+b;
        }
    }
    return 0;
}