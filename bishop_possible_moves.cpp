#include <iostream>
using namespace std;

int main()
{
    int x, y, count = 0;
    cout << "ENTER THE COORDINATES OF YOUR BISHOP " << "\n"
         << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    if ((x > 0 && x < 9) && (y > 0 && y < 9))
    {   
        cout<<"valid values entered "<<"\n";
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                if ( (x-i)==(y-j) || (x-i)==(j-y))
                {
                    count++;
                }
            }
        }
    }

    else {
        cout<<"INVALID VALUES";
    }

    cout << "Number of possible moves of bishop: " << count ;
    return 0;
}
