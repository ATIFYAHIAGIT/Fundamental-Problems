#include <iostream>
using namespace std;

int main () {
    int x,y;
    cout<<"Enter your 1st number: ";
    cin>>x;
    cout<<"Enter your 2nd number: ";
    cin>>y;

    for (int i=min(x,y) ; i>0; i--) {
        if((x%i==0) && (y%i==0))   {
            cout<<"GCD of the numbers is"<<" "<<i;
            break;
        }
    }
    return 0;
}
