#include <iostream>

using namespace std;

int main()
{
    float decpounds,fracpounds,fracshillings,fracpence,decshillings;
    cout<<"Enter decimal pounds:";
    cin>>decpounds;

    int pounds=static_cast<int> (decpounds);
    fracpounds=decpounds-pounds;

    int shillings;
    decshillings = fracpounds * 20;
    shillings=static_cast<int>(decshillings);
    fracshillings=decshillings-shillings;

    int pence=static_cast<int>(decshillings*12);

    cout<<"Equivalent to old notation:"<<pounds<<"."<<shillings<<"."<<pence;
    return 0;
}
