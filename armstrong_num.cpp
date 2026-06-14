#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n,m,o,power=0,sum=0,rem;
    cout<<"Enter your number: ";
    cin>>n;
    m=n;
    o=n;

    while (n>0) {
        n=n/10;
        power++;
    }
    cout<<power<<"\n";
    
    for (int i=1;i<=power;i++) {
         rem=m%10;
         m=m/10;
         sum=round(pow(rem, power)) + sum;
    }

    cout<<sum<<"\n";

    if (sum==o) {
        cout<<"Entered number is an Armstrong number";
    }
    else {
        cout<<"Not an armstrong number";
    }
}
