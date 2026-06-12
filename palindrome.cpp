#include <iostream>
using namespace std;

int main () {
    int x,y,rem=0,pal=0;
    cout<<"Enter your number: ";
    cin>>x;

        y=x;

    if (x<0) {
        cout<<"Negative numbers are not palindromes";
    }

    while (x>0) {
        rem=x%10;
        x=x/10;
        pal= rem + pal*10;
    }
    cout<<pal;
    if (y==pal) {
        cout<<"\n"<<"Yes it's a palindrome";
    }
    else {
        cout<<"\n"<<"No, not a palindrome";
    }
}