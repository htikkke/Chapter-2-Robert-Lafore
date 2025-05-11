#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Myanmar" << setfill('*') << setw(8) << 135 << endl <<
		"India" << setfill('$') << setw(8) << 7290 << endl <<
		"Thailand" << setfill('#') << setw(8) << 11300 << endl <<
		"Korea" << setfill('x') << setw(8) << 16200 << endl;
	return 0;
}
