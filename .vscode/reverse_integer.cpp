#include <iostream>
using namespace std;

int main () {
    long long int x,rem=0,dig=0;
    cout<<"Enter your number: ";
    cin>>x;

    while (x!=0) {
        rem=x%10;
        x=x/10;
        if (dig>INT32_MAX/10 || dig<INT32_MIN/10) {
            return 0;
        }
        else {dig=rem + dig*10;}
    }
    
    cout<<dig;
    return 0;
}
    