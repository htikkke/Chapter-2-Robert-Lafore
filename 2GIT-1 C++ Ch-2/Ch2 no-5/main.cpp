#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char x;
    cout << "Enter a letter:" << endl;
    cin >>  x;
    if (islower(x))
    cout << "Is not a Capital letter: "<< endl;
    else
    cout << "Is a Capital letter:" <<endl;
    return 0;
}
