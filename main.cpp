#include "rect.h"

using namespace std;

int main(int argc, const char * argv[])
{
	Rectangle defrect, newrect(7,8), newrect2;
	cout << "Rectangle with default dimensions\n";
	cout << defrect;
	cout << "newrect(7,8) with Length=7 and Width=8\n";
	cout << newrect;
	cout << "Enter the dimensions for newrect2 in the format \"L,W\"\n"
		"(where L is length and W is width)\n";
	cin >> newrect2;
	cout << "Dimensions of newrect2\n";
	cout << newrect2;
	cout << "newrect is " << ((newrect>newrect2) ? "" : "not ")
	<< "> newrect2.\n";
	cout << "newrect is " << ((newrect>=newrect2) ? "" : "not ")
		<< ">= newrect2.\n";
	cout << "newrect is " << ((newrect==newrect2) ? "" : "not ")
		<< "== newrect2.\n";
	cout << "newrect is " << ((newrect!=newrect2) ? "" : "not ")
		<< "!= newrect2.\n";
	cout << "newrect is " << ((newrect<=newrect2) ? "" : "not ")
		<< "<= newrect2.\n";
	cout << "newrect is " << ((newrect<newrect2) ? "" : "not ")
	<< "< newrect2.\n";
    return 0;
}
