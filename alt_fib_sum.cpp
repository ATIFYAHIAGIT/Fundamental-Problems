#include <iostream>
using namespace std;

int main () {
    int a,b,next,n,sum=0;
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

            if(i%2==1) {
                sum=sum+next;
            }

            next=a+b;
        }
        cout<<"\n"<<"Sum is: "<<sum+1;
    }
    return 0;
}

