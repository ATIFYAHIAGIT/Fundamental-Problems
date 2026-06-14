#include <iostream>
using namespace std;

int main () {
    int n,o,p=0,m=1,complement;
    cout<<"Enter your number: ";
    cin>>n;
    o=n;
    while (n>0) {
        if (n/2>0) {
            p++;   
        }
        n=n/2;
    }
    //cout<<p<<"\n";
    
    for(int i=1;i<=p;i++) {
        m=2*m;
    }
    complement=2*m - o -1;
    cout<<complement;
}
