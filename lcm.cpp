#include <iostream>
using namespace std; 

int main () {
    int x,y,i=1;
    cout<<"Enter your 1st number: ";
    cin>>x;
    cout<<"Enter your 2nd number: ";
    cin>>y;

    for (i; i<= (x*y);i++){
        if ((i%x==0) && (i%y==0)) {
            break;
        }
    }
    cout<<"LCM of the input numbers is:"<<" "<<i;
    return 0;
}
